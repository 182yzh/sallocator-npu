/**
 * Copyright (c) Huawei Technologies Co., Ltd. 2024. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/license/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*!
 * \file aclnn_quant_matmul_all_reduce_v3.h
 * \brief
 */
#ifndef OP_API_INC_QUANT_MATMUL_ALL_REDUCE_V3_
#define OP_API_INC_QUANT_MATMUL_ALL_REDUCE_V3_

#include <string>

#include "aclnn/aclnn_base.h"
#include "hccl/hccl.h"
#include "hccl/hccl_types.h"

#include "aclnn_util.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief aclnnQuantMatmulAllReduceV3的第一段接口，根据具体的计算流程，计算workspace大小。
 * @domain aclnn_ops_infer
 * 算子功能：实现mm+AllReduce融合计算
 * @param [in] x1: matmul左矩阵，数据类型支持：int8。
 * @param [in] x2: matmul右矩阵，数据类型支持：int8。
 * @param [in] biasOptional: 偏置，数据类型支持：int32。
 * @param [in] x3Optional: add操作参数，数据类型支持：float16,bfloat16。
 * @param [in] dequantScale: 去量化系数，数据类型支持：int64,uint64,bfloat16,float32。
 * @param [in] pertokenScaleOptional: per-token去量化系数，数据类型支持：float32。
 * @param [in] commQuantScale1Optional: 通信量化计算参数，数据类型支持：float16, bfloat16。
 * @param [in] commQuantScale2Optional: 通信量化计算参数，数据类型支持：float16, bfloat16。
 * @param [in] group: 标识列组的字符串。
 * @param [in] reduceOp: reduce操作类型，默认值：sum。
 * @param [in] commTurn: 通信数据切分数，即总数据量/单次通信量，默认值：0。
 * @param [in] streamMode: acl流模式的枚举，类型支持：1。
 * @param [out] output: 计算+通信的结果，数据类型：float16,bfloat16。
 * @param [out] workspaceSize: 返回需要在npu device侧申请的workspace大小。
 * @param [out] executor: 返回op执行器，包含了算子计算流程。
 * @return aclnnStatus: 返回状态码
 */
ACLNN_API aclnnStatus aclnnQuantMatmulAllReduceV3GetWorkspaceSize(const aclTensor *x1, const aclTensor *x2,
                                                        const aclTensor *biasOptional, const aclTensor *x3Optional,
                                                        const aclTensor *dequantScale,
                                                        const aclTensor *pertokenScaleOptional, const aclTensor* commQuantScale1Optional,
                                                        const aclTensor* commQuantScale2Optional, const char* group,
                                                        const char *reduceOp, int64_t commTurn,
                                                        int64_t streamMode, const aclTensor *output,
                                                        uint64_t *workspaceSize, aclOpExecutor **executor);

/**
 * @brief aclnnQuantMatmulAllReduceV3的第二段接口，用于执行计算。
 * @param [in] workspace: 在npu device侧申请的workspace内存起址。
 * @param [in] workspace_size: 在npu device侧申请的workspace大小，由第一段接口aclnnQuantMatmulAllReduceV3GetWorkspaceSize获取。
 * @param [in] exector: op执行器，包含了算子计算流程。
 * @param [in] stream: acl stream流。
 * @return aclnnStatus: 返回状态码
 */
ACLNN_API aclnnStatus aclnnQuantMatmulAllReduceV3(void *workspace, uint64_t workspaceSize, aclOpExecutor *executor,
                                        aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif  // OP_API_INC_QUANT_MATMUL_ALL_REDUCE_V3_