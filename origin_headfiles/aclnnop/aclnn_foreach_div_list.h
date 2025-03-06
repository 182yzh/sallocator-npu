
/*
 * calution: this file was generated automaticlly donot change it.
*/

#ifndef ACLNN_FOREACH_DIV_LIST_H_
#define ACLNN_FOREACH_DIV_LIST_H_

#include "aclnn/acl_meta.h"

#ifdef __cplusplus
extern "C" {
#endif

/* funtion: aclnnForeachDivListGetWorkspaceSize
 * parameters :
 * x1 : dynamic
 * x2 : dynamic
 * out : dynamic
 * workspaceSize : size of workspace(output).
 * executor : executor context(output).
 */
__attribute__((visibility("default")))
aclnnStatus aclnnForeachDivListGetWorkspaceSize(
    const aclTensorList *x1,
    const aclTensorList *x2,
    const aclTensorList *out,
    uint64_t *workspaceSize,
    aclOpExecutor **executor);

/* funtion: aclnnForeachDivList
 * parameters :
 * workspace : workspace memory addr(input).
 * workspaceSize : size of workspace(input).
 * executor : executor context(input).
 * stream : acl stream.
 */
__attribute__((visibility("default")))
aclnnStatus aclnnForeachDivList(
    void *workspace,
    uint64_t workspaceSize,
    aclOpExecutor *executor,
    aclrtStream stream);

#ifdef __cplusplus
}
#endif

#endif
