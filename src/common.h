

#ifndef PRELOAD_MICRO
    #define PRELOAD_MICRO
    #define DEFFTYPE(rtype, func, ...) typedef rtype(*so_##func##_t)(__VA_ARGS__)
    #define DEFFUNCV(func) so_##func##_t so_##func 
#endif





#define LDSYM(so_handle, func, micro_func)  do { \
    func = (func##_t)(dlsym(so_handle, #micro_func)); \
    #ifndef SKIP_ASSERT_CHECK \
        assert(func != NULL); \
    #endif \
} while(0)

#define ACL_LDSYM(so_handle, func) LDSYM(so_handle, so_##func, func)


// cudaError_t cudaCreateTextureObject(cudaTextureObject_t* pTexObject, const struct cudaResourceDesc* pResDesc, const struct cudaTextureDesc* pTexDesc, const struct cudaResourceViewDesc* pResViewDesc){
    
//     begin_func(cudaCreateTextureObject);
//     cudaError_t r;
//     r = so_cudaCreateTextureObject(pTexObject, pResDesc, pTexDesc, pResViewDesc);
//     checkCudaErrors(r);
//     end_func(cudaCreateTextureObject);
//     return r;
// }


/** call func mode defination.   
 * 1. CALL_WITH_NOTHING. no checkerror, no end func, just return the origin func.
 * 2. CALL_WITH_CHECK_DEFAULT. only checkerror, and no end func. 
 * 3. CALL_WITH_CHECK_VARIANT_TYEPX only check, and must define a check_acl_err_variant_typex. 
 * 4. CALL_WITH_ALL, check the result and then with the endfunc. 
*/
#define CALL_WITH_NOTHING 1
#define CALL_WITH_CHECK_DEFAULT 2
#define CALL_WITH_CHECK_VARIANT_TYEP1 3
#define CALL_WITH_ALL 255

#define CALL_FUNC_MODE CALL_WITH_ALL

#define CALL_FUNC(rtype, func, ...) do{ \
    begin_func(#func);\
    #if CALL_FUNC_MODE == CALL_WITH_NOTHING \
        return func(__VA_ARGS__);\
    #endif \
    \
    #if CALL_FUNC_MODE == 


} while(0)

#define CALL_FUNC_WITH_HOOK_END(rtype, func, ...) do{\
    rtype r; \
    begin_func(#func);\
    r = func(__VA_ARGS__);\
    check_acl_err(r); \
    end_func(#func); \
    return r;\
}while(0)

#define CALL_FUNC_WITHOUT_HOOK_END(rtype, func, ...) do{\
    begin_func(#func);\
    return func(__VA_ARGS__);\
}while(0)\

#ifdef CALL_WITH_HOOK_END
    #define CALL_FUNC(rtype, func, ...) CALL_FUNC_WITH_HOOK_END(func, __VA)
#elif defined(CALL_WITHOUT_HOOK_END)
    #define CALL_FUNC(func) CALL_FUNC_WITHOUT_HOOK_END(func)
#else
    #define CALL_FUNC(func) do{ fprintf(stderr, "Error: Neither CALL_WITH_HOOK_END nor CALL_WITHOUT_HOOK_END is defined, please check, and the program exits\n"); exit(0); } while(0)
#endif