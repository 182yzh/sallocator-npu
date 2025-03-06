
/*
 * calution: this file was generated automaticlly donot change it.
*/

#ifndef ACLNN_GROUPED_BIAS_ADD_GRAD_H_
#define ACLNN_GROUPED_BIAS_ADD_GRAD_H_

#include "aclnn/acl_meta.h"

#ifdef __cplusplus
extern "C" {
#endif

/* funtion: aclnnGroupedBiasAddGradGetWorkspaceSize
 * parameters :
 * gradY : required
 * groupIdxOptional : optional
 * out : required
 * workspaceSize : size of workspace(output).
 * executor : executor context(output).
 */
__attribute__((visibility("default")))
aclnnStatus aclnnGroupedBiasAddGradGetWorkspaceSize(
    const aclTensor *gradY,
    const aclTensor *groupIdxOptional,
    const aclTensor *out,
    uint64_t *workspaceSize,
    aclOpExecutor **executor);

/* funtion: aclnnGroupedBiasAddGrad
 * parameters :
 * workspace : workspace memory addr(input).
 * workspaceSize : size of workspace(input).
 * executor : executor context(input).
 * stream : acl stream.
 */
__attribute__((visibility("default")))
aclnnStatus aclnnGroupedBiasAddGrad(
    void *workspace,
    uint64_t workspaceSize,
    aclOpExecutor *executor,
    aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif
