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
#ifndef OP_API_INC_TANH_H_
#define OP_API_INC_TANH_H_

#include "aclnn/aclnn_base.h"
#include "aclnn_util.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief aclnnTanh的第一段接口，根据具体的计算流程，计算workspace大小。
 * @domain aclnn_math
 *
 * 算子功能：完成tanh函数计算
 * 计算公式：
 * $$ output_i = (exp(x) - exp(-x)) / (exp(x) + exp(-x))
 *
 * 实现说明：
 * api计算的基本路径：
 * ```mermaid
 * graph LR
 *     A[(self)] -->B([L0::Contiguous])
 *     B --> C([L0::Tanh])
 *     C --> D([L0::ViewCopy])
 *     D --> E[(out)]
 * ```
 *
 * @param [in] self: npu
 * device侧的aclTensor，数据类型支持FLOAT、FLOAT16、BOOL、UINT8、INT8、INT16、INT32、INT64、
 * BFLOAT16(仅ASCEND910B、ASCEND910_93支持), 支持非连续的Tensor。
 * 支持非连续的Tensor，数据格式支持ND
 * @param [in] out: npu
 * device侧的aclTensor，数据类型支持FLOAT、FLOAT16、BOOL、UINT8、INT8、INT16、INT32、INT64、
 * BFLOAT16(仅ASCEND910B、ASCEND910_93支持), 支持非连续的Tensor。
 * 支持非连续的Tensor，数据格式支持ND。
 * @param [out] workspaceSize: 返回用户需要在npu device侧申请的workspace大小。
 * @param [out] executor: 返回op执行器，包含算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnTanhGetWorkspaceSize(const aclTensor* self, aclTensor* out, uint64_t* workspaceSize,
                                                aclOpExecutor** executor);

/**
 * @brief aclnnTanh的第二段接口，用于执行计算。
 * 算子功能：完成tanh函数计算
 * 计算公式：
 * $$ output_i = (exp(x) - exp(-x)) / (exp(x) + exp(-x))
 *
 * 实现说明：
 * api计算的基本路径：
 * ```mermaid
 * graph LR
 *     A[(self)] -->B([L0::Contiguous])
 *     B --> C([L0::Tanh])
 *     C --> D([L0::ViewCopy])
 *     D --> E[(out)]
 * ```
 *
 * @param [in] workspace: 在npu device侧申请的workspace内存起址。
 * @param [in] workspaceSize: 在npu device侧申请的workspace大小，由第一段接口aclnnTanhGetWorkspaceSize获取。
 * @param [in] stream: acl stream流。
 * @param [in] executor: op执行器，包含了算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnTanh(void* workspace, uint64_t workspaceSize, aclOpExecutor* executor,
                                const aclrtStream stream);

/**
 * @brief aclnnInplaceTanh的第一段接口，根据具体的计算流程，计算workspace大小。
 * @domain aclnn_math
 *
 * 算子功能：完成tanh函数计算
 * 计算公式：
 * $$ output_i = (exp(x) - exp(-x)) / (exp(x) + exp(-x))
 *
 * 实现说明：
 * api计算的基本路径：
 * ```mermaid
 * graph LR
 *     A[(self)] -->B([L0::Contiguous])
 *     B --> C([L0::Tanh])
 *     C --> D([L0::ViewCopy])
 *     D --> E[(out)]
 * ```
 *
 * @param [in] self: npu
 * device侧的aclTensor，数据类型支持FLOAT、FLOAT16、BOOL、UINT8、INT8、INT16、INT32、INT64、
 * BFLOAT16(仅ASCEND910B、ASCEND910_93支持),支持非连续的Tensor。
 * 支持非连续的Tensor，数据格式支持ND
 * @param [out] workspaceSize: 返回用户需要在npu device侧申请的workspace大小。
 * @param [out] executor: 返回op执行器，包含算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnInplaceTanhGetWorkspaceSize(aclTensor* selfRef, uint64_t* workspaceSize,
                                                       aclOpExecutor** executor);

/**
 * @brief aclnnInplaceTanh的第二段接口，用于执行计算。
 * 算子功能：完成tanh函数计算
 * 计算公式：
 * $$ output_i = (exp(x) - exp(-x)) / (exp(x) + exp(-x))
 *
 * 实现说明：
 * api计算的基本路径：
 * ```mermaid
 * graph LR
 *     A[(self)] -->B([L0::Contiguous])
 *     B --> C([L0::Tanh])
 *     C --> D([L0::ViewCopy])
 *     D --> E[(out)]
 * ```
 *
 * @param [in] workspace: 在npu device侧申请的workspace内存起址。
 * @param [in] workspaceSize: 在npu device侧申请的workspace大小，由第一段接口aclnnInplaceTanhGetWorkspaceSize获取。
 * @param [in] stream: acl stream流。
 * @param [in] executor: op执行器，包含了算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnInplaceTanh(void* workspace, uint64_t workspaceSize, aclOpExecutor* executor,
                                       const aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif  // OP_API_INC_TANH_H
