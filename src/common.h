#ifndef PRELOAD_MICRO
    #define PRELOAD_MICRO
    #define DEFFTYPE(rtype, func, ...) typedef rtype(*so_##func##_t)(__VA_ARGS__)
    #define DEFFUNCV(func) so_##func##_t so_##func 
#endif


#define LDSYM(so_handle, so_func, func)  do { \
    so_func = (so_func##_t)(dlsym(so_handle, #func)); \
    #ifndef SKIP_ASSERT_CHECK \
        assert(so_func != NULL); \
    #endif \
} while(0)

#define ACL_LDSYM(so_handle, func) LDSYM(so_handle, so_##func, func)


#define END_FUNC_HOOK_ON 
#define CHECK_ACL_RESULT_ON
// #define PASS_FUNC_ON


#define PASS_FUNC(func, ...) return func(__VA_ARGS__)
#define END_FUNC_HOOK(func)  end_func(#func)
#define BEGIN_FUNC_HOOK(func) begin_func(#func)
#define DEFINE_RETURN_VARIBLE(rtype, rvarible_name) rtype rvarible_name
#define CALL_FUNC_WITH_RETURN(rvarible_name, func, ...) rvarible_name = func(__VA_ARGS__) 
#define CALL_FUNC_WITHOUT_RETURN(func, ...) func(__VA_ARGS__) 
// for each virtual object, should add a command for this.
// for examples, for virtualize aclrtStream. 
// DEFINE_AND_GET_PHYSICAL_OBJECT(aclrtStream, stream, get_origin_stream)
// after that, remind that replace the python scripts at gen.py. 
#define DEFINE_AND_GET_PHYSICAL_OBJECT(obj_type, obj_name, get_func) obj_type phy_##obj_name = get_func((VIR_##obj_type)obj_name)


// only for checking aclerror, if the rtype is not aclerror, we just ignore the check and do nothing. 
#define CHECK_ACL_RESULT(result) do{\
    if(result != ACL_SUCCESS){ \
        fprintf(stderr,"ERROR: file %s, line %d, func %s, error code is %d\n",__file__,__LINE__,__func__,result); \
    } \
} while(0)

