/**
 * Copyright (c) Huawei Technologies Co., Ltd. 2023. All rights reserved.
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
#ifndef OP_API_INC_MULTI_SCALE_DEFORMABLE_ATTENTION_GRAD_H_
#define OP_API_INC_MULTI_SCALE_DEFORMABLE_ATTENTION_GRAD_H_

#include "aclnn/aclnn_base.h"
#include "aclnn_util.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief aclnnMultiScaleDeformableAttentionGrad的第一段接口，根据具体的计算流程，计算workspace大小。
 * @domain aclnn_ops_train
 * @param [in] value:
 * Device侧的aclTensor，特征图的特征值，数据类型支持FLOAT、FLOAT16、BFLOAT16，支持非连续的Tensor，数据格式支持ND
 * @param [in] spatialShape:
 * Device侧的aclTensor，存储每个尺度特征图的高和宽，数据类型支持INT32、INT64，支持非连续的Tensor，数据格式支持ND。
 * @param [in] levelStartIndex:
 * Device侧的aclTensor，每张特征图的起始索引，数据类型支持INT32、INT64，支持非连续的Tensor，数据格式支持ND。
 * @param [in]
 * location：Device侧的aclTensor，存储采样点的位置，数据类型支持FLOAT、FLOAT16、BFLOAT16，支持非连续的Tensor，数据格式支持ND。
 * @param [in] attnWeight:
 * Device侧的aclTensor，存储每个采样点的权重，数据类型支持FLOAT、FLOAT16、BFLOAT16，支持非连续的Tensor，数据格式支持ND。
 * @param [in] gradOutput:
 * Device侧的aclTensor，反向算子的初始梯度，数据类型支持FLOAT、FLOAT16、BFLOAT16，支持非连续的Tensor，数据格式支持ND。
 * @param [in] gradValue:
 * Device侧的aclTensor，输入value对应的梯度，数据类型支持FLOAT、FLOAT16、BFLOAT16，支持非连续的Tensor，数据格式支持ND。
 * @param [in] gradLocation:
 * Device侧的aclTensor，输入location对应的梯度，数据类型支持FLOAT、FLOAT16、BFLOAT16，支持非连续的Tensor，数据格式支持ND。
 * @param [in] gradAttnWeight:
 * Device侧的aclTensor，输入attnWeight对应的梯度，数据类型支持FLOAT、FLOAT16、BFLOAT16，支持非连续的Tensor，数据格式支持ND。
 * @param [out] workspaceSize: 返回用户需要在npu device侧申请的workspace大小。
 * @param [out] executor: 返回op执行器，包含算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnMultiScaleDeformableAttentionGradGetWorkspaceSize(
    const aclTensor* value, const aclTensor* spatialShape, const aclTensor* levelStartIndex, const aclTensor* location,
    const aclTensor* attnWeight, const aclTensor* gradOutput, aclTensor* gradValue, aclTensor* gradLocation,
    aclTensor* gradAttnWeight, uint64_t* workspaceSize, aclOpExecutor** executor);

/**
 * @brief aclnnMultiScaleDeformableAttentionGrad的第二段接口，用于执行计算。
 * @param [in] workspace: 在npu device侧申请的workspace内存起址。
 * @param [in] workspaceSize: 在npu device侧申请的workspace大小，由第一段接口aclnnInplaceMishGetWorkspaceSize获取。
 * @param [in] executor: op执行器，包含了算子计算流程。
 * @param [in] stream: acl stream流。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnMultiScaleDeformableAttentionGrad(void* workspace, uint64_t workspaceSize,
                                                             aclOpExecutor* executor, aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif  // OP_API_INC_MULTI_SCALE_DEFORMABLE_ATTENTION_GRAD_H_
