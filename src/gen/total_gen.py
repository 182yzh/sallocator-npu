import sys

def ReadFile(sosym_filename, head_filename):
    origin = []
    targets = []
    file  = open(sosym_filename)
    line = file.readline()
    while line :
        origin.append(line.strip())
        line= file.readline()
    
    file = open(head_filename)
    line = file.readline()
    while line :
        targets.append(line.strip())
        line= file.readline()

    return origin, targets

def GetRtypeFuncPara(s:str):
    strs = s.split("(")
    if len(strs) !=2 :
        raise Exception(s)
    head = strs[0]
    details = head.strip().split(" ")
    if len(details) <2:
        raise Exception(s)
    rtype = ""
    for i in range(0,len(details)-1):
        rtype+= details[i]+" "
    # the api end with); but we do not needs it.
    return rtype[:-1], details[-1], strs[1][:-2] 




def get_para_name(parainfo):
    s = 0 
    e = len(parainfo)
    while s < e and (parainfo[s] == '(' or parainfo[s] == ' ' ):
        s+=1
    
    while s < e and (parainfo[e-1] == ')' or parainfo[e-1] == ' ' ):
        e-=1
    para = parainfo[s:e]
    para_name = ""
    tmp = para.strip().split("=")[0]
    tmp = tmp.strip().split(" ")[-1]
    tmp = tmp.strip().split("[")[0]
    para_name = tmp.strip()
    return para_name


# to create the following c++ codes: 
# define typedef rtype(*so_func_t)(para)
# so_func_t so_func; 
def write_defs(sosym,heads):
    for sym in sosym:
        aim = sym+"("
        cnt = 0
        ans = ""
        for tar in heads:
            if tar.find(aim) != -1:
                cnt+=1
                ans = tar
                if cnt > 1 and (tar.find("enum") != -1 or tar.find("struct") != -1 or tar.find("union") != -1):
                    ans = tar
        
        if cnt == 1 :    
            rtype,func,para = GetRtypeFuncPara(ans)
            if func != sym :
                raise Exception(sym+"/"+func)
            
            if para=="" or para=="void":
                print("DEFFTYPE({:s}, {:s});".format(rtype,func))
                print("DEFFUNCV({:s});".format(func))
            else:
                print("DEFFTYPE({:s}, {:s}, {:s});".format(rtype,func,para))
                print("DEFFUNCV({:s});".format(func))
        else:
            print("cnt == {:d}, func == {:s}".format(cnt,sym))


def write_load_funcs(sosym,heads,libname):
    for sym in sosym:
        aim = sym+"("
        cnt = 0
        ans = ""
        for tar in heads:
            if tar.find(aim) != -1:
                cnt+=1
                ans = tar

        if cnt != 1:
            if cnt >1:
                print(func,cnt)
            return 
        

        rtype,func,para = GetRtypeFuncPara(ans)
        if func != sym :
            raise Exception(sym+"/"+func)
                    
        # load so_func
        #define ACL_LDSYM(so_aclrt_handle
        print("    ACL_LDSYM(so_{:s}_handle, {:s});".format(libname,func))
    

def write_funcs(sosym,heads):
    for sym in sosym:
        aim = sym+"("
        cnt = 0
        ans = ""
        for tar in heads:
            if tar.find(aim) != -1:
                cnt+=1
                ans = tar

        if cnt != 1 :
            if cnt > 1: 
                print(func, cnt)
            return
    
        rtype,func,para = GetRtypeFuncPara(ans)
        if func != sym :
            raise Exception(sym+"/"+func)
        
            
    
        para_names = para.split(",")
        func_para = ""
        func_para += get_para_name(para_names[0])
        for i in range(1,len(para_names)):
            func_para += ", {:s}".format(get_para_name(para_names[i]))
        print("{:s} {:s}({:s})".format(rtype,func,para)+"{")
        print("    BEGIN_FUNC_HOOK({:s});".format(func))
        print("    #ifdef PASS_FUNC_ON")
        if func_para != "" and func_para != "void":
            print("        PASS_FUNC({:s}, {:s});".format("so_" + func,func_para))
        else:
            print("        PASS_FUNC({:s});".format("so_" + func))
        print("    #else")
        

        if rtype != "void":
            print("        DEFINE_RETURN_VARIBLE({:s}, result);".format(rtype))
            if func_para != "" and func_para != "void":
                print("        CALL_FUNC_WITH_RETURN(result,{:s},{:s});".format("so_" + func, func_para))
            else :
                print("        CALL_FUNC_WITH_RETURN(result,{:s});".format("so_" + func))
            
            
            if rtype == "aclError":
                print("        #ifdef CHECK_ACL_ERROR_ON")
                print("            CHECK_ACLRT_ERROR(result);")
                print("        #endif")

            if rtype == "aclnnStatus":
                print("        #ifdef CHECK_ACLNN_STATUS_ON")
                print("            CHECK_ACLNN_STATUS(result);")
                print("        #endif")

        else:
            if func_para != "":
                print("        CALL_FUNC_WITHOUT_RETURN({:s},{:s});".format("so_" + func, func_para))
            else :
                print("        CALL_FUNC_WITHOUT_RETURN({:s});".format("so_" + func))
        
        print("    #endif")
        
        
        print("    #ifdef END_FUNC_HOOK_ON")
        print("        END_FUNC_HOOK(func);")
        print("    #endif")
        
        print("    #ifndef PASS_FUNC_ON")
        if rtype != "void":
            print("    return result;")
        else:
            print("    return ;")
        print("    #endif")
        

        print("}")

    return     




def add_constructors(libname):
    LIBNAME = libname.upper()
    constructor = (
        '__attribute__((constructor)) void {0}_init(){{\n'
        '    void *so_{0}_handle = dlopen({1}_LIBFILE,RTLD_GLOBAL | RTLD_NOW);\n'
        '    if(so_{0}_handle == NULL){{\n'
        '    fprintf(stderr, "error open the {0} (file %s), msg %s\\n", {1}_LIBFILE, dlerror());\n' 
        '    exit(1);\n'
        '    }}\n'
        '    load_all_{0}_funcs(so_{0}_handle);\n'
        '}}\n' 
    ).format(libname, LIBNAME)

    print(constructor)


headers = '''
#include <acl/acl.h>
#include <acl/acl_op.h>
#include <acl/acl_rt.h>
#include <acl/acl_op_compiler.h>
#include <acl/acl_rt_allocator.h>
#include "../../common.h"
#include <dlfcn.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <acl/acl_prof.h>
'''

#include "aclnnop/aclnn_math.h"
#include "aclnnop/aclnn_rand.h"
#include "aclnnop/aclnn_ops_infer.h"
#include "aclnnop/aclnn_ops_train.h"

def add_header_files():
    print(headers)


nn_headers = """
#include "aclnnop/aclnn_math.h"
#include "aclnnop/aclnn_rand.h"
#include "aclnnop/aclnn_ops_infer.h"
#include "aclnnop/aclnn_ops_train.h"
"""


def add_nnheaders():
    print(headers)
    print(nn_headers)


# notes="""
# /** the following api are not find from the so files. 
# aclrtStreamConfigHandle* aclrtCreateStreamConfigHandle(void); 
# aclError aclrtDestroyStreamConfigHandle(aclrtStreamConfigHandle* handle);
# ----
# moreover, we ignore the aclAppLog api, due to the ... parameters in the function list. 
# ----
# due to the api are not find in the so files, we also do not preload those APIs. 
# aclrtResetDeviceWithoutTsdVXX
# aclrtSetDeviceWithoutTsdVXX
# */
# """
# def add_notes():
#     print(notes)
    

def generate_for_one(lib_sosym_file, lib_headfile,libname):
    sosym,heads = ReadFile(lib_sosym_file,lib_headfile)
    for sym in sosym:
        aim = sym+"("
        cnt = 0
        ans = ""
        for tar in heads:
            if tar.find(aim) != -1:
                cnt+=1
                ans = tar

        # if cnt  != 1 and cnt != 0 :
        #     print("=====",sym, cnt)   
    # add_notes()
    add_header_files()
    # add_begin_and_end_func()
    write_defs(sosym,heads)
    
    #add the load_all_funcs
    print("void load_all_{:s}_funcs(void *so_{:s}_handle){{".format(libname,libname) )
    print("   fprintf(stderr, \"%s called \\n\", __func__);")

    write_load_funcs(sosym,heads,libname)
    print("}")

    #add the func
    write_funcs(sosym,heads)

    add_constructors(libname)
    return
    

def aclrt_main():
    sys.stdout = open("libaclrt.cpp","w")
    generate_for_one("aclrt/libascendcl.sym", "aclrt/aclrt_head.h","aclrt")
    sys.stdout.close()

 

    sys.stdout = open("opcompiler.cpp","w")
    generate_for_one("acl_op_compiler/libopcompiler.sym", "acl_op_compiler/aclopcompiler_head.h","aclopcompiler")
    sys.stdout.close()
    

    sys.stdout = open("libprof.cpp","w")
    generate_for_one("aclprof/libmsprofiler.sym", "aclprof/aclprof_head.h","aclprof")
    sys.stdout.close()

    
def aclnn_main():
    sys.stdout = open("libaclnn_ops_infer.cpp","w")
    generate_for_one("aclnn/infer.sym", "aclnn/api.h","aclnn_ops_infer")
    sys.stdout.close()

    sys.stdout = open("libaclnn_ops_train.cpp","w")
    generate_for_one("aclnn/train.sym", "aclnn/api.h","aclnn_ops_train")
    sys.stdout.close()

    sys.stdout = open("libaclnn_rand.cpp","w")
    generate_for_one("aclnn/rand.sym", "aclnn/api.h","aclnn_rand")
    sys.stdout.close()

    sys.stdout = open("libaclnn_math.cpp","w")
    generate_for_one("aclnn/math.sym", "aclnn/api.h","aclnn_math")
    sys.stdout.close()


def main():
    aclrt_main()
    # aclnn_main()

if __name__ == "__main__":
    main()