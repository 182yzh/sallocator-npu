/* Copyright (c) 2024 Huawei Technologies Co., Ltd.
 * This file is a part of the CANN Open Software.
 * Licensed under CANN Open Software License Agreement Version 1.0 (the "License").
 * Please refer to the License for details. You may not use this file except in compliance with the License.
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
 * See LICENSE in the root of the software repository for the full text of the License.
 * ===================================================================================================================*/
  
#ifndef AIR_RUNTIME_LLM_ENGINE_INC_EXTERNAL_LLM_ERROR_CODES_H_
#define AIR_RUNTIME_LLM_ENGINE_INC_EXTERNAL_LLM_ERROR_CODES_H_

#include "external/ge_common/ge_api_error_codes.h"

#ifndef LLM_ERROR_CODES
#define LLM_ERROR_CODES

namespace ge {
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_WAIT_PROC_TIMEOUT, 1);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_KV_CACHE_NOT_EXIST, 2);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_REPEAT_REQUEST, 3);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_REQUEST_ALREADY_COMPLETED, 4);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_PARAM_INVALID, 5);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_ENGINE_FINALIZED, 6);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_NOT_YET_LINK, 7);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_ALREADY_LINK, 8);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_LINK_FAILED, 9);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_UNLINK_FAILED, 10);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_NOTIFY_PROMPT_UNLINK_FAILED, 11);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_CLUSTER_NUM_EXCEED_LIMIT, 12);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_PROCESSING_LINK, 13);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_DEVICE_OUT_OF_MEMORY, 14);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_PREFIX_ALREADY_EXIST, 15);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_PREFIX_NOT_EXIST, 16);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_SEQ_LEN_OVER_LIMIT, 17);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_NO_FREE_BLOCK, 18);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_BLOCKS_OUT_OF_MEMORY, 19);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_CACHE_INCOMPATIBLE, 20);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_CACHE_KEY_ALREADY_EXIST, 21);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_COPY_CACHE_FAILED, 22);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_CACHE_ID_ALREADY_EXIST, 23);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_EXIST_LINK, 24);
GE_ERRORNO_DEFINE(0b01, 0b01, 0b000, 8, 11, LLM_FEATURE_NOT_ENABLED, 25);
}  // namespace ge
#endif
#endif  // AIR_RUNTIME_LLM_ENGINE_INC_EXTERNAL_LLM_ERROR_CODES_H_
