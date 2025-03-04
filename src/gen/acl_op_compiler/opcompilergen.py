origin = []
targets = []

def ReadFile():
    filefromso = "./libopcompiler.sym"
    file  = open(filefromso)
    line = file.readline()
    while line :
        origin.append(line.strip())
        line= file.readline()
    
    filefromapi = "aclopcompiler_head.h"
    file = open(filefromapi)
    line = file.readline()
    while line :
        targets.append(line.strip())
        line= file.readline()


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

def Check(flag):
    origin1 = origin
    targets1 = targets
    for sym in origin:
        aim = sym+"("
        cnt = 0
        ans = ""
        for tar in targets:
            if tar.find(aim) != -1:
                cnt+=1
                ans = tar
                if cnt > 1 and (tar.find("enum") != -1 or tar.find("struct") != -1 or tar.find("union") != -1):
                    ans = tar

        if cnt != 1 :
            print(sym, cnt)
        # else:
        #     targets1.remove(ans)
        
            

        if cnt == 1 :    
            rtype,func,para = GetRtypeFuncPara(ans)
            if func != sym :
                raise Exception(sym+"/"+func)
            
            if (flag == 1):
                # define typedef rtype(*so_func_t)(para)
                if para=="" or para=="void":
                    print("DEFFTYPE({:s}, {:s});".format(rtype,func))
                    print("DEFFUNCV({:s});".format(func))
                else:
                    print("DEFFTYPE({:s}, {:s}, {:s});".format(rtype,func,para))
                    print("DEFFUNCV({:s});".format(func))

            if flag ==2:
                # load so_func
                print("    ACL_LDSYM(so_aclopcompiler_handle, {:s});".format(func))
            
            """
            #define END_FUNC_HOOK_ON 
            #define CHECK_ACL_RESULT_ON
            // #define PASS_FUNC_ON


            #define PASS_FUNC(rtype, func, ...) return func(__VA_ARGS__)
            #define END_FUNC_HOOK(func)  end_func(#func)
            #define BEGIN_FUNC_HOOK(func) begin_func(#func)
            #define DEFINE_RETURN_VARIBLE(rtype, rvarible_name) rtype rvarible_name
            #define CALL_FUNC_WITH_RETURN(rvarible_name, func, ...) rvarible_name = func(__VA_ARGS__) 
            // for each virtual object, should add a command for this.
            // for examples, for virtualize aclrtStream. 
            // DEFINE_AND_GET_PHYSICAL_OBJECT(aclrtStream, stream, get_origin_stream)
            // after that, remind that replace the python scripts at gen.py. 
            #define DEFINE_AND_GET_PHYSICAL_OBJECT(obj_type, obj_name, get_func) obj_type phy_##obj_name = get_func((VIR_##obj_type)obj_name)
            """
            
            if flag == 3:
                # write func():

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
                        print("        #ifdef CHECK_ACL_RESULT_ON")
                        print("            CHECK_ACL_RESULT(result);")
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
        else:  
            if flag == 1:
                print(sym,"cnt == {:d}".format(cnt))
    # print(targets1,origin1)
    return     


constructor="""
__attribute__((constructor)) void aclopcompiler_init(){
    void *so_aclopcompiler_handle = dlopen(ACLCOMPILER_LIBFILE,RTLD_GLOBAL | RTLD_NOW);
    if(so_aclopcompiler_handle == NULL){
        fprintf(stderr, "error for open the acl opcompiler lib (file %s), error msg %s\\n", ACLCOMPILER_LIBFILE, dlerror());
        exit(1);
    }
    load_all_op_compiler_funcs(so_aclopcompiler_handle);
}
"""
def add_constructors():
    print(constructor)


headers = '''
#include <acl/acl.h>
#include <acl/acl_op.h>
#include <acl/acl_rt.h>
#include <acl/acl_op_compiler.h>
#include <acl/acl_rt_allocator.h>
#include <acl/acl_prof.h>
#include "../common.h"
#include <dlfcn.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
'''
def add_header_files():
    print(headers)


# begin_and_end_func = """
# void begin_func(const char* funcname){
#     return;
# }

# void end_func(const char* funcname){
#     return;
# }
# """

# def add_begin_and_end_func():
#     print(begin_and_end_func)  


notes="""
/** the following api are not find from the so files. 
----
moreover, we ignore the aclAppLog api, due to the ... parameters in the function list. 
----
*/
"""
def add_notes():
    print(notes)
    

def main():
    ReadFile()
    for sym in origin:
        aim = sym+"("
        cnt = 0
        ans = ""
        for tar in targets:
            if tar.find(aim) != -1:
                cnt+=1
                ans = tar
                if cnt > 1 and (tar.find("enum") != -1 or tar.find("struct") != -1 or tar.find("union") != -1):
                    ans = tar
        # if cnt == 0:
        #     print(sym, cnt)
        # if cnt  != 1 and cnt != 0 :
        #     print(sym, cnt)   
    add_notes()
    add_header_files()
    # add_begin_and_end_func()
    Check(1)
    
    #add the load_all_funcs
    print("void load_all_op_compiler_funcs(void *so_aclopcompiler_handle){")
    print("   fprintf(stderr, \"%s called \\n\", __func__);")
    Check(2)
    print("}")

    #add the func
    Check(3)

    add_constructors()
    return
    

main()

    