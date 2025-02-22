Test for huawei npu utilization. 


====================
### currently and todos.
- [x] 1. warpper the npu api including mainly for alcrt(include alcrt. aclprof, alcopcompiler)
- [] 2. warpper the npu api for aclnn, currently some function not finds, so we just ignore it.
- [] 3. warpper the npu api for hccl.
- [] 4. replace the memory allocation with npu vmm.
- [] 5. build the conda environments and test for torch-npu