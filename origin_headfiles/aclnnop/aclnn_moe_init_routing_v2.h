
/*
 * calution: this file was generated automaticlly donot change it.
*/

#ifndef ACLNN_MOE_INIT_ROUTING_V2_H_
#define ACLNN_MOE_INIT_ROUTING_V2_H_

#include "aclnn/acl_meta.h"

#ifdef __cplusplus
extern "C" {
#endif

/* funtion: aclnnMoeInitRoutingV2GetWorkspaceSize
 * parameters :
 * x : required
 * expertIdx : required
 * activeNumOptional : optional
 * expertCapacityOptional : optional
 * expertNumOptional : optional
 * dropPadModeOptional : optional
 * expertTokensCountOrCumsumFlagOptional : optional
 * expertTokensBeforeCapacityFlagOptional : optional
 * expandedXOut : required
 * expandedRowIdxOut : required
 * expertTokensCountOrCumsumOutOptional : optional
 * expertTokensBeforeCapacityOutOptional : optional
 * workspaceSize : size of workspace(output).
 * executor : executor context(output).
 */
__attribute__((visibility("default")))
aclnnStatus aclnnMoeInitRoutingV2GetWorkspaceSize(
    const aclTensor *x,
    const aclTensor *expertIdx,
    int64_t activeNumOptional,
    int64_t expertCapacityOptional,
    int64_t expertNumOptional,
    int64_t dropPadModeOptional,
    int64_t expertTokensCountOrCumsumFlagOptional,
    bool expertTokensBeforeCapacityFlagOptional,
    const aclTensor *expandedXOut,
    const aclTensor *expandedRowIdxOut,
    const aclTensor *expertTokensCountOrCumsumOutOptional,
    const aclTensor *expertTokensBeforeCapacityOutOptional,
    uint64_t *workspaceSize,
    aclOpExecutor **executor);

/* funtion: aclnnMoeInitRoutingV2
 * parameters :
 * workspace : workspace memory addr(input).
 * workspaceSize : size of workspace(input).
 * executor : executor context(input).
 * stream : acl stream.
 */
__attribute__((visibility("default")))
aclnnStatus aclnnMoeInitRoutingV2(
    void *workspace,
    uint64_t workspaceSize,
    aclOpExecutor *executor,
    aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif
