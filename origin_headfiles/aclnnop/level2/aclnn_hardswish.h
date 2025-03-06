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
#ifndef OP_API_INC_HARDSWISH_H_
#define OP_API_INC_HARDSWISH_H_

#include "aclnn/aclnn_base.h"
#include "aclnn_util.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief aclnnHardswish的第一段接口，根据具体的计算流程，计算workspace大小。
 * @domain aclnn_ops_infer
 *
 * 算子功能：激活函数
 * $$
 * Hardswish(x)=\begin{cases}
 * x, & x\ gt 3 \\
 * 0, & x\ le -3 \\
 * \frac{x · (x + 3)}{6}, & otherwise
 * \end{cases}
 * $$
 *
 * 实现说明：
 * api计算的基本路径：
 * ```mermaid
 * graph LR
 *     A[(self)] -->B([L0::Contiguous])
 *     B --> C([L0::Hardswish])
 *     C --> D([L0::ViewCopy])
 *     D --> E[(out)]
 * ```
 *
 * @param [in] self: npu
 * device侧的aclTensor，数据类型支持 FLOAT、FLOAT16、BFLOAT16，支持非连续的Tensor。
 * 支持非连续的Tensor，数据格式支持ND
 * @param [out] workspaceSize: 返回用户需要在npu device侧申请的workspace大小。
 * @param [out] executor: 返回op执行器，包含算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnHardswishGetWorkspaceSize(const aclTensor* self, const aclTensor* out,
                                                     uint64_t* workspaceSize, aclOpExecutor** executor);

/**
 * @brief aclnnHardswish的第二段接口，用于执行计算。
 *
 * 算子功能：激活函数
 * $$
 * Hardswish(x)=\begin{cases}
 * x, & x\ gt 3 \\
 * 0, & x\ le -3 \\
 * \frac{x · (x + 3)}{6}, & otherwise
 * \end{cases}
 * $$
 *
 * 实现说明：
 * api计算的基本路径：
 * ```mermaid
 * graph LR
 *     A[(self)] -->B([L0::Contiguous])
 *     B --> C([L0::Hardswish])
 *     C --> D([L0::ViewCopy])
 *     D --> E[(out)]
 * ```
 *
 * @param [in] workspace: 在npu device侧申请的workspace内存起址。
 * @param [in] workspaceSize: 在npu device侧申请的workspace大小，由第一段接口aclnnHardswishGetWorkspaceSize获取。
 * @param [in] stream: acl stream流。
 * @param [in] executor: op执行器，包含了算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnHardswish(void* workspace, uint64_t workspaceSize, aclOpExecutor* executor,
                                     const aclrtStream stream);

/**
 * @brief aclnnInplaceHardswish的第一段接口，根据具体的计算流程，计算workspace大小。
 * @domain aclnn_ops_infer
 *
 * 算子功能：激活函数
 * $$
 * Hardswish(x)=\begin{cases}
 * x, & x\ gt 3 \\
 * 0, & x\ le -3 \\
 * \frac{x · (x + 3)}{6}, & otherwise
 * \end{cases}
 * $$
 *
 * 实现说明：
 * api计算的基本路径：
 * ```mermaid
 * graph LR
 *     A[(self)] -->B([L0::Contiguous])
 *     B --> C([L0::Hardswish])
 *     C --> D([L0::ViewCopy])
 *     D --> E[(out)]
 * ```
 *
 * @param [in] self: npu
 * device侧的aclTensor，数据类型支持 FLOAT、FLOAT16、BFLOAT16，支持非连续的Tensor。
 * 支持非连续的Tensor，数据格式支持ND
 * @param [out] workspaceSize: 返回用户需要在npu device侧申请的workspace大小。
 * @param [out] executor: 返回op执行器，包含算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnInplaceHardswishGetWorkspaceSize(const aclTensor* self, uint64_t* workspaceSize,
                                                            aclOpExecutor** executor);

/**
 * @brief aclnnInplaceHardswish的第二段接口，用于执行计算。
 *
 * 算子功能：激活函数
 * $$
 * Hardswish(x)=\begin{cases}
 * x, & x\ gt 3 \\
 * 0, & x\ le -3 \\
 * \frac{x · (x + 3)}{6}, & otherwise
 * \end{cases}
 * $$
 *
 * 实现说明：
 * api计算的基本路径：
 * ```mermaid
 * graph LR
 *     A[(self)] -->B([L0::Contiguous])
 *     B --> C([L0::Hardswish])
 *     C --> D([L0::ViewCopy])
 *     D --> E[(out)]
 * ```
 *
 * @param [in] workspace: 在npu device侧申请的workspace内存起址。
 * @param [in] workspaceSize: 在npu device侧申请的workspace大小，由第一段接口aclnnInplaceHardswishGetWorkspaceSize获取。
 * @param [in] stream: acl stream流。
 * @param [in] executor: op执行器，包含了算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnInplaceHardswish(void* workspace, uint64_t workspaceSize, aclOpExecutor* executor,
                                            const aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif  // OP_API_INC_HARDSWISH_H
