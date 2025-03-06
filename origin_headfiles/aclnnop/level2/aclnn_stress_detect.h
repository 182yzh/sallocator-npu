
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
#ifndef OP_API_INC_STRESS_DETECT_H_
#define OP_API_INC_STRESS_DETECT_H_

#include "aclnn/aclnn_base.h"
#include "aclnn_util.h"

#define ACLNN_ERR_INNER_SOC_NOT_SUPPORT 661001

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief aclnnStressDetect的第一段接口，根据具体的计算流程，计算workspace大小。
 */
ACLNN_API aclnnStatus aclnnStressDetectGetWorkspaceSize(aclTensor *out, uint64_t *workspaceSize,
                                                        aclOpExecutor **executor);

/**
 * @brief aclnnStressDetect的第二段接口，用于执行计算。
 */
ACLNN_API aclnnStatus aclnnStressDetect(void *workspace, uint64_t workspaceSize, aclOpExecutor *executor,
                                        aclrtStream stream);

/**
 * @brief aclnnStressDetectWithPressure的第一段接口，根据具体的计算流程，计算workspace大小。
 */
ACLNN_API aclnnStatus aclnnStressDetectWithPressureGetWorkspaceSize(aclTensor *out, uint64_t *workspaceSize,
                                                                    aclOpExecutor **executor);

/**
 * @brief aclnnStressDetectWithPressure的第二段接口，用于执行计算。
 */
ACLNN_API aclnnStatus aclnnStressDetectWithPressure(void *workspace, uint64_t workspaceSize, aclOpExecutor *executor,
                                        aclrtStream stream);

/**
 * @brief aclnnStressDetectRecover的第一段接口，根据具体的计算流程，计算workspace大小。
 */
ACLNN_API aclnnStatus aclnnStressDetectRecoverGetWorkspaceSize(aclTensor *out, uint64_t *workspaceSize,
                                                               aclOpExecutor **executor);

/**
 * @brief aclnnStressDetectRecover的第二段接口，用于执行计算。
 */
ACLNN_API aclnnStatus aclnnStressDetectRecover(void *workspace, uint64_t workspaceSize, aclOpExecutor *executor,
                                        aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif  // OP_API_INC_STRESS_DETECT_H_