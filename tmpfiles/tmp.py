


def read_from_file(filename):
    
    file = open(filename)
    line = file.readline()
    res = {line.strip()}
    while line:
        res.add(line.strip())
        line = file.readline()

    return res


if __name__ == "__main__":
    math = read_from_file("aclnn_math1.txt")
    infer = read_from_file("aclnn_ops_infer1.txt")
    train = read_from_file("aclnn_ops_train1.txt")
    rand = read_from_file("aclnn_rand1.txt")
    
    res = {}
    for e in train:
        if e not in res:
            res[e] = "train"
    
    for e in infer: 
        if e not in res:
            res[e] = "infer"
    
    for e in math:
        if e not in res:
            res[e] = "math"
    
    for e in rand: 
        if e not in res:
            res[e] = "rand"
    

    kind = ["train","infer","rand","math"]
    for typ in kind:
        ty_file = typ+".sym"
        file = open(ty_file,"w+")
        for e in res:
            if res[e] == typ:
                file.write(e+"\n")
    
    


    # belong to maths;
    # for e in math - infer - train - rand:
    #     print(e)

    # belongs to rand;
    # for e in rand -infer -train - math: 
    #     print(e)

    # belongs to infer:
    # for e in infer - train -math - rand: 
    #     print(e)

    # belongs to train:
    # for e in  train- infer  -math - rand: 
    #     print(e)