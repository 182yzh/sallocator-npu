/**
 * Copyright (c) Huawei Technologies Co., Ltd. 2023-2024. All rights reserved.
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
#ifndef OP_API_INC_BATCH_MATMUL_REDUCE_SCATTER_ALL_TO_ALL_
#define OP_API_INC_BATCH_MATMUL_REDUCE_SCATTER_ALL_TO_ALL_

#include <string>

#include "aclnn/aclnn_base.h"
#include "aclnn_util.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * 算子功能：实现bmm + reduceScatter + alltoall 融合计算
 * @brief aclnnBatchMatMulReduceScatterAlltoAll的第一段接口，根据具体的计算流程，计算workspace大小。
 * @domain aclnn_ops_infer
 * @param [in] x: matmul左矩阵，数据类型支持：float16, bf16。
 * @param [in] weight: matmul右矩阵，数据类型支持：float16, bf16。
 * @param [in] biasOptional: 偏置，数据类型支持：float16, bf16。
 * @param [in] groupEp: 专家并行的通信域。
 * @param [in] groupTp: Tensor并行的通信域。
 * @param [in] epWorldSize: 专家通信域并行数量。
 * @param [in] tpWorldSize: Tensor域并行数量。
 * @param [in] yShardType: 输出out在第二/三维度上按tp域进行shard，类型支持：0/1。
 * @param [out] out: 计算+通信的结果，数据类型：同输入。
 * @param [out] workspaceSize: 返回需要在npu device侧申请的workspace大小。
 * @param [out] executor: 返回op执行器，包含了算子计算流程。
 * @return aclnnStatus: 返回状态码
 */
ACLNN_API aclnnStatus aclnnBatchMatMulReduceScatterAlltoAllGetWorkspaceSize(const aclTensor* x, const aclTensor* weight,
                                                                            const aclTensor* biasOptional,
                                                                            const char* groupEp, const char* groupTp,
                                                                            int64_t epWorldSize, int64_t tpWorldSize,
                                                                            int64_t yShardType, aclTensor* out,
                                                                            uint64_t* workspaceSize,
                                                                            aclOpExecutor** executor);

/**
 * @brief aclnnBatchMatMulReduceScatterAlltoAll的第二段接口，用于执行计算。
 * @param [in] workspace: 在npu device侧申请的workspace内存起址。
 * @param [in] workspace_size: 在npu device侧申请的workspace大小，由第一段接口aclnnBatchMatMulReduceScatterAlltoAllGetWorkspaceSize获取。
 * @param [in] exector: op执行器，包含了算子计算流程。
 * @param [in] stream: acl stream流。
 * @return aclnnStatus: 返回状态码
 */
ACLNN_API aclnnStatus aclnnBatchMatMulReduceScatterAlltoAll(void* workspace, uint64_t workspaceSize,
                                                            aclOpExecutor* executor, aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif  // OP_API_INC_BATCH_MATMUL_REDUCE_SCATTER_ALL_TO_ALL_