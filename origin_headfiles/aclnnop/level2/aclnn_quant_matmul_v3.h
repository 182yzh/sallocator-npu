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
#ifndef OP_API_INC_QUANT_MATMUL_V3_
#define OP_API_INC_QUANT_MATMUL_V3_

#include <string>

#include "aclnn/aclnn_base.h"
#include "aclnn_util.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * 算子功能：实现quantBatchMatmulV3计算
 * @brief aclnnQuantMatmulV3的第一段接口，根据具体的计算流程，计算workspace大小。
 * @domain aclnn_ops_infer
 * @param [in] x1: matmul左矩阵，数据类型支持：int8。
 * @param [in] x2: matmul右矩阵，数据类型支持：int8。
 * @param [in] scale: 量化参数，数据类型支持：uint64_t, float, int64_t, bfloat16。
 * @param [in] offset: 量化参数，数据类型支持：float32。
 * @param [in] bias: 偏置，数据类型支持：int32_t, bfloat16。
 * @param [in] transposeX1: a矩阵是否转置，默认值：false。
 * @param [in] transposeX2: b矩阵是否转置，默认值：false。
 * @param [out] out: 计算结果，数据类型：half, int8, bfloat16。
 * @param [out] workspaceSize: 返回需要在npu device侧申请的workspace大小。
 * @param [out] executor: 返回op执行器，包含了算子计算流程。
 * @return aclnnStatus: 返回状态码
 */
ACLNN_API aclnnStatus aclnnQuantMatmulV3GetWorkspaceSize(const aclTensor* x1, const aclTensor* x2,
                                                         const aclTensor* scale, const aclTensor* offset,
                                                         const aclTensor* bias, bool transposeX1, bool transposeX2,
                                                         const aclTensor* out, uint64_t* workspaceSize,
                                                         aclOpExecutor** executor);

/**
 * @brief aclnnQuantMatmulV3的第二段接口，用于执行计算。
 * @param [in] workspace: 在npu device侧申请的workspace内存起址。
 * @param [in] workspace_size: 在npu device侧申请的workspace大小，由第一段接口aclnnQuantMatmulV3GetWorkspaceSize获取。
 * @param [in] exector: op执行器，包含了算子计算流程。
 * @param [in] stream: acl stream流。
 * @return aclnnStatus: 返回状态码
 */
ACLNN_API aclnnStatus aclnnQuantMatmulV3(void* workspace, uint64_t workspaceSize, aclOpExecutor* executor,
                                         aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif  // OP_API_INC_QUANT_MATMUL_V3_