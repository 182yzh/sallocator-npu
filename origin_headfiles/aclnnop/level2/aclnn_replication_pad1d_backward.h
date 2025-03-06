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
#ifndef OP_API_INC_REPLICATION_PAD1D_BACKWARD_H_
#define OP_API_INC_REPLICATION_PAD1D_BACKWARD_H_

#include "aclnn/aclnn_base.h"
#include "aclnn_util.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief aclnnReplicationPad1dBackward的第一段接口，根据具体的计算流程，计算workspace大小。
 * @domain aclnn_ops_train
 *
 * 算子功能：replication_pad1d的反向传播。
 * @param [in] gradOutput: 数据类型支持FLOAT16, FLOAT32, DOUBLE, COMPLEX64,
 * COMPLEX128，支持[非连续的Tensor](#)，数据格式支持ND([参考](#))，
 * 维度支持二维或三维且与self和gradInput一致，shape需要与replication_pad1d正向传播的output一致。
 * @param [in] self:
 * 数据类型与gradOutput一致，支持[非连续的Tensor](#)，数据格式支持ND([参考](#))，维度支持二维或三维且与gradOutput和
 * gradInput一致，shape与gradInput一致。
 * @param [in] padding: 数据类型为INT64，长度为2，数值依次代表左右需要填充的值。
 * @param [in] gradInput:
 * 数据类型与gradOutput一致，shape与self一致，支持[非连续的Tensor](#)，数据格式支持ND([参考](#))。
 * @param [out] workspaceSize: 返回用户需要在npu device侧申请的workspace大小。
 * @param [out] executor: 返回op执行器，包含算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnReplicationPad1dBackwardGetWorkspaceSize(const aclTensor* gradOutput, const aclTensor* self,
                                                                    const aclIntArray* padding, aclTensor* gradInput,
                                                                    uint64_t* workspaceSize, aclOpExecutor** executor);

/**
 * @brief: aclnnReplicationPad1dBackward的第二段接口，用于执行计算
 *
 * 算子功能：replication_pad1d的反向传播。
 * @param [in] workspace: 在npu device侧申请的workspace内存起址。
 * @param [in] workspaceSize: 在npu
 * device侧申请的workspace大小，由第一段接口aclnnReplicationPad1dBackwardGetWorkspaceSize获取。
 * @param [in] stream: acl stream流。
 * @param [in] executor: op执行器，包含了算子计算流程。
 * @return aclnnStatus: 返回状态码。
 */
ACLNN_API aclnnStatus aclnnReplicationPad1dBackward(void* workspace, uint64_t workspaceSize, aclOpExecutor* executor,
                                                    aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif  // OP_API_INC_REPLICATION_PAD1D_BACKWARD_H_