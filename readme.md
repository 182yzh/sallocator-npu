Test for huawei npu utilization. 








目前看到的一些奇怪的点: 
1. 看到了aclrtMemoryCopy, 但是目前没看到aclrtMalloc的hook，暂时不知道为什么？
2. 感觉hook的过程中，尤其是对于aclnn的hook的过程，感觉有点奇怪，原因是ascend_torch 实际上是用了dlopen的方式来实现的api的调用
3. aclnnAdd 和 aclnnAddGetWorkspaceSize 调用次数不严格相等，感觉有类似于get 之后的workspace进行重用的机制。

todo:
1. 分析为什么没有aclrtmalloc [这里后续还需要进一步考虑调用的事情]
2. 分析aclnnxxxgetworkspacesize和aclnnxxx的关系、以及是否存在复用？
3. 拦截dlsym 和 dlopen，看看到底发生了什么



====================
### currently and todos.
- [x] 1. warpper the npu api including mainly for alcrt(include alcrt. aclprof, alcopcompiler)
- [x] 2. warpper the npu api for aclnn, currently some function not finds, so we just ignore it.
- [=] 3. warpper the npu api for hccl.
- [TODO] 4. replace the memory allocation with npu vmm.
- [x] 5. build the conda environments and test for torch-npu