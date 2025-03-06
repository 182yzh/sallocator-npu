/**
 * Copyright (c) Huawei Technologies Co., Ltd. 2024. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef OP_API_INC_GROUPED_MATMUL_V4_H
#define OP_API_INC_GROUPED_MATMUL_V4_H
#include "aclnn/aclnn_base.h"
#include "aclnn_util.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    GMM_ACT_TYPE_NONE = 0LL,
    GMM_ACT_TYPE_RELU = 1LL,
    GMM_ACT_TYPE_GELU_TANH = 2LL,
    GMM_ACT_TYPE_GELU_ERR_FUNC = 3LL,
    GMM_ACT_TYPE_FAST_GELU = 4LL,
    GMM_ACT_TYPE_SILU = 5LL,
} GMMActType;

/**
 * @brief aclnnGroupedMatmulV4的第一段接口，根据具体的计算流程，计算workspace大小。
 * @domain aclnn_ops_infer
 *
 * @param [in] x: 表示公式中的x，数据类型支持FLOAT16、BFLOAT16、INT8、FLOAT32数据类型，数据格式支持ND，支持的最大长度为128个。
 * @param [in] weight:
 * 表示公式中的weight，数据类型支持FLOAT16、BFLOAT16、INT8、FLOAT32数据类型，数据格式支持ND，支持的最大长度为128个。
 * @param [in] biasOptional:
 * 表示公式中的bias，数据类型支持FLOAT16、FLOAT32、INT32数据类型，数据格式支持ND，支持的最大长度为128个。
 * @param [in] scaleOptional: 表示量化参数，数据类型支持UINT64、BFLOAT16、FLOAT32数据类型，数据格式支持ND，支持的最大长度为128个。
 * @param [in] offsetOptional: 表示量化参数，数据类型支持FLOAT32数据类型，数据格式支持ND，支持的最大长度为128个。
 * @param [in] antiquantScaleOptional:
 * 表示伪量化参数，数据类型支持FLOAT16，BFLOAT16数据类型，数据格式支持ND，支持的最大长度为128个。
 * @param [in] antiquantOffsetOptional:
 * 表示伪量化参数，数据类型支持FLOAT16，BFLOAT16数据类型，数据格式支持ND，支持的最大长度为128个。
 * @param [in] perTokenScaleOptional:
 * 表示per token量化参数，数据类型支持FLOAT32数据类型，数据格式支持ND，支持的最大长度为1个。
 * @param [in] groupListOptional: 可选参数，代表输入和输出分组轴上的索引情况，数据类型支持INT64，
 * 部分场景支持的最大长度为1024个（详见接口文档约束说明），其余场景支持的最大长度为128个。
 * @param [in] activationInputOptional: 可选参数，代表激活函数的反向输入。
 * @param [in] activationQuantScaleOptional: 可选参数，预留参数。
 * @param [in] activationQuantOffsetOptional: 可选参数，预留参数。
 * @param [in] splitItem:
 * 整数型参数，代表输出是否要做tensor切分，0/1代表输出为多tensor；2/3代表输出为单tensor，默认值为0。
 * @param [in] groupType:
 * 整数型参数，代表需要切分的轴，-1代表不需要切分；0代表需要切分M轴；1代表需要切分N轴；2代表需要切分K轴。
 * @param [in] groupListType:
 * 整数型参数，可取值0或1，0代表groupListOptional中数值为分组轴大小的cumsum结果（累积和），
 * 1代表groupListOptional中数值为分组轴上每组大小。
 * @param [in] actType:整数型参数，代表激活函数类型，各激活函数枚举值参考枚举类GMMActType。
 * @param [out] out: 表示公式中的out，数据类型支持FLOAT16、BFLOAT16、INT8、FLOAT32数据类型，数据格式支持ND，支持的最大长度为128个。
 * @param [out] activationFeatureOutOptional: 激活函数的输入数据。
 * @param [out] dynQuantScaleOutOptional: 预留参数。
 * @param [out] workspaceSize: 返回用户需要在npu device侧申请的workspace大小。
 * @param [out] executor: 返回op执行器，包含算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnGroupedMatmulV4GetWorkspaceSize(
    const aclTensorList *x, const aclTensorList *weight, const aclTensorList *biasOptional,
    const aclTensorList *scaleOptional, const aclTensorList *offsetOptional,
    const aclTensorList *antiquantScaleOptional, const aclTensorList *antiquantOffsetOptional,
    const aclTensorList *perTokenScaleOptional, const aclTensor *groupListOptional,
    const aclTensorList *activationInputOptional, const aclTensorList *activationQuantScaleOptional,
    const aclTensorList *activationQuantOffsetOptional,  int64_t splitItem, int64_t groupType,
    int64_t groupListType, int64_t actType, aclTensorList *out, aclTensorList *activationFeatureOutOptional,
    aclTensorList *dynQuantScaleOutOptional, uint64_t *workspaceSize,
    aclOpExecutor **executor);

/**
 * @brief aclnnGroupedMatmulV4的第二段接口，用于执行计算。
 * @param [in] workspace: 在npu device侧申请的workspace内存起址。
 * @param [in] workspaceSize: 在npu device侧申请的workspace大小，由第一段接口aclnnGtTensorGetWorkspaceSize获取。
 * @param [in] stream: acl stream流。
 * @param [in] executor: op执行器，包含了算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnGroupedMatmulV4(void* workspace, uint64_t workspaceSize, aclOpExecutor* executor,
                                           aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif