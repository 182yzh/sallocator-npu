origin = []
targets = []
def ReadFile():
    filefromso = "./warped"
    file  = open(filefromso)
    line = file.readline()
    while line :
        origin.append(line.strip())
        line= file.readline()
    
    filefromapi = "acl.h"
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
    return rtype,details[-1],"(" + strs[1]




def Check(flag):
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
                
        if cnt == 1 or cnt == 2 :    
            rtype,func,para = GetRtypeFuncPara(ans)
            if func != sym :
                raise Exception(sym+"/"+func)
            paras = GetParaNames(para)
            if (flag == 1):
                # define typedef rtype(*so_func_t)(para)
                print("DEFFTYPE({:s}, {:s}, {:s});".format(rtype,func,para))
                print("DEFFUNCV({:s}, {:s}, {:s});".format(rtype,func,para))
                
            if flag ==2:
                # load so_func
                print("ACL_LDSYM({:s});".format(so_handle, func))
            
            if flag == 3:
                # write func():
                fpara = ""
                fpara += paras[0]
                for i in range(1,len(paras)):
                    fpara+= ", {:s}".format(paras[i])
                print("{:s}{:s}{:s}".format(rtype,func,para)+"{")
                print("    begin_func({:s});".format(func))
                print("    aclError err;")
                print("    r = so_{:s}({:s});".format(func,fpara))
                print("    checkCudaErrors(r);")
                print("    return r;")
                print("    end_func({:s});".format(func))
                print("}")
        else:  
            if flag == 1:
                print(sym,"cnt == {:d}".format(cnt))
    return     




def GetParaNames(paralist:str):
    s = 0 
    e = len(paralist)
    while s < e and (paralist[s] == '(' or paralist[s] == ' ' ):
        s+=1;
    
    while s < e and (paralist[e-1] == ')' or paralist[s-1] == ' ' ):
        e-=1;
    
    strs = paralist[s:e].split(",")
    paras = []
    for s in strs:
        infors = s.strip().split("=")
        data = infors[0]
        paras.append(data.strip().split(" ")[-1])
    return paras

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
        if cnt == 0:
            print(sym, cnt)
        if cnt  != 1 and cnt != 0 :
            print(sym, cnt)

    # Check(1)
    # Check(2)
    # Check(3)

main()

    