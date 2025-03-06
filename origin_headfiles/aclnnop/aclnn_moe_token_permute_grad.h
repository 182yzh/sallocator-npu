
/*
 * calution: this file was generated automaticlly donot change it.
*/

#ifndef ACLNN_MOE_TOKEN_PERMUTE_GRAD_H_
#define ACLNN_MOE_TOKEN_PERMUTE_GRAD_H_

#include "aclnn/acl_meta.h"

#ifdef __cplusplus
extern "C" {
#endif

/* funtion: aclnnMoeTokenPermuteGradGetWorkspaceSize
 * parameters :
 * permutedOutputGrad : required
 * sortedIndices : required
 * numTopk : required
 * paddedModeOptional : optional
 * out : required
 * workspaceSize : size of workspace(output).
 * executor : executor context(output).
 */
__attribute__((visibility("default")))
aclnnStatus aclnnMoeTokenPermuteGradGetWorkspaceSize(
    const aclTensor *permutedOutputGrad,
    const aclTensor *sortedIndices,
    int64_t numTopk,
    bool paddedModeOptional,
    const aclTensor *out,
    uint64_t *workspaceSize,
    aclOpExecutor **executor);

/* funtion: aclnnMoeTokenPermuteGrad
 * parameters :
 * workspace : workspace memory addr(input).
 * workspaceSize : size of workspace(input).
 * executor : executor context(input).
 * stream : acl stream.
 */
__attribute__((visibility("default")))
aclnnStatus aclnnMoeTokenPermuteGrad(
    void *workspace,
    uint64_t workspaceSize,
    aclOpExecutor *executor,
    aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif
