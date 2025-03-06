#ifndef BEGIN_END_FUNC_H
#define BEGIN_END_FUNC_H
#include <stdio.h>
static void begin_func(const char *func){
    fprintf(stderr,"Begin to execute %s\n", func);
}

// static void end_func(const char *func){
//     fprintf(stderr,"End to execute %s\n", func);
// }
#endif

/*
#ifndef ACLRT_BEGIN_FUNC_H
#define ACLRT_BEGIN_FUNC_H

#define begin_aclrt_func(func) Begin_Aclrt_Func(func)
#define end_aclrt_func(func) End_Aclrt_Func(func)

void Begin_Aclrt_Func(const char *func){
    printf("Begin to execute %s\n", func);
}

void End_Aclrt_Func(const char *func){
    printf("End to execute %s\n", func);
}
#endif


#ifndef ACLPROF_BEGIN_FUNC_H
#define ACLPROF_BEGIN_FUNC_H

#define begin_aclprof_func(func) Begin_Aclprof_Func(func)
#define end_aclprof_func(func) End_Aclprof_Func(func)

void Begin_Aclprof_Func(const char *func){
    printf("Begin to execute %s\n", func);
}

void End_Aclprof_Func(const char *func){
    printf("End to execute %s\n", func);
}
#endif


#ifndef ACLOPCOMPILER_BEGIN_FUNC_H
#define ACLOPCOMPILER_BEGIN_FUNC_H

#define begin_aclopcompiler_func(func) Begin_Aclopcompiler_Func(func)
#define end_aclopcompiler_func(func) End_Aclopcompiler_Func(func)

void Begin_Aclopcompiler_Func(const char *func){
    printf("Begin to execute %s\n", func);
}

void End_Aclopcompiler_Func(const char *func){
    printf("End to execute %s\n", func);
}
#endif

*/