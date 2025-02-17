#include <acl/acl.h>
#include <stdio.h>
#include <assert.h>
#include <acl/acl_rt.h>

#define check_acl_err(err) do{\
    if(err != ACL_ERROR){ \
        fprintf(stderr,"the err is %d\n",err);\
    } \
}while(0)

const long alloc_size = 1ll*1024*1024*1024;

int main(){
    aclError err;
    err = aclInit(NULL);
    check_acl_err(err);

    void *dptr =NULL;

    err = aclrtMalloc(&dptr,alloc_size);
    check_acl_err(err);
    fprintf(stderr, "the dptr is %p\n",dptr);

    void *ptr = NULL;
    ptr = malloc(alloc_size);
    assert(ptr != NULL);
    fprintf(stderr,"ptr is %p\n",ptr);
    

    return 0;
}