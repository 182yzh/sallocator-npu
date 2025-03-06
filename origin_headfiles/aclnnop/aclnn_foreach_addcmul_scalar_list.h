
/*
 * calution: this file was generated automaticlly donot change it.
*/

#ifndef ACLNN_FOREACH_ADDCMUL_SCALAR_LIST_H_
#define ACLNN_FOREACH_ADDCMUL_SCALAR_LIST_H_

#include "aclnn/acl_meta.h"

#ifdef __cplusplus
extern "C" {
#endif

/* funtion: aclnnForeachAddcmulScalarListGetWorkspaceSize
 * parameters :
 * x1 : dynamic
 * x2 : dynamic
 * x3 : dynamic
 * scalar : required
 * out : dynamic
 * workspaceSize : size of workspace(output).
 * executor : executor context(output).
 */
__attribute__((visibility("default")))
aclnnStatus aclnnForeachAddcmulScalarListGetWorkspaceSize(
    const aclTensorList *x1,
    const aclTensorList *x2,
    const aclTensorList *x3,
    const aclTensor *scalar,
    const aclTensorList *out,
    uint64_t *workspaceSize,
    aclOpExecutor **executor);

/* funtion: aclnnForeachAddcmulScalarList
 * parameters :
 * workspace : workspace memory addr(input).
 * workspaceSize : size of workspace(input).
 * executor : executor context(input).
 * stream : acl stream.
 */
__attribute__((visibility("default")))
aclnnStatus aclnnForeachAddcmulScalarList(
    void *workspace,
    uint64_t workspaceSize,
    aclOpExecutor *executor,
    aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif
