aclInitTensor 0
aclRfft1D 0
aclRfft1DGetWorkspaceSize 0
aclStft 0
aclStftGetWorkspaceSize 0
acldumpRegCallback 0
acldumpUnregCallback 0
aclgrphProfGraphSubscribe 0
aclgrphProfGraphUnSubscribe 0
aclprofGetGraphId 0
aclprofGetOpAttriValue 0
aclprofGetOpFlag 0
aclprofGetSupportedFeatures 0
aclprofSetCategoryName 0
aclprofSetStampCategory 0
aclprofSetStampPayload 0
aclrtResetD- 0
aclrtSetDeviceWithoutTsdVXX 0
DEFFTYPE(void, aclAppLog, aclLogLevel logLevel, const char* func, const char* file, uint32_t line, const char* fmt, ...);
DEFFUNCV(void, aclAppLog, aclLogLevel logLevel, const char* func, const char* file, uint32_t line, const char* fmt, ...);
DEFFTYPE(aclDataBuffer*, aclCreateDataBuffer, void* data, size_t size);
DEFFUNCV(aclDataBuffer*, aclCreateDataBuffer, void* data, size_t size);
DEFFTYPE(aclGraphDumpOption*, aclCreateGraphDumpOpt, );
DEFFUNCV(aclGraphDumpOption*, aclCreateGraphDumpOpt, );
DEFFTYPE(aclTensorDesc*, aclCreateTensorDesc, aclDataType dataType, int numDims, const int64_t* dims, aclFormat format);
DEFFUNCV(aclTensorDesc*, aclCreateTensorDesc, aclDataType dataType, int numDims, const int64_t* dims, aclFormat format);
DEFFTYPE(size_t, aclDataTypeSize, aclDataType dataType);
DEFFUNCV(size_t, aclDataTypeSize, aclDataType dataType);
DEFFTYPE(aclError, aclDestroyDataBuffer, const aclDataBuffer* dataBuffer);
DEFFUNCV(aclError, aclDestroyDataBuffer, const aclDataBuffer* dataBuffer);
DEFFTYPE(aclError, aclDestroyGraphDumpOpt, const aclGraphDumpOption* graphDumpOpt);
DEFFUNCV(aclError, aclDestroyGraphDumpOpt, const aclGraphDumpOption* graphDumpOpt);
DEFFTYPE(void, aclDestroyTensorDesc, const aclTensorDesc* desc);
DEFFUNCV(void, aclDestroyTensorDesc, const aclTensorDesc* desc);
DEFFTYPE(aclError, aclFinalize, );
DEFFUNCV(aclError, aclFinalize, );
DEFFTYPE(float, aclFloat16ToFloat, aclFloat16 value);
DEFFUNCV(float, aclFloat16ToFloat, aclFloat16 value);
DEFFTYPE(aclFloat16, aclFloatToFloat16, float value);
DEFFUNCV(aclFloat16, aclFloatToFloat16, float value);
DEFFTYPE(aclError, aclGenGraphAndDumpForOp, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclopEngineType engineType, const char* graphDumpPath, const aclGraphDumpOption* graphDumpOpt);
DEFFUNCV(aclError, aclGenGraphAndDumpForOp, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclopEngineType engineType, const char* graphDumpPath, const aclGraphDumpOption* graphDumpOpt);
DEFFTYPE(aclError, aclGetCannAttribute, aclCannAttr cannAttr, int32_t* value);
DEFFUNCV(aclError, aclGetCannAttribute, aclCannAttr cannAttr, int32_t* value);
DEFFTYPE(aclError, aclGetCannAttributeList, const aclCannAttr** cannAttrList, size_t* num);
DEFFUNCV(aclError, aclGetCannAttributeList, const aclCannAttr** cannAttrList, size_t* num);
DEFFTYPE(aclError, aclGetCompileopt, aclCompileOpt opt, char* value, size_t length);
DEFFUNCV(aclError, aclGetCompileopt, aclCompileOpt opt, char* value, size_t length);
DEFFTYPE(size_t, aclGetCompileoptSize, aclCompileOpt opt);
DEFFUNCV(size_t, aclGetCompileoptSize, aclCompileOpt opt);
DEFFTYPE(void*, aclGetDataBufferAddr, const aclDataBuffer* dataBuffer);
DEFFUNCV(void*, aclGetDataBufferAddr, const aclDataBuffer* dataBuffer);
DEFFTYPE(uint32_t, aclGetDataBufferSize, const aclDataBuffer* dataBuffer);
DEFFUNCV(uint32_t, aclGetDataBufferSize, const aclDataBuffer* dataBuffer);
DEFFTYPE(size_t, aclGetDataBufferSizeV2, const aclDataBuffer* dataBuffer);
DEFFUNCV(size_t, aclGetDataBufferSizeV2, const aclDataBuffer* dataBuffer);
DEFFTYPE(aclError, aclGetDeviceCapability, uint32_t deviceId, aclDeviceInfo deviceInfo, int64_t* value);
DEFFUNCV(aclError, aclGetDeviceCapability, uint32_t deviceId, aclDeviceInfo deviceInfo, int64_t* value);
DEFFTYPE(const char*, aclGetRecentErrMsg, );
DEFFUNCV(const char*, aclGetRecentErrMsg, );
DEFFTYPE(void*, aclGetTensorDescAddress, const aclTensorDesc* desc);
DEFFUNCV(void*, aclGetTensorDescAddress, const aclTensorDesc* desc);
DEFFTYPE(aclTensorDesc*, aclGetTensorDescByIndex, aclTensorDesc* desc, size_t index);
DEFFUNCV(aclTensorDesc*, aclGetTensorDescByIndex, aclTensorDesc* desc, size_t index);
DEFFTYPE(int64_t, aclGetTensorDescDim, const aclTensorDesc* desc, size_t index);
DEFFUNCV(int64_t, aclGetTensorDescDim, const aclTensorDesc* desc, size_t index);
DEFFTYPE(aclError, aclGetTensorDescDimRange, const aclTensorDesc* desc, size_t index, size_t dimRangeNum, int64_t* dimRange);
DEFFUNCV(aclError, aclGetTensorDescDimRange, const aclTensorDesc* desc, size_t index, size_t dimRangeNum, int64_t* dimRange);
DEFFTYPE(aclError, aclGetTensorDescDimV2, const aclTensorDesc* desc, size_t index, int64_t* dimSize);
DEFFUNCV(aclError, aclGetTensorDescDimV2, const aclTensorDesc* desc, size_t index, int64_t* dimSize);
DEFFTYPE(size_t, aclGetTensorDescElementCount, const aclTensorDesc* desc);
DEFFUNCV(size_t, aclGetTensorDescElementCount, const aclTensorDesc* desc);
DEFFTYPE(aclFormat, aclGetTensorDescFormat, const aclTensorDesc* desc);
DEFFUNCV(aclFormat, aclGetTensorDescFormat, const aclTensorDesc* desc);
DEFFTYPE(const char*, aclGetTensorDescName, aclTensorDesc* desc);
DEFFUNCV(const char*, aclGetTensorDescName, aclTensorDesc* desc);
DEFFTYPE(size_t, aclGetTensorDescNumDims, const aclTensorDesc* desc);
DEFFUNCV(size_t, aclGetTensorDescNumDims, const aclTensorDesc* desc);
DEFFTYPE(size_t, aclGetTensorDescSize, const aclTensorDesc* desc);
DEFFUNCV(size_t, aclGetTensorDescSize, const aclTensorDesc* desc);
DEFFTYPE(aclDataType, aclGetTensorDescType, const aclTensorDesc* desc);
DEFFUNCV(aclDataType, aclGetTensorDescType, const aclTensorDesc* desc);
DEFFTYPE(aclError, aclInit, const char* configPath);
DEFFUNCV(aclError, aclInit, const char* configPath);
aclInitTensor cnt == 0
aclRfft1D cnt == 0
aclRfft1DGetWorkspaceSize cnt == 0
DEFFTYPE(aclError, aclSetCompileopt, aclCompileOpt opt, const char* value);
DEFFUNCV(aclError, aclSetCompileopt, aclCompileOpt opt, const char* value);
DEFFTYPE(aclError, aclSetTensorConst, aclTensorDesc* desc, void* dataBuffer, size_t length);
DEFFUNCV(aclError, aclSetTensorConst, aclTensorDesc* desc, void* dataBuffer, size_t length);
DEFFTYPE(void, aclSetTensorDescName, aclTensorDesc* desc, const char* name);
DEFFUNCV(void, aclSetTensorDescName, aclTensorDesc* desc, const char* name);
DEFFTYPE(aclError, aclSetTensorDynamicInput, aclTensorDesc* desc, const char* dynamicInputName);
DEFFUNCV(aclError, aclSetTensorDynamicInput, aclTensorDesc* desc, const char* dynamicInputName);
DEFFTYPE(aclError, aclSetTensorFormat, aclTensorDesc* desc, aclFormat format);
DEFFUNCV(aclError, aclSetTensorFormat, aclTensorDesc* desc, aclFormat format);
DEFFTYPE(aclError, aclSetTensorOriginFormat, aclTensorDesc* desc, aclFormat format);
DEFFUNCV(aclError, aclSetTensorOriginFormat, aclTensorDesc* desc, aclFormat format);
DEFFTYPE(aclError, aclSetTensorOriginShape, aclTensorDesc* desc, int numDims, const int64_t* dims);
DEFFUNCV(aclError, aclSetTensorOriginShape, aclTensorDesc* desc, int numDims, const int64_t* dims);
DEFFTYPE(aclError, aclSetTensorPlaceMent, aclTensorDesc* desc, aclMemType memType);
DEFFUNCV(aclError, aclSetTensorPlaceMent, aclTensorDesc* desc, aclMemType memType);
DEFFTYPE(aclError, aclSetTensorShape, aclTensorDesc* desc, int numDims, const int64_t* dims);
DEFFUNCV(aclError, aclSetTensorShape, aclTensorDesc* desc, int numDims, const int64_t* dims);
DEFFTYPE(aclError, aclSetTensorShapeRange, aclTensorDesc* desc, size_t dimsCount, int64_t dimsRange[][ACL_TENSOR_SHAPE_RANGE_NUM]);
DEFFUNCV(aclError, aclSetTensorShapeRange, aclTensorDesc* desc, size_t dimsCount, int64_t dimsRange[][ACL_TENSOR_SHAPE_RANGE_NUM]);
DEFFTYPE(aclError, aclSetTensorStorageFormat, aclTensorDesc* desc, aclFormat format);
DEFFUNCV(aclError, aclSetTensorStorageFormat, aclTensorDesc* desc, aclFormat format);
DEFFTYPE(aclError, aclSetTensorStorageShape, aclTensorDesc* desc, int numDims, const int64_t* dims);
DEFFUNCV(aclError, aclSetTensorStorageShape, aclTensorDesc* desc, int numDims, const int64_t* dims);
DEFFTYPE(aclError, aclSetTensorValueRange, aclTensorDesc* desc, size_t valueCount, int64_t valueRange[][ACL_TENSOR_VALUE_RANGE_NUM]);
DEFFUNCV(aclError, aclSetTensorValueRange, aclTensorDesc* desc, size_t valueCount, int64_t valueRange[][ACL_TENSOR_VALUE_RANGE_NUM]);
aclStft cnt == 0
aclStftGetWorkspaceSize cnt == 0
DEFFTYPE(aclError, aclTransTensorDescFormat, const aclTensorDesc* srcDesc, aclFormat dstFormat, aclTensorDesc** dstDesc);
DEFFUNCV(aclError, aclTransTensorDescFormat, const aclTensorDesc* srcDesc, aclFormat dstFormat, aclTensorDesc** dstDesc);
DEFFTYPE(aclError, aclUpdateDataBuffer, aclDataBuffer* dataBuffer, void* data, size_t size);
DEFFUNCV(aclError, aclUpdateDataBuffer, aclDataBuffer* dataBuffer, void* data, size_t size);
acldumpRegCallback cnt == 0
acldumpUnregCallback cnt == 0
aclgrphProfGraphSubscribe cnt == 0
aclgrphProfGraphUnSubscribe cnt == 0
DEFFTYPE(aclError, aclmdlAddDatasetBuffer, aclmdlDataset* dataset, aclDataBuffer* dataBuffer);
DEFFUNCV(aclError, aclmdlAddDatasetBuffer, aclmdlDataset* dataset, aclDataBuffer* dataBuffer);
DEFFTYPE(aclmdlAIPP*, aclmdlCreateAIPP, uint64_t batchSize);
DEFFUNCV(aclmdlAIPP*, aclmdlCreateAIPP, uint64_t batchSize);
DEFFTYPE(aclError, aclmdlCreateAndGetOpDesc, uint32_t deviceId, uint32_t streamId, uint32_t taskId, char* opName, size_t opNameLen, aclTensorDesc** inputDesc, size_t* numInputs, aclTensorDesc** outputDesc, size_t* numOutputs);
DEFFUNCV(aclError, aclmdlCreateAndGetOpDesc, uint32_t deviceId, uint32_t streamId, uint32_t taskId, char* opName, size_t opNameLen, aclTensorDesc** inputDesc, size_t* numInputs, aclTensorDesc** outputDesc, size_t* numOutputs);
DEFFTYPE(aclmdlConfigHandle*, aclmdlCreateConfigHandle, );
DEFFUNCV(aclmdlConfigHandle*, aclmdlCreateConfigHandle, );
DEFFTYPE(aclmdlDataset*, aclmdlCreateDataset, );
DEFFUNCV(aclmdlDataset*, aclmdlCreateDataset, );
DEFFTYPE(aclmdlDesc*, aclmdlCreateDesc, );
DEFFUNCV(aclmdlDesc*, aclmdlCreateDesc, );
DEFFTYPE(aclmdlExecConfigHandle*, aclmdlCreateExecConfigHandle, );
DEFFUNCV(aclmdlExecConfigHandle*, aclmdlCreateExecConfigHandle, );
DEFFTYPE(aclError, aclmdlDestroyAIPP, const aclmdlAIPP* aippParmsSet);
DEFFUNCV(aclError, aclmdlDestroyAIPP, const aclmdlAIPP* aippParmsSet);
DEFFTYPE(aclError, aclmdlDestroyConfigHandle, aclmdlConfigHandle* handle);
DEFFUNCV(aclError, aclmdlDestroyConfigHandle, aclmdlConfigHandle* handle);
DEFFTYPE(aclError, aclmdlDestroyDataset, const aclmdlDataset* dataset);
DEFFUNCV(aclError, aclmdlDestroyDataset, const aclmdlDataset* dataset);
DEFFTYPE(aclError, aclmdlDestroyDesc, aclmdlDesc* modelDesc);
DEFFUNCV(aclError, aclmdlDestroyDesc, aclmdlDesc* modelDesc);
DEFFTYPE(aclError, aclmdlDestroyExecConfigHandle, const aclmdlExecConfigHandle* handle);
DEFFUNCV(aclError, aclmdlDestroyExecConfigHandle, const aclmdlExecConfigHandle* handle);
DEFFTYPE(aclError, aclmdlExecute, uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output);
DEFFUNCV(aclError, aclmdlExecute, uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output);
DEFFTYPE(aclError, aclmdlExecuteAsync, uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output, aclrtStream stream);
DEFFUNCV(aclError, aclmdlExecuteAsync, uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output, aclrtStream stream);
DEFFTYPE(aclError, aclmdlExecuteV2, uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output, aclrtStream stream, const aclmdlExecConfigHandle* handle);
DEFFUNCV(aclError, aclmdlExecuteV2, uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output, aclrtStream stream, const aclmdlExecConfigHandle* handle);
DEFFTYPE(aclError, aclmdlFinalizeDump, );
DEFFUNCV(aclError, aclmdlFinalizeDump, );
DEFFTYPE(aclError, aclmdlGetAippDataSize, uint64_t batchSize, size_t* size);
DEFFUNCV(aclError, aclmdlGetAippDataSize, uint64_t batchSize, size_t* size);
DEFFTYPE(aclError, aclmdlGetAippType, uint32_t modelId, size_t index, aclmdlInputAippType* type, size_t* dynamicAttachedDataIndex);
DEFFUNCV(aclError, aclmdlGetAippType, uint32_t modelId, size_t index, aclmdlInputAippType* type, size_t* dynamicAttachedDataIndex);
DEFFTYPE(aclError, aclmdlGetCurOutputDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFUNCV(aclError, aclmdlGetCurOutputDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFTYPE(aclDataBuffer*, aclmdlGetDatasetBuffer, const aclmdlDataset* dataset, size_t index);
DEFFUNCV(aclDataBuffer*, aclmdlGetDatasetBuffer, const aclmdlDataset* dataset, size_t index);
DEFFTYPE(size_t, aclmdlGetDatasetNumBuffers, const aclmdlDataset* dataset);
DEFFUNCV(size_t, aclmdlGetDatasetNumBuffers, const aclmdlDataset* dataset);
DEFFTYPE(aclTensorDesc*, aclmdlGetDatasetTensorDesc, const aclmdlDataset* dataset, size_t index);
DEFFUNCV(aclTensorDesc*, aclmdlGetDatasetTensorDesc, const aclmdlDataset* dataset, size_t index);
DEFFTYPE(aclError, aclmdlGetDesc, aclmdlDesc* modelDesc, uint32_t modelId);
DEFFUNCV(aclError, aclmdlGetDesc, aclmdlDesc* modelDesc, uint32_t modelId);
DEFFTYPE(aclError, aclmdlGetDynamicBatch, const aclmdlDesc* modelDesc, aclmdlBatch* batch);
DEFFUNCV(aclError, aclmdlGetDynamicBatch, const aclmdlDesc* modelDesc, aclmdlBatch* batch);
DEFFTYPE(aclError, aclmdlGetDynamicHW, const aclmdlDesc* modelDesc, size_t index, aclmdlHW* hw);
DEFFUNCV(aclError, aclmdlGetDynamicHW, const aclmdlDesc* modelDesc, size_t index, aclmdlHW* hw);
DEFFTYPE(aclError, aclmdlGetFirstAippInfo, uint32_t modelId, size_t index, aclAippInfo* aippInfo);
DEFFUNCV(aclError, aclmdlGetFirstAippInfo, uint32_t modelId, size_t index, aclAippInfo* aippInfo);
DEFFTYPE(aclDataType, aclmdlGetInputDataType, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclDataType, aclmdlGetInputDataType, const aclmdlDesc* modelDesc, size_t index);
DEFFTYPE(aclError, aclmdlGetInputDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFUNCV(aclError, aclmdlGetInputDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFTYPE(aclError, aclmdlGetInputDimsV2, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFUNCV(aclError, aclmdlGetInputDimsV2, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFTYPE(aclError, aclmdlGetInputDynamicDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims, size_t gearCount);
DEFFUNCV(aclError, aclmdlGetInputDynamicDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims, size_t gearCount);
DEFFTYPE(aclError, aclmdlGetInputDynamicGearCount, const aclmdlDesc* modelDesc, size_t index, size_t* gearCount);
DEFFUNCV(aclError, aclmdlGetInputDynamicGearCount, const aclmdlDesc* modelDesc, size_t index, size_t* gearCount);
DEFFTYPE(aclFormat, aclmdlGetInputFormat, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclFormat, aclmdlGetInputFormat, const aclmdlDesc* modelDesc, size_t index);
DEFFTYPE(aclError, aclmdlGetInputIndexByName, const aclmdlDesc* modelDesc, const char* name, size_t* index);
DEFFUNCV(aclError, aclmdlGetInputIndexByName, const aclmdlDesc* modelDesc, const char* name, size_t* index);
DEFFTYPE(const char*, aclmdlGetInputNameByIndex, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(const char*, aclmdlGetInputNameByIndex, const aclmdlDesc* modelDesc, size_t index);
DEFFTYPE(size_t, aclmdlGetInputSizeByIndex, aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(size_t, aclmdlGetInputSizeByIndex, aclmdlDesc* modelDesc, size_t index);
DEFFTYPE(size_t, aclmdlGetNumInputs, aclmdlDesc* modelDesc);
DEFFUNCV(size_t, aclmdlGetNumInputs, aclmdlDesc* modelDesc);
DEFFTYPE(size_t, aclmdlGetNumOutputs, aclmdlDesc* modelDesc);
DEFFUNCV(size_t, aclmdlGetNumOutputs, aclmdlDesc* modelDesc);
DEFFTYPE(const char*, aclmdlGetOpAttr, aclmdlDesc* modelDesc, const char* opName, const char* attr);
DEFFUNCV(const char*, aclmdlGetOpAttr, aclmdlDesc* modelDesc, const char* opName, const char* attr);
DEFFTYPE(aclDataType, aclmdlGetOutputDataType, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclDataType, aclmdlGetOutputDataType, const aclmdlDesc* modelDesc, size_t index);
DEFFTYPE(aclError, aclmdlGetOutputDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFUNCV(aclError, aclmdlGetOutputDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFTYPE(aclFormat, aclmdlGetOutputFormat, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclFormat, aclmdlGetOutputFormat, const aclmdlDesc* modelDesc, size_t index);
DEFFTYPE(aclError, aclmdlGetOutputIndexByName, const aclmdlDesc* modelDesc, const char* name, size_t* index);
DEFFUNCV(aclError, aclmdlGetOutputIndexByName, const aclmdlDesc* modelDesc, const char* name, size_t* index);
DEFFTYPE(const char*, aclmdlGetOutputNameByIndex, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(const char*, aclmdlGetOutputNameByIndex, const aclmdlDesc* modelDesc, size_t index);
DEFFTYPE(size_t, aclmdlGetOutputSizeByIndex, aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(size_t, aclmdlGetOutputSizeByIndex, aclmdlDesc* modelDesc, size_t index);
DEFFTYPE(const char*, aclmdlGetTensorRealName, const aclmdlDesc* modelDesc, const char* name);
DEFFUNCV(const char*, aclmdlGetTensorRealName, const aclmdlDesc* modelDesc, const char* name);
DEFFTYPE(aclError, aclmdlInitDump, );
DEFFUNCV(aclError, aclmdlInitDump, );
DEFFTYPE(aclError, aclmdlLoadFromFile, const char* modelPath, uint32_t* modelId);
DEFFUNCV(aclError, aclmdlLoadFromFile, const char* modelPath, uint32_t* modelId);
DEFFTYPE(aclError, aclmdlLoadFromFileWithMem, const char* modelPath, uint32_t* modelId, void* workPtr, size_t workSize, void* weightPtr, size_t weightSize);
DEFFUNCV(aclError, aclmdlLoadFromFileWithMem, const char* modelPath, uint32_t* modelId, void* workPtr, size_t workSize, void* weightPtr, size_t weightSize);
DEFFTYPE(aclError, aclmdlLoadFromFileWithQ, const char* modelPath, uint32_t* modelId, const uint32_t* inputQ, size_t inputQNum, const uint32_t* outputQ, size_t outputQNum);
DEFFUNCV(aclError, aclmdlLoadFromFileWithQ, const char* modelPath, uint32_t* modelId, const uint32_t* inputQ, size_t inputQNum, const uint32_t* outputQ, size_t outputQNum);
DEFFTYPE(aclError, aclmdlLoadFromMem, const void* model, size_t modelSize, uint32_t* modelId);
DEFFUNCV(aclError, aclmdlLoadFromMem, const void* model, size_t modelSize, uint32_t* modelId);
DEFFTYPE(aclError, aclmdlLoadFromMemWithMem, const void* model, size_t modelSize, uint32_t* modelId, void* workPtr, size_t workSize, void* weightPtr, size_t weightSize);
DEFFUNCV(aclError, aclmdlLoadFromMemWithMem, const void* model, size_t modelSize, uint32_t* modelId, void* workPtr, size_t workSize, void* weightPtr, size_t weightSize);
DEFFTYPE(aclError, aclmdlLoadFromMemWithQ, const void* model, size_t modelSize, uint32_t* modelId, const uint32_t* inputQ, size_t inputQNum, const uint32_t* outputQ, size_t outputQNum);
DEFFUNCV(aclError, aclmdlLoadFromMemWithQ, const void* model, size_t modelSize, uint32_t* modelId, const uint32_t* inputQ, size_t inputQNum, const uint32_t* outputQ, size_t outputQNum);
DEFFTYPE(aclError, aclmdlLoadWithConfig, const aclmdlConfigHandle* handle, uint32_t* modelId);
DEFFUNCV(aclError, aclmdlLoadWithConfig, const aclmdlConfigHandle* handle, uint32_t* modelId);
DEFFTYPE(aclError, aclmdlQuerySize, const char* fileName, size_t* workSize, size_t* weightSize);
DEFFUNCV(aclError, aclmdlQuerySize, const char* fileName, size_t* workSize, size_t* weightSize);
DEFFTYPE(aclError, aclmdlQuerySizeFromMem, const void* model, size_t modelSize, size_t* workSize, size_t* weightSize);
DEFFUNCV(aclError, aclmdlQuerySizeFromMem, const void* model, size_t modelSize, size_t* workSize, size_t* weightSize);
DEFFTYPE(aclError, aclmdlSetAIPPAxSwapSwitch, aclmdlAIPP* aippParmsSet, int8_t axSwapSwitch);
DEFFUNCV(aclError, aclmdlSetAIPPAxSwapSwitch, aclmdlAIPP* aippParmsSet, int8_t axSwapSwitch);
DEFFTYPE(aclError, aclmdlSetAIPPByInputIndex, uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlAIPP* aippParmsSet);
DEFFUNCV(aclError, aclmdlSetAIPPByInputIndex, uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlAIPP* aippParmsSet);
DEFFTYPE(aclError, aclmdlSetAIPPCropParams, aclmdlAIPP* aippParmsSet, int8_t cropSwitch, int32_t cropStartPosW, int32_t cropStartPosH, int32_t cropSizeW, int32_t cropSizeH, uint64_t batchIndex);
DEFFUNCV(aclError, aclmdlSetAIPPCropParams, aclmdlAIPP* aippParmsSet, int8_t cropSwitch, int32_t cropStartPosW, int32_t cropStartPosH, int32_t cropSizeW, int32_t cropSizeH, uint64_t batchIndex);
DEFFTYPE(aclError, aclmdlSetAIPPCscParams, aclmdlAIPP* aippParmsSet, int8_t cscSwitch, int16_t cscMatrixR0C0, int16_t cscMatrixR0C1, int16_t cscMatrixR0C2, int16_t cscMatrixR1C0, int16_t cscMatrixR1C1, int16_t cscMatrixR1C2, int16_t cscMatrixR2C0, int16_t cscMatrixR2C1, int16_t cscMatrixR2C2, uint8_t cscOutputBiasR0, uint8_t cscOutputBiasR1, uint8_t cscOutputBiasR2, uint8_t cscInputBiasR0, uint8_t cscInputBiasR1, uint8_t cscInputBiasR2);
DEFFUNCV(aclError, aclmdlSetAIPPCscParams, aclmdlAIPP* aippParmsSet, int8_t cscSwitch, int16_t cscMatrixR0C0, int16_t cscMatrixR0C1, int16_t cscMatrixR0C2, int16_t cscMatrixR1C0, int16_t cscMatrixR1C1, int16_t cscMatrixR1C2, int16_t cscMatrixR2C0, int16_t cscMatrixR2C1, int16_t cscMatrixR2C2, uint8_t cscOutputBiasR0, uint8_t cscOutputBiasR1, uint8_t cscOutputBiasR2, uint8_t cscInputBiasR0, uint8_t cscInputBiasR1, uint8_t cscInputBiasR2);
DEFFTYPE(aclError, aclmdlSetAIPPDtcPixelMean, aclmdlAIPP* aippParmsSet, int16_t dtcPixelMeanChn0, int16_t dtcPixelMeanChn1, int16_t dtcPixelMeanChn2, int16_t dtcPixelMeanChn3, uint64_t batchIndex);
DEFFUNCV(aclError, aclmdlSetAIPPDtcPixelMean, aclmdlAIPP* aippParmsSet, int16_t dtcPixelMeanChn0, int16_t dtcPixelMeanChn1, int16_t dtcPixelMeanChn2, int16_t dtcPixelMeanChn3, uint64_t batchIndex);
DEFFTYPE(aclError, aclmdlSetAIPPDtcPixelMin, aclmdlAIPP* aippParmsSet, float dtcPixelMinChn0, float dtcPixelMinChn1, float dtcPixelMinChn2, float dtcPixelMinChn3, uint64_t batchIndex);
DEFFUNCV(aclError, aclmdlSetAIPPDtcPixelMin, aclmdlAIPP* aippParmsSet, float dtcPixelMinChn0, float dtcPixelMinChn1, float dtcPixelMinChn2, float dtcPixelMinChn3, uint64_t batchIndex);
DEFFTYPE(aclError, aclmdlSetAIPPInputFormat, aclmdlAIPP* aippParmsSet, aclAippInputFormat inputFormat);
DEFFUNCV(aclError, aclmdlSetAIPPInputFormat, aclmdlAIPP* aippParmsSet, aclAippInputFormat inputFormat);
DEFFTYPE(aclError, aclmdlSetAIPPPaddingParams, aclmdlAIPP* aippParmsSet, int8_t paddingSwitch, int32_t paddingSizeTop, int32_t paddingSizeBottom, int32_t paddingSizeLeft, int32_t paddingSizeRight, uint64_t batchIndex);
DEFFUNCV(aclError, aclmdlSetAIPPPaddingParams, aclmdlAIPP* aippParmsSet, int8_t paddingSwitch, int32_t paddingSizeTop, int32_t paddingSizeBottom, int32_t paddingSizeLeft, int32_t paddingSizeRight, uint64_t batchIndex);
DEFFTYPE(aclError, aclmdlSetAIPPPixelVarReci, aclmdlAIPP* aippParmsSet, float dtcPixelVarReciChn0, float dtcPixelVarReciChn1, float dtcPixelVarReciChn2, float dtcPixelVarReciChn3, uint64_t batchIndex);
DEFFUNCV(aclError, aclmdlSetAIPPPixelVarReci, aclmdlAIPP* aippParmsSet, float dtcPixelVarReciChn0, float dtcPixelVarReciChn1, float dtcPixelVarReciChn2, float dtcPixelVarReciChn3, uint64_t batchIndex);
DEFFTYPE(aclError, aclmdlSetAIPPRbuvSwapSwitch, aclmdlAIPP* aippParmsSet, int8_t rbuvSwapSwitch);
DEFFUNCV(aclError, aclmdlSetAIPPRbuvSwapSwitch, aclmdlAIPP* aippParmsSet, int8_t rbuvSwapSwitch);
DEFFTYPE(aclError, aclmdlSetAIPPScfParams, aclmdlAIPP* aippParmsSet, int8_t scfSwitch, int32_t scfInputSizeW, int32_t scfInputSizeH, int32_t scfOutputSizeW, int32_t scfOutputSizeH, uint64_t batchIndex);
DEFFUNCV(aclError, aclmdlSetAIPPScfParams, aclmdlAIPP* aippParmsSet, int8_t scfSwitch, int32_t scfInputSizeW, int32_t scfInputSizeH, int32_t scfOutputSizeW, int32_t scfOutputSizeH, uint64_t batchIndex);
DEFFTYPE(aclError, aclmdlSetAIPPSrcImageSize, aclmdlAIPP* aippParmsSet, int32_t srcImageSizeW, int32_t srcImageSizeH);
DEFFUNCV(aclError, aclmdlSetAIPPSrcImageSize, aclmdlAIPP* aippParmsSet, int32_t srcImageSizeW, int32_t srcImageSizeH);
DEFFTYPE(aclError, aclmdlSetConfigOpt, aclmdlConfigHandle* handle, aclmdlConfigAttr attr, const void* attrValue, size_t valueSize);
DEFFUNCV(aclError, aclmdlSetConfigOpt, aclmdlConfigHandle* handle, aclmdlConfigAttr attr, const void* attrValue, size_t valueSize);
DEFFTYPE(aclError, aclmdlSetDatasetTensorDesc, aclmdlDataset* dataset, aclTensorDesc* tensorDesc, size_t index);
DEFFUNCV(aclError, aclmdlSetDatasetTensorDesc, aclmdlDataset* dataset, aclTensorDesc* tensorDesc, size_t index);
DEFFTYPE(aclError, aclmdlSetDump, const char* dumpCfgPath);
DEFFUNCV(aclError, aclmdlSetDump, const char* dumpCfgPath);
DEFFTYPE(aclError, aclmdlSetDynamicBatchSize, uint32_t modelId, aclmdlDataset* dataset, size_t index, uint64_t batchSize);
DEFFUNCV(aclError, aclmdlSetDynamicBatchSize, uint32_t modelId, aclmdlDataset* dataset, size_t index, uint64_t batchSize);
DEFFTYPE(aclError, aclmdlSetDynamicHWSize, uint32_t modelId, aclmdlDataset* dataset, size_t index, uint64_t height, uint64_t width);
DEFFUNCV(aclError, aclmdlSetDynamicHWSize, uint32_t modelId, aclmdlDataset* dataset, size_t index, uint64_t height, uint64_t width);
DEFFTYPE(aclError, aclmdlSetExecConfigOpt, aclmdlExecConfigHandle* handle, aclmdlExecConfigAttr attr, const void* attrValue, size_t valueSize);
DEFFUNCV(aclError, aclmdlSetExecConfigOpt, aclmdlExecConfigHandle* handle, aclmdlExecConfigAttr attr, const void* attrValue, size_t valueSize);
DEFFTYPE(aclError, aclmdlSetInputAIPP, uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlAIPP* aippParmsSet);
DEFFUNCV(aclError, aclmdlSetInputAIPP, uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlAIPP* aippParmsSet);
DEFFTYPE(aclError, aclmdlSetInputDynamicDims, uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlIODims* dims);
DEFFUNCV(aclError, aclmdlSetInputDynamicDims, uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlIODims* dims);
DEFFTYPE(aclError, aclmdlUnload, uint32_t modelId);
DEFFUNCV(aclError, aclmdlUnload, uint32_t modelId);
DEFFTYPE(aclError, aclopCast, const aclTensorDesc* srcDesc, const aclDataBuffer* srcBuffer, const aclTensorDesc* dstDesc, aclDataBuffer* dstBuffer, uint8_t truncate, aclrtStream stream);
DEFFUNCV(aclError, aclopCast, const aclTensorDesc* srcDesc, const aclDataBuffer* srcBuffer, const aclTensorDesc* dstDesc, aclDataBuffer* dstBuffer, uint8_t truncate, aclrtStream stream);
DEFFTYPE(aclError, aclopCompile, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath);
DEFFUNCV(aclError, aclopCompile, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath);
DEFFTYPE(aclError, aclopCompileAndExecute, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath, aclrtStream stream);
DEFFUNCV(aclError, aclopCompileAndExecute, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath, aclrtStream stream);
DEFFTYPE(aclError, aclopCompileAndExecuteV2, const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclDataBuffer* outputs[], aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath, aclrtStream stream);
DEFFUNCV(aclError, aclopCompileAndExecuteV2, const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclDataBuffer* outputs[], aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath, aclrtStream stream);
DEFFTYPE(aclopAttr*, aclopCreateAttr, );
DEFFUNCV(aclopAttr*, aclopCreateAttr, );
DEFFTYPE(aclError, aclopCreateHandle, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* opAttr, aclopHandle** handle);
DEFFUNCV(aclError, aclopCreateHandle, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* opAttr, aclopHandle** handle);
DEFFTYPE(aclError, aclopCreateHandleForCast, aclTensorDesc* srcDesc, aclTensorDesc* dstDesc, uint8_t truncate, aclopHandle** handle);
DEFFUNCV(aclError, aclopCreateHandleForCast, aclTensorDesc* srcDesc, aclTensorDesc* dstDesc, uint8_t truncate, aclopHandle** handle);
DEFFTYPE(aclError, aclopCreateKernel, const char* opType, const char* kernelId, const char* kernelName, void* binData, int binSize, aclopEngineType enginetype, aclDataDeallocator deallocator);
DEFFUNCV(aclError, aclopCreateKernel, const char* opType, const char* kernelId, const char* kernelName, void* binData, int binSize, aclopEngineType enginetype, aclDataDeallocator deallocator);
DEFFTYPE(void, aclopDestroyAttr, const aclopAttr* attr);
DEFFUNCV(void, aclopDestroyAttr, const aclopAttr* attr);
DEFFTYPE(void, aclopDestroyHandle, aclopHandle* handle);
DEFFUNCV(void, aclopDestroyHandle, aclopHandle* handle);
DEFFTYPE(aclError, aclopExecWithHandle, aclopHandle* handle, int numInputs, const aclDataBuffer* const inputs[], int numOutputs, aclDataBuffer* const outputs[], aclrtStream stream);
DEFFUNCV(aclError, aclopExecWithHandle, aclopHandle* handle, int numInputs, const aclDataBuffer* const inputs[], int numOutputs, aclDataBuffer* const outputs[], aclrtStream stream);
DEFFTYPE(aclError, aclopExecute, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclrtStream stream);
DEFFUNCV(aclError, aclopExecute, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclrtStream stream);
DEFFTYPE(aclError, aclopExecuteV2, const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclDataBuffer* outputs[], aclopAttr* attr, aclrtStream stream);
DEFFUNCV(aclError, aclopExecuteV2, const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclDataBuffer* outputs[], aclopAttr* attr, aclrtStream stream);
DEFFTYPE(aclError, aclopInferShape, const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclopAttr* attr);
DEFFUNCV(aclError, aclopInferShape, const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclopAttr* attr);
DEFFTYPE(aclError, aclopLoad, const void* model, size_t modelSize);
DEFFUNCV(aclError, aclopLoad, const void* model, size_t modelSize);
DEFFTYPE(aclError, aclopRegisterCompileFunc, const char* opType, aclopCompileFunc func);
DEFFUNCV(aclError, aclopRegisterCompileFunc, const char* opType, aclopCompileFunc func);
DEFFTYPE(aclError, aclopSetAttrBool, aclopAttr* attr, const char* attrName, uint8_t attrValue);
DEFFUNCV(aclError, aclopSetAttrBool, aclopAttr* attr, const char* attrName, uint8_t attrValue);
DEFFTYPE(aclError, aclopSetAttrDataType, aclopAttr* attr, const char* attrName, aclDataType attrValue);
DEFFUNCV(aclError, aclopSetAttrDataType, aclopAttr* attr, const char* attrName, aclDataType attrValue);
DEFFTYPE(aclError, aclopSetAttrFloat, aclopAttr* attr, const char* attrName, float attrValue);
DEFFUNCV(aclError, aclopSetAttrFloat, aclopAttr* attr, const char* attrName, float attrValue);
DEFFTYPE(aclError, aclopSetAttrInt, aclopAttr* attr, const char* attrName, int64_t attrValue);
DEFFUNCV(aclError, aclopSetAttrInt, aclopAttr* attr, const char* attrName, int64_t attrValue);
DEFFTYPE(aclError, aclopSetAttrListBool, aclopAttr* attr, const char* attrName, int numValues, const uint8_t* values);
DEFFUNCV(aclError, aclopSetAttrListBool, aclopAttr* attr, const char* attrName, int numValues, const uint8_t* values);
DEFFTYPE(aclError, aclopSetAttrListDataType, aclopAttr* attr, const char* attrName, int numValues, const aclDataType values[]);
DEFFUNCV(aclError, aclopSetAttrListDataType, aclopAttr* attr, const char* attrName, int numValues, const aclDataType values[]);
DEFFTYPE(aclError, aclopSetAttrListFloat, aclopAttr* attr, const char* attrName, int numValues, const float* values);
DEFFUNCV(aclError, aclopSetAttrListFloat, aclopAttr* attr, const char* attrName, int numValues, const float* values);
DEFFTYPE(aclError, aclopSetAttrListInt, aclopAttr* attr, const char* attrName, int numValues, const int64_t* values);
DEFFUNCV(aclError, aclopSetAttrListInt, aclopAttr* attr, const char* attrName, int numValues, const int64_t* values);
DEFFTYPE(aclError, aclopSetAttrListListInt, aclopAttr* attr, const char* attrName, int numLists, const int* numValues, const int64_t* const values[]);
DEFFUNCV(aclError, aclopSetAttrListListInt, aclopAttr* attr, const char* attrName, int numLists, const int* numValues, const int64_t* const values[]);
DEFFTYPE(aclError, aclopSetAttrListString, aclopAttr* attr, const char* attrName, int numValues, const char** values);
DEFFUNCV(aclError, aclopSetAttrListString, aclopAttr* attr, const char* attrName, int numValues, const char** values);
DEFFTYPE(aclError, aclopSetAttrString, aclopAttr* attr, const char* attrName, const char* attrValue);
DEFFUNCV(aclError, aclopSetAttrString, aclopAttr* attr, const char* attrName, const char* attrValue);
DEFFTYPE(aclError, aclopSetCompileFlag, aclOpCompileFlag flag);
DEFFUNCV(aclError, aclopSetCompileFlag, aclOpCompileFlag flag);
DEFFTYPE(aclError, aclopSetKernelArgs, aclopKernelDesc* kernelDesc, const char* kernelId, uint32_t blockDim, const void* args, uint32_t argSize);
DEFFUNCV(aclError, aclopSetKernelArgs, aclopKernelDesc* kernelDesc, const char* kernelId, uint32_t blockDim, const void* args, uint32_t argSize);
DEFFTYPE(aclError, aclopSetKernelWorkspaceSizes, aclopKernelDesc* kernelDesc, int numWorkspaces, size_t* workspaceSizes);
DEFFUNCV(aclError, aclopSetKernelWorkspaceSizes, aclopKernelDesc* kernelDesc, int numWorkspaces, size_t* workspaceSizes);
DEFFTYPE(aclError, aclopSetModelDir, const char* modelDir);
DEFFUNCV(aclError, aclopSetModelDir, const char* modelDir);
DEFFTYPE(aclError, aclopStartDumpArgs, uint32_t dumpType, const char* path);
DEFFUNCV(aclError, aclopStartDumpArgs, uint32_t dumpType, const char* path);
DEFFTYPE(aclError, aclopStopDumpArgs, uint32_t dumpType);
DEFFUNCV(aclError, aclopStopDumpArgs, uint32_t dumpType);
DEFFTYPE(aclError, aclopUnregisterCompileFunc, const char* opType);
DEFFUNCV(aclError, aclopUnregisterCompileFunc, const char* opType);
DEFFTYPE(aclError, aclopUpdateParams, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* attr);
DEFFUNCV(aclError, aclopUpdateParams, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* attr);
DEFFTYPE(aclprofConfig*, aclprofCreateConfig, uint32_t* deviceIdList, uint32_t deviceNums, aclprofAicoreMetrics aicoreMetrics, aclprofAicoreEvents* aicoreEvents, uint64_t dataTypeConfig);
DEFFUNCV(aclprofConfig*, aclprofCreateConfig, uint32_t* deviceIdList, uint32_t deviceNums, aclprofAicoreMetrics aicoreMetrics, aclprofAicoreEvents* aicoreEvents, uint64_t dataTypeConfig);
DEFFTYPE(void*, aclprofCreateStamp, void);
DEFFUNCV(void*, aclprofCreateStamp, void);
DEFFTYPE(aclprofStepInfo*, aclprofCreateStepInfo, void);
DEFFUNCV(aclprofStepInfo*, aclprofCreateStepInfo, void);
DEFFTYPE(aclprofSubscribeConfig*, aclprofCreateSubscribeConfig, int8_t timeInfoSwitch, aclprofAicoreMetrics aicoreMetrics, void* fd);
DEFFUNCV(aclprofSubscribeConfig*, aclprofCreateSubscribeConfig, int8_t timeInfoSwitch, aclprofAicoreMetrics aicoreMetrics, void* fd);
DEFFTYPE(aclError, aclprofDestroyConfig, const aclprofConfig* profilerConfig);
DEFFUNCV(aclError, aclprofDestroyConfig, const aclprofConfig* profilerConfig);
DEFFTYPE(void, aclprofDestroyStamp, void* stamp);
DEFFUNCV(void, aclprofDestroyStamp, void* stamp);
DEFFTYPE(void, aclprofDestroyStepInfo, aclprofStepInfo* stepinfo);
DEFFUNCV(void, aclprofDestroyStepInfo, aclprofStepInfo* stepinfo);
DEFFTYPE(aclError, aclprofDestroySubscribeConfig, const aclprofSubscribeConfig* profSubscribeConfig);
DEFFUNCV(aclError, aclprofDestroySubscribeConfig, const aclprofSubscribeConfig* profSubscribeConfig);
DEFFTYPE(aclError, aclprofFinalize, );
DEFFUNCV(aclError, aclprofFinalize, );
aclprofGetGraphId cnt == 0
DEFFTYPE(size_t, aclprofGetModelId, const void* opInfo, size_t opInfoLen, uint32_t index);
DEFFUNCV(size_t, aclprofGetModelId, const void* opInfo, size_t opInfoLen, uint32_t index);
aclprofGetOpAttriValue cnt == 0
DEFFTYPE(aclError, aclprofGetOpDescSize, size_t* opDescSize);
DEFFUNCV(aclError, aclprofGetOpDescSize, size_t* opDescSize);
DEFFTYPE(uint64_t, aclprofGetOpDuration, const void* opInfo, size_t opInfoLen, uint32_t index);
DEFFUNCV(uint64_t, aclprofGetOpDuration, const void* opInfo, size_t opInfoLen, uint32_t index);
DEFFTYPE(uint64_t, aclprofGetOpEnd, const void* opInfo, size_t opInfoLen, uint32_t index);
DEFFUNCV(uint64_t, aclprofGetOpEnd, const void* opInfo, size_t opInfoLen, uint32_t index);
aclprofGetOpFlag cnt == 0
DEFFTYPE(aclError, aclprofGetOpName, const void* opInfo, size_t opInfoLen, uint32_t index, char* opName, size_t opNameLen);
DEFFUNCV(aclError, aclprofGetOpName, const void* opInfo, size_t opInfoLen, uint32_t index, char* opName, size_t opNameLen);
DEFFTYPE(aclError, aclprofGetOpNameLen, const void* opInfo, size_t opInfoLen, uint32_t index, size_t* opNameLen);
DEFFUNCV(aclError, aclprofGetOpNameLen, const void* opInfo, size_t opInfoLen, uint32_t index, size_t* opNameLen);
DEFFTYPE(aclError, aclprofGetOpNum, const void* opInfo, size_t opInfoLen, uint32_t* opNumber);
DEFFUNCV(aclError, aclprofGetOpNum, const void* opInfo, size_t opInfoLen, uint32_t* opNumber);
DEFFTYPE(uint64_t, aclprofGetOpStart, const void* opInfo, size_t opInfoLen, uint32_t index);
DEFFUNCV(uint64_t, aclprofGetOpStart, const void* opInfo, size_t opInfoLen, uint32_t index);
DEFFTYPE(aclError, aclprofGetOpType, const void* opInfo, size_t opInfoLen, uint32_t index, char* opType, size_t opTypeLen);
DEFFUNCV(aclError, aclprofGetOpType, const void* opInfo, size_t opInfoLen, uint32_t index, char* opType, size_t opTypeLen);
DEFFTYPE(aclError, aclprofGetOpTypeLen, const void* opInfo, size_t opInfoLen, uint32_t index, size_t* opTypeLen);
DEFFUNCV(aclError, aclprofGetOpTypeLen, const void* opInfo, size_t opInfoLen, uint32_t index, size_t* opTypeLen);
DEFFTYPE(aclError, aclprofGetStepTimestamp, aclprofStepInfo* stepInfo, aclprofStepTag tag, aclrtStream stream);
DEFFUNCV(aclError, aclprofGetStepTimestamp, aclprofStepInfo* stepInfo, aclprofStepTag tag, aclrtStream stream);
aclprofGetSupportedFeatures cnt == 0
DEFFTYPE(aclError, aclprofInit, const char* profilerResultPath, size_t length);
DEFFUNCV(aclError, aclprofInit, const char* profilerResultPath, size_t length);
DEFFTYPE(aclError, aclprofMark, void* stamp);
DEFFUNCV(aclError, aclprofMark, void* stamp);
DEFFTYPE(aclError, aclprofMarkEx, const char* msg, size_t msgLen, aclrtStream stream);
DEFFUNCV(aclError, aclprofMarkEx, const char* msg, size_t msgLen, aclrtStream stream);
DEFFTYPE(aclError, aclprofModelSubscribe, uint32_t modelId, const aclprofSubscribeConfig* profSubscribeConfig);
DEFFUNCV(aclError, aclprofModelSubscribe, uint32_t modelId, const aclprofSubscribeConfig* profSubscribeConfig);
DEFFTYPE(aclError, aclprofModelUnSubscribe, uint32_t modelId);
DEFFUNCV(aclError, aclprofModelUnSubscribe, uint32_t modelId);
DEFFTYPE(aclError, aclprofPop, );
DEFFUNCV(aclError, aclprofPop, );
DEFFTYPE(aclError, aclprofPush, void* stamp);
DEFFUNCV(aclError, aclprofPush, void* stamp);
DEFFTYPE(aclError, aclprofRangeStart, void* stamp, uint32_t* rangeId);
DEFFUNCV(aclError, aclprofRangeStart, void* stamp, uint32_t* rangeId);
DEFFTYPE(aclError, aclprofRangeStop, uint32_t rangeId);
DEFFUNCV(aclError, aclprofRangeStop, uint32_t rangeId);
aclprofSetCategoryName cnt == 0
DEFFTYPE(aclError, aclprofSetConfig, aclprofConfigType configType, const char* config, size_t configLength);
DEFFUNCV(aclError, aclprofSetConfig, aclprofConfigType configType, const char* config, size_t configLength);
aclprofSetStampCategory cnt == 0
aclprofSetStampPayload cnt == 0
DEFFTYPE(aclError, aclprofSetStampTraceMessage, void* stamp, const char* msg, uint32_t msgLen);
DEFFUNCV(aclError, aclprofSetStampTraceMessage, void* stamp, const char* msg, uint32_t msgLen);
DEFFTYPE(aclError, aclprofStart, const aclprofConfig* profilerConfig);
DEFFUNCV(aclError, aclprofStart, const aclprofConfig* profilerConfig);
DEFFTYPE(aclError, aclprofStop, const aclprofConfig* profilerConfig);
DEFFUNCV(aclError, aclprofStop, const aclprofConfig* profilerConfig);
DEFFTYPE(aclrtAllocatorDesc, aclrtAllocatorCreateDesc, );
DEFFUNCV(aclrtAllocatorDesc, aclrtAllocatorCreateDesc, );
DEFFTYPE(aclError, aclrtAllocatorDestroyDesc, aclrtAllocatorDesc allocatorDesc);
DEFFUNCV(aclError, aclrtAllocatorDestroyDesc, aclrtAllocatorDesc allocatorDesc);
DEFFTYPE(aclError, aclrtAllocatorRegister, aclrtStream stream, aclrtAllocatorDesc allocatorDesc);
DEFFUNCV(aclError, aclrtAllocatorRegister, aclrtStream stream, aclrtAllocatorDesc allocatorDesc);
DEFFTYPE(aclError, aclrtAllocatorSetAllocAdviseFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorAllocAdviseFunc func);
DEFFUNCV(aclError, aclrtAllocatorSetAllocAdviseFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorAllocAdviseFunc func);
DEFFTYPE(aclError, aclrtAllocatorSetAllocFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorAllocFunc func);
DEFFUNCV(aclError, aclrtAllocatorSetAllocFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorAllocFunc func);
DEFFTYPE(aclError, aclrtAllocatorSetFreeFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorFreeFunc func);
DEFFUNCV(aclError, aclrtAllocatorSetFreeFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorFreeFunc func);
DEFFTYPE(aclError, aclrtAllocatorSetGetAddrFromBlockFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorGetAddrFromBlockFunc func);
DEFFUNCV(aclError, aclrtAllocatorSetGetAddrFromBlockFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorGetAddrFromBlockFunc func);
DEFFTYPE(aclError, aclrtAllocatorSetObjToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocator allocator);
DEFFUNCV(aclError, aclrtAllocatorSetObjToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocator allocator);
DEFFTYPE(aclError, aclrtAllocatorUnregister, aclrtStream stream);
DEFFUNCV(aclError, aclrtAllocatorUnregister, aclrtStream stream);
DEFFTYPE(aclError, aclrtBinaryGetFunction, const aclrtBinHandle binHandle, const char* kernelName, aclrtFuncHandle* funcHandle);
DEFFUNCV(aclError, aclrtBinaryGetFunction, const aclrtBinHandle binHandle, const char* kernelName, aclrtFuncHandle* funcHandle);
DEFFTYPE(aclError, aclrtBinaryLoad, const aclrtBinary binary, aclrtBinHandle* binHandle);
DEFFUNCV(aclError, aclrtBinaryLoad, const aclrtBinary binary, aclrtBinHandle* binHandle);
DEFFTYPE(aclError, aclrtBinaryUnLoad, aclrtBinHandle binHandle);
DEFFUNCV(aclError, aclrtBinaryUnLoad, aclrtBinHandle binHandle);
DEFFTYPE(aclrtBinary, aclrtCreateBinary, const void* data, size_t dataLen);
DEFFUNCV(aclrtBinary, aclrtCreateBinary, const void* data, size_t dataLen);
DEFFTYPE(aclError, aclrtCreateContext, aclrtContext* context, int32_t deviceId);
DEFFUNCV(aclError, aclrtCreateContext, aclrtContext* context, int32_t deviceId);
DEFFTYPE(aclError, aclrtCreateEvent, aclrtEvent* event);
DEFFUNCV(aclError, aclrtCreateEvent, aclrtEvent* event);
DEFFTYPE(aclError, aclrtCreateEventExWithFlag, aclrtEvent* event, uint32_t flag);
DEFFUNCV(aclError, aclrtCreateEventExWithFlag, aclrtEvent* event, uint32_t flag);
DEFFTYPE(aclError, aclrtCreateEventWithFlag, aclrtEvent* event, uint32_t flag);
DEFFUNCV(aclError, aclrtCreateEventWithFlag, aclrtEvent* event, uint32_t flag);
DEFFTYPE(aclrtGroupInfo*, aclrtCreateGroupInfo, );
DEFFUNCV(aclrtGroupInfo*, aclrtCreateGroupInfo, );
DEFFTYPE(aclError, aclrtCreateStream, aclrtStream* stream);
DEFFUNCV(aclError, aclrtCreateStream, aclrtStream* stream);
DEFFTYPE(aclError, aclrtCreateStreamWithConfig, aclrtStream* stream, uint32_t priority, uint32_t flag);
DEFFUNCV(aclError, aclrtCreateStreamWithConfig, aclrtStream* stream, uint32_t priority, uint32_t flag);
DEFFTYPE(aclError, aclrtCtxGetSysParamOpt, aclSysParamOpt opt, int64_t* value);
DEFFUNCV(aclError, aclrtCtxGetSysParamOpt, aclSysParamOpt opt, int64_t* value);
DEFFTYPE(aclError, aclrtCtxSetSysParamOpt, aclSysParamOpt opt, int64_t value);
DEFFUNCV(aclError, aclrtCtxSetSysParamOpt, aclSysParamOpt opt, int64_t value);
DEFFTYPE(aclError, aclrtDestroyBinary, aclrtBinary binary);
DEFFUNCV(aclError, aclrtDestroyBinary, aclrtBinary binary);
DEFFTYPE(aclError, aclrtDestroyContext, aclrtContext context);
DEFFUNCV(aclError, aclrtDestroyContext, aclrtContext context);
DEFFTYPE(aclError, aclrtDestroyEvent, aclrtEvent event);
DEFFUNCV(aclError, aclrtDestroyEvent, aclrtEvent event);
DEFFTYPE(aclError, aclrtDestroyGroupInfo, aclrtGroupInfo* groupInfo);
DEFFUNCV(aclError, aclrtDestroyGroupInfo, aclrtGroupInfo* groupInfo);
DEFFTYPE(aclError, aclrtDestroyStream, aclrtStream stream);
DEFFUNCV(aclError, aclrtDestroyStream, aclrtStream stream);
DEFFTYPE(aclError, aclrtDestroyStreamForce, aclrtStream stream);
DEFFUNCV(aclError, aclrtDestroyStreamForce, aclrtStream stream);
DEFFTYPE(aclError, aclrtDeviceCanAccessPeer, int32_t* canAccessPeer, int32_t deviceId, int32_t peerDeviceId);
DEFFUNCV(aclError, aclrtDeviceCanAccessPeer, int32_t* canAccessPeer, int32_t deviceId, int32_t peerDeviceId);
DEFFTYPE(aclError, aclrtDeviceDisablePeerAccess, int32_t peerDeviceId);
DEFFUNCV(aclError, aclrtDeviceDisablePeerAccess, int32_t peerDeviceId);
DEFFTYPE(aclError, aclrtDeviceEnablePeerAccess, int32_t peerDeviceId, uint32_t flags);
DEFFUNCV(aclError, aclrtDeviceEnablePeerAccess, int32_t peerDeviceId, uint32_t flags);
DEFFTYPE(aclError, aclrtDeviceGetBareTgid, int32_t* pid);
DEFFUNCV(aclError, aclrtDeviceGetBareTgid, int32_t* pid);
DEFFTYPE(aclError, aclrtEventElapsedTime, float* ms, aclrtEvent startEvent, aclrtEvent endEvent);
DEFFUNCV(aclError, aclrtEventElapsedTime, float* ms, aclrtEvent startEvent, aclrtEvent endEvent);
DEFFTYPE(aclError, aclrtFree, void* devPtr);
DEFFUNCV(aclError, aclrtFree, void* devPtr);
DEFFTYPE(aclError, aclrtFreeHost, void* hostPtr);
DEFFUNCV(aclError, aclrtFreeHost, void* hostPtr);
DEFFTYPE(aclError, aclrtFreePhysical, aclrtDrvMemHandle handle);
DEFFUNCV(aclError, aclrtFreePhysical, aclrtDrvMemHandle handle);
DEFFTYPE(aclError, aclrtGetAllGroupInfo, aclrtGroupInfo* groupInfo);
DEFFUNCV(aclError, aclrtGetAllGroupInfo, aclrtGroupInfo* groupInfo);
DEFFTYPE(aclError, aclrtGetCurrentContext, aclrtContext* context);
DEFFUNCV(aclError, aclrtGetCurrentContext, aclrtContext* context);
DEFFTYPE(aclError, aclrtGetDevice, int32_t* deviceId);
DEFFUNCV(aclError, aclrtGetDevice, int32_t* deviceId);
DEFFTYPE(aclError, aclrtGetDeviceCount, uint32_t* count);
DEFFUNCV(aclError, aclrtGetDeviceCount, uint32_t* count);
DEFFTYPE(uint32_t, aclrtGetDeviceIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFUNCV(uint32_t, aclrtGetDeviceIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFTYPE(aclError, aclrtGetDeviceSatMode, aclrtFloatOverflowMode* mode);
DEFFUNCV(aclError, aclrtGetDeviceSatMode, aclrtFloatOverflowMode* mode);
DEFFTYPE(aclError, aclrtGetDeviceUtilizationRate, int32_t deviceId, aclrtUtilizationInfo* utilizationInfo);
DEFFUNCV(aclError, aclrtGetDeviceUtilizationRate, int32_t deviceId, aclrtUtilizationInfo* utilizationInfo);
DEFFTYPE(uint32_t, aclrtGetErrorCodeFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFUNCV(uint32_t, aclrtGetErrorCodeFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFTYPE(aclError, aclrtGetGroupCount, uint32_t* count);
DEFFUNCV(aclError, aclrtGetGroupCount, uint32_t* count);
DEFFTYPE(aclError, aclrtGetGroupInfoDetail, const aclrtGroupInfo* groupInfo, int32_t groupIndex, aclrtGroupAttr attr, void* attrValue, size_t valueLen, size_t* paramRetSize);
DEFFUNCV(aclError, aclrtGetGroupInfoDetail, const aclrtGroupInfo* groupInfo, int32_t groupIndex, aclrtGroupAttr attr, void* attrValue, size_t valueLen, size_t* paramRetSize);
DEFFTYPE(aclError, aclrtGetMemInfo, aclrtMemAttr attr, size_t* free, size_t* total);
DEFFUNCV(aclError, aclrtGetMemInfo, aclrtMemAttr attr, size_t* free, size_t* total);
DEFFTYPE(aclError, aclrtGetOverflowStatus, void* outputAddr, size_t outputSize, aclrtStream stream);
DEFFUNCV(aclError, aclrtGetOverflowStatus, void* outputAddr, size_t outputSize, aclrtStream stream);
DEFFTYPE(aclError, aclrtGetRunMode, aclrtRunMode* runMode);
DEFFUNCV(aclError, aclrtGetRunMode, aclrtRunMode* runMode);
DEFFTYPE(const char*, aclrtGetSocName, );
DEFFUNCV(const char*, aclrtGetSocName, );
DEFFTYPE(uint32_t, aclrtGetStreamIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFUNCV(uint32_t, aclrtGetStreamIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFTYPE(aclError, aclrtGetStreamOverflowSwitch, aclrtStream stream, uint32_t* flag);
DEFFUNCV(aclError, aclrtGetStreamOverflowSwitch, aclrtStream stream, uint32_t* flag);
DEFFTYPE(uint32_t, aclrtGetTaskIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFUNCV(uint32_t, aclrtGetTaskIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFTYPE(uint32_t, aclrtGetThreadIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFUNCV(uint32_t, aclrtGetThreadIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFTYPE(aclError, aclrtGetVersion, int32_t* majorVersion, int32_t* minorVersion, int32_t* patchVersion);
DEFFUNCV(aclError, aclrtGetVersion, int32_t* majorVersion, int32_t* minorVersion, int32_t* patchVersion);
DEFFTYPE(aclError, aclrtLaunchCallback, aclrtCallback fn, void* userData, aclrtCallbackBlockType blockType, aclrtStream stream);
DEFFUNCV(aclError, aclrtLaunchCallback, aclrtCallback fn, void* userData, aclrtCallbackBlockType blockType, aclrtStream stream);
DEFFTYPE(aclError, aclrtLaunchKernel, aclrtFuncHandle funcHandle, uint32_t blockDim, const void* argsData, size_t argsSize, aclrtStream stream);
DEFFUNCV(aclError, aclrtLaunchKernel, aclrtFuncHandle funcHandle, uint32_t blockDim, const void* argsData, size_t argsSize, aclrtStream stream);
DEFFTYPE(aclError, aclrtMalloc, void** devPtr, size_t size, aclrtMemMallocPolicy policy);
DEFFUNCV(aclError, aclrtMalloc, void** devPtr, size_t size, aclrtMemMallocPolicy policy);
DEFFTYPE(aclError, aclrtMallocAlign32, void** devPtr, size_t size, aclrtMemMallocPolicy policy);
DEFFUNCV(aclError, aclrtMallocAlign32, void** devPtr, size_t size, aclrtMemMallocPolicy policy);
DEFFTYPE(aclError, aclrtMallocCached, void** devPtr, size_t size, aclrtMemMallocPolicy policy);
DEFFUNCV(aclError, aclrtMallocCached, void** devPtr, size_t size, aclrtMemMallocPolicy policy);
DEFFTYPE(aclError, aclrtMallocHost, void** hostPtr, size_t size);
DEFFUNCV(aclError, aclrtMallocHost, void** hostPtr, size_t size);
DEFFTYPE(aclError, aclrtMallocPhysical, aclrtDrvMemHandle* handle, size_t size, const aclrtPhysicalMemProp* prop, uint64_t flags);
DEFFUNCV(aclError, aclrtMallocPhysical, aclrtDrvMemHandle* handle, size_t size, const aclrtPhysicalMemProp* prop, uint64_t flags);
DEFFTYPE(aclError, aclrtMapMem, void* virPtr, size_t size, size_t offset, aclrtDrvMemHandle handle, uint64_t flags);
DEFFUNCV(aclError, aclrtMapMem, void* virPtr, size_t size, size_t offset, aclrtDrvMemHandle handle, uint64_t flags);
DEFFTYPE(aclError, aclrtMemExportToShareableHandle, aclrtDrvMemHandle handle, aclrtMemHandleType handleType, uint64_t flags, uint64_t* shareableHandle);
DEFFUNCV(aclError, aclrtMemExportToShareableHandle, aclrtDrvMemHandle handle, aclrtMemHandleType handleType, uint64_t flags, uint64_t* shareableHandle);
DEFFTYPE(aclError, aclrtMemFlush, void* devPtr, size_t size);
DEFFUNCV(aclError, aclrtMemFlush, void* devPtr, size_t size);
DEFFTYPE(aclError, aclrtMemGetAllocationGranularity, aclrtPhysicalMemProp* prop, aclrtMemGranularityOptions option, size_t* granularity);
DEFFUNCV(aclError, aclrtMemGetAllocationGranularity, aclrtPhysicalMemProp* prop, aclrtMemGranularityOptions option, size_t* granularity);
DEFFTYPE(aclError, aclrtMemImportFromShareableHandle, uint64_t shareableHandle, int32_t deviceId, aclrtDrvMemHandle* handle);
DEFFUNCV(aclError, aclrtMemImportFromShareableHandle, uint64_t shareableHandle, int32_t deviceId, aclrtDrvMemHandle* handle);
DEFFTYPE(aclError, aclrtMemInvalidate, void* devPtr, size_t size);
DEFFUNCV(aclError, aclrtMemInvalidate, void* devPtr, size_t size);
DEFFTYPE(aclError, aclrtMemSetPidToShareableHandle, uint64_t shareableHandle, int32_t* pid, size_t pidNum);
DEFFUNCV(aclError, aclrtMemSetPidToShareableHandle, uint64_t shareableHandle, int32_t* pid, size_t pidNum);
DEFFTYPE(aclError, aclrtMemcpy, void* dst, size_t destMax, const void* src, size_t count, aclrtMemcpyKind kind);
DEFFUNCV(aclError, aclrtMemcpy, void* dst, size_t destMax, const void* src, size_t count, aclrtMemcpyKind kind);
DEFFTYPE(aclError, aclrtMemcpy2d, void* dst, size_t dpitch, const void* src, size_t spitch, size_t width, size_t height, aclrtMemcpyKind kind);
DEFFUNCV(aclError, aclrtMemcpy2d, void* dst, size_t dpitch, const void* src, size_t spitch, size_t width, size_t height, aclrtMemcpyKind kind);
DEFFTYPE(aclError, aclrtMemcpy2dAsync, void* dst, size_t dpitch, const void* src, size_t spitch, size_t width, size_t height, aclrtMemcpyKind kind, aclrtStream stream);
DEFFUNCV(aclError, aclrtMemcpy2dAsync, void* dst, size_t dpitch, const void* src, size_t spitch, size_t width, size_t height, aclrtMemcpyKind kind, aclrtStream stream);
DEFFTYPE(aclError, aclrtMemcpyAsync, void* dst, size_t destMax, const void* src, size_t count, aclrtMemcpyKind kind, aclrtStream stream);
DEFFUNCV(aclError, aclrtMemcpyAsync, void* dst, size_t destMax, const void* src, size_t count, aclrtMemcpyKind kind, aclrtStream stream);
DEFFTYPE(aclError, aclrtMemset, void* devPtr, size_t maxCount, int32_t value, size_t count);
DEFFUNCV(aclError, aclrtMemset, void* devPtr, size_t maxCount, int32_t value, size_t count);
DEFFTYPE(aclError, aclrtMemsetAsync, void* devPtr, size_t maxCount, int32_t value, size_t count, aclrtStream stream);
DEFFUNCV(aclError, aclrtMemsetAsync, void* devPtr, size_t maxCount, int32_t value, size_t count, aclrtStream stream);
DEFFTYPE(aclError, aclrtProcessReport, int32_t timeout);
DEFFUNCV(aclError, aclrtProcessReport, int32_t timeout);
DEFFTYPE(aclError, aclrtQueryDeviceStatus, int32_t deviceId, aclrtDeviceStatus* deviceStatus);
DEFFUNCV(aclError, aclrtQueryDeviceStatus, int32_t deviceId, aclrtDeviceStatus* deviceStatus);
DEFFTYPE(aclError, aclrtQueryEvent, aclrtEvent event, aclrtEventStatus* status);
DEFFUNCV(aclError, aclrtQueryEvent, aclrtEvent event, aclrtEventStatus* status);
DEFFTYPE(aclError, aclrtQueryEventStatus, aclrtEvent event, aclrtEventRecordedStatus* status);
DEFFUNCV(aclError, aclrtQueryEventStatus, aclrtEvent event, aclrtEventRecordedStatus* status);
DEFFTYPE(aclError, aclrtQueryEventWaitStatus, aclrtEvent event, aclrtEventWaitStatus* status);
DEFFUNCV(aclError, aclrtQueryEventWaitStatus, aclrtEvent event, aclrtEventWaitStatus* status);
DEFFTYPE(aclError, aclrtRecordEvent, aclrtEvent event, aclrtStream stream);
DEFFUNCV(aclError, aclrtRecordEvent, aclrtEvent event, aclrtStream stream);
DEFFTYPE(aclError, aclrtReleaseMemAddress, void* virPtr);
DEFFUNCV(aclError, aclrtReleaseMemAddress, void* virPtr);
DEFFTYPE(aclError, aclrtReserveMemAddress, void** virPtr, size_t size, size_t alignment, void* expectPtr, uint64_t flags);
DEFFUNCV(aclError, aclrtReserveMemAddress, void** virPtr, size_t size, size_t alignment, void* expectPtr, uint64_t flags);
aclrtResetD- cnt == 0
DEFFTYPE(aclError, aclrtSetDevice, int32_t deviceId);
DEFFUNCV(aclError, aclrtSetDevice, int32_t deviceId);
DEFFTYPE(aclError, aclrtSetDeviceSatMode, aclrtFloatOverflowMode mode);
DEFFUNCV(aclError, aclrtSetDeviceSatMode, aclrtFloatOverflowMode mode);
aclrtSetDeviceWithoutTsdVXX cnt == 0
DEFFTYPE(aclError, aclrtSetExceptionInfoCallback, aclrtExceptionInfoCallback callback);
DEFFUNCV(aclError, aclrtSetExceptionInfoCallback, aclrtExceptionInfoCallback callback);
DEFFTYPE(aclError, aclrtSetGroup, int32_t groupId);
DEFFUNCV(aclError, aclrtSetGroup, int32_t groupId);
DEFFTYPE(aclError, aclrtSetOpExecuteTimeOut, uint32_t timeout);
DEFFUNCV(aclError, aclrtSetOpExecuteTimeOut, uint32_t timeout);
DEFFTYPE(aclError, aclrtSetOpWaitTimeout, uint32_t timeout);
DEFFUNCV(aclError, aclrtSetOpWaitTimeout, uint32_t timeout);
DEFFTYPE(aclError, aclrtSetStreamFailureMode, aclrtStream stream, uint64_t mode);
DEFFUNCV(aclError, aclrtSetStreamFailureMode, aclrtStream stream, uint64_t mode);
DEFFTYPE(aclError, aclrtSetStreamOverflowSwitch, aclrtStream stream, uint32_t flag);
DEFFUNCV(aclError, aclrtSetStreamOverflowSwitch, aclrtStream stream, uint32_t flag);
DEFFTYPE(aclError, aclrtSetTsDevice, aclrtTsId tsId);
DEFFUNCV(aclError, aclrtSetTsDevice, aclrtTsId tsId);
DEFFTYPE(aclError, aclrtStreamQuery, aclrtStream stream, aclrtStreamStatus* status);
DEFFUNCV(aclError, aclrtStreamQuery, aclrtStream stream, aclrtStreamStatus* status);
DEFFTYPE(aclError, aclrtStreamWaitEvent, aclrtStream stream, aclrtEvent event);
DEFFUNCV(aclError, aclrtStreamWaitEvent, aclrtStream stream, aclrtEvent event);
DEFFTYPE(aclError, aclrtSubscribeReport, uint64_t threadId, aclrtStream stream);
DEFFUNCV(aclError, aclrtSubscribeReport, uint64_t threadId, aclrtStream stream);
DEFFTYPE(aclError, aclrtSynchronizeDevice, void);
DEFFUNCV(aclError, aclrtSynchronizeDevice, void);
DEFFTYPE(aclError, aclrtSynchronizeEvent, aclrtEvent event);
DEFFUNCV(aclError, aclrtSynchronizeEvent, aclrtEvent event);
DEFFTYPE(aclError, aclrtSynchronizeEventWithTimeout, aclrtEvent event, int32_t timeout);
DEFFUNCV(aclError, aclrtSynchronizeEventWithTimeout, aclrtEvent event, int32_t timeout);
DEFFTYPE(aclError, aclrtSynchronizeStream, aclrtStream stream);
DEFFUNCV(aclError, aclrtSynchronizeStream, aclrtStream stream);
DEFFTYPE(aclError, aclrtSynchronizeStreamWithTimeout, aclrtStream stream, int32_t timeout);
DEFFUNCV(aclError, aclrtSynchronizeStreamWithTimeout, aclrtStream stream, int32_t timeout);
DEFFTYPE(aclError, aclrtUnSubscribeReport, uint64_t threadId, aclrtStream stream);
DEFFUNCV(aclError, aclrtUnSubscribeReport, uint64_t threadId, aclrtStream stream);
DEFFTYPE(aclError, aclrtUnmapMem, void* virPtr);
DEFFUNCV(aclError, aclrtUnmapMem, void* virPtr);
ACL_LDSYM(so_handle, aclAppLog);
ACL_LDSYM(so_handle, aclCreateDataBuffer);
ACL_LDSYM(so_handle, aclCreateGraphDumpOpt);
ACL_LDSYM(so_handle, aclCreateTensorDesc);
ACL_LDSYM(so_handle, aclDataTypeSize);
ACL_LDSYM(so_handle, aclDestroyDataBuffer);
ACL_LDSYM(so_handle, aclDestroyGraphDumpOpt);
ACL_LDSYM(so_handle, aclDestroyTensorDesc);
ACL_LDSYM(so_handle, aclFinalize);
ACL_LDSYM(so_handle, aclFloat16ToFloat);
ACL_LDSYM(so_handle, aclFloatToFloat16);
ACL_LDSYM(so_handle, aclGenGraphAndDumpForOp);
ACL_LDSYM(so_handle, aclGetCannAttribute);
ACL_LDSYM(so_handle, aclGetCannAttributeList);
ACL_LDSYM(so_handle, aclGetCompileopt);
ACL_LDSYM(so_handle, aclGetCompileoptSize);
ACL_LDSYM(so_handle, aclGetDataBufferAddr);
ACL_LDSYM(so_handle, aclGetDataBufferSize);
ACL_LDSYM(so_handle, aclGetDataBufferSizeV2);
ACL_LDSYM(so_handle, aclGetDeviceCapability);
ACL_LDSYM(so_handle, aclGetRecentErrMsg);
ACL_LDSYM(so_handle, aclGetTensorDescAddress);
ACL_LDSYM(so_handle, aclGetTensorDescByIndex);
ACL_LDSYM(so_handle, aclGetTensorDescDim);
ACL_LDSYM(so_handle, aclGetTensorDescDimRange);
ACL_LDSYM(so_handle, aclGetTensorDescDimV2);
ACL_LDSYM(so_handle, aclGetTensorDescElementCount);
ACL_LDSYM(so_handle, aclGetTensorDescFormat);
ACL_LDSYM(so_handle, aclGetTensorDescName);
ACL_LDSYM(so_handle, aclGetTensorDescNumDims);
ACL_LDSYM(so_handle, aclGetTensorDescSize);
ACL_LDSYM(so_handle, aclGetTensorDescType);
ACL_LDSYM(so_handle, aclInit);
ACL_LDSYM(so_handle, aclSetCompileopt);
ACL_LDSYM(so_handle, aclSetTensorConst);
ACL_LDSYM(so_handle, aclSetTensorDescName);
ACL_LDSYM(so_handle, aclSetTensorDynamicInput);
ACL_LDSYM(so_handle, aclSetTensorFormat);
ACL_LDSYM(so_handle, aclSetTensorOriginFormat);
ACL_LDSYM(so_handle, aclSetTensorOriginShape);
ACL_LDSYM(so_handle, aclSetTensorPlaceMent);
ACL_LDSYM(so_handle, aclSetTensorShape);
ACL_LDSYM(so_handle, aclSetTensorShapeRange);
ACL_LDSYM(so_handle, aclSetTensorStorageFormat);
ACL_LDSYM(so_handle, aclSetTensorStorageShape);
ACL_LDSYM(so_handle, aclSetTensorValueRange);
ACL_LDSYM(so_handle, aclTransTensorDescFormat);
ACL_LDSYM(so_handle, aclUpdateDataBuffer);
ACL_LDSYM(so_handle, aclmdlAddDatasetBuffer);
ACL_LDSYM(so_handle, aclmdlCreateAIPP);
ACL_LDSYM(so_handle, aclmdlCreateAndGetOpDesc);
ACL_LDSYM(so_handle, aclmdlCreateConfigHandle);
ACL_LDSYM(so_handle, aclmdlCreateDataset);
ACL_LDSYM(so_handle, aclmdlCreateDesc);
ACL_LDSYM(so_handle, aclmdlCreateExecConfigHandle);
ACL_LDSYM(so_handle, aclmdlDestroyAIPP);
ACL_LDSYM(so_handle, aclmdlDestroyConfigHandle);
ACL_LDSYM(so_handle, aclmdlDestroyDataset);
ACL_LDSYM(so_handle, aclmdlDestroyDesc);
ACL_LDSYM(so_handle, aclmdlDestroyExecConfigHandle);
ACL_LDSYM(so_handle, aclmdlExecute);
ACL_LDSYM(so_handle, aclmdlExecuteAsync);
ACL_LDSYM(so_handle, aclmdlExecuteV2);
ACL_LDSYM(so_handle, aclmdlFinalizeDump);
ACL_LDSYM(so_handle, aclmdlGetAippDataSize);
ACL_LDSYM(so_handle, aclmdlGetAippType);
ACL_LDSYM(so_handle, aclmdlGetCurOutputDims);
ACL_LDSYM(so_handle, aclmdlGetDatasetBuffer);
ACL_LDSYM(so_handle, aclmdlGetDatasetNumBuffers);
ACL_LDSYM(so_handle, aclmdlGetDatasetTensorDesc);
ACL_LDSYM(so_handle, aclmdlGetDesc);
ACL_LDSYM(so_handle, aclmdlGetDynamicBatch);
ACL_LDSYM(so_handle, aclmdlGetDynamicHW);
ACL_LDSYM(so_handle, aclmdlGetFirstAippInfo);
ACL_LDSYM(so_handle, aclmdlGetInputDataType);
ACL_LDSYM(so_handle, aclmdlGetInputDims);
ACL_LDSYM(so_handle, aclmdlGetInputDimsV2);
ACL_LDSYM(so_handle, aclmdlGetInputDynamicDims);
ACL_LDSYM(so_handle, aclmdlGetInputDynamicGearCount);
ACL_LDSYM(so_handle, aclmdlGetInputFormat);
ACL_LDSYM(so_handle, aclmdlGetInputIndexByName);
ACL_LDSYM(so_handle, aclmdlGetInputNameByIndex);
ACL_LDSYM(so_handle, aclmdlGetInputSizeByIndex);
ACL_LDSYM(so_handle, aclmdlGetNumInputs);
ACL_LDSYM(so_handle, aclmdlGetNumOutputs);
ACL_LDSYM(so_handle, aclmdlGetOpAttr);
ACL_LDSYM(so_handle, aclmdlGetOutputDataType);
ACL_LDSYM(so_handle, aclmdlGetOutputDims);
ACL_LDSYM(so_handle, aclmdlGetOutputFormat);
ACL_LDSYM(so_handle, aclmdlGetOutputIndexByName);
ACL_LDSYM(so_handle, aclmdlGetOutputNameByIndex);
ACL_LDSYM(so_handle, aclmdlGetOutputSizeByIndex);
ACL_LDSYM(so_handle, aclmdlGetTensorRealName);
ACL_LDSYM(so_handle, aclmdlInitDump);
ACL_LDSYM(so_handle, aclmdlLoadFromFile);
ACL_LDSYM(so_handle, aclmdlLoadFromFileWithMem);
ACL_LDSYM(so_handle, aclmdlLoadFromFileWithQ);
ACL_LDSYM(so_handle, aclmdlLoadFromMem);
ACL_LDSYM(so_handle, aclmdlLoadFromMemWithMem);
ACL_LDSYM(so_handle, aclmdlLoadFromMemWithQ);
ACL_LDSYM(so_handle, aclmdlLoadWithConfig);
ACL_LDSYM(so_handle, aclmdlQuerySize);
ACL_LDSYM(so_handle, aclmdlQuerySizeFromMem);
ACL_LDSYM(so_handle, aclmdlSetAIPPAxSwapSwitch);
ACL_LDSYM(so_handle, aclmdlSetAIPPByInputIndex);
ACL_LDSYM(so_handle, aclmdlSetAIPPCropParams);
ACL_LDSYM(so_handle, aclmdlSetAIPPCscParams);
ACL_LDSYM(so_handle, aclmdlSetAIPPDtcPixelMean);
ACL_LDSYM(so_handle, aclmdlSetAIPPDtcPixelMin);
ACL_LDSYM(so_handle, aclmdlSetAIPPInputFormat);
ACL_LDSYM(so_handle, aclmdlSetAIPPPaddingParams);
ACL_LDSYM(so_handle, aclmdlSetAIPPPixelVarReci);
ACL_LDSYM(so_handle, aclmdlSetAIPPRbuvSwapSwitch);
ACL_LDSYM(so_handle, aclmdlSetAIPPScfParams);
ACL_LDSYM(so_handle, aclmdlSetAIPPSrcImageSize);
ACL_LDSYM(so_handle, aclmdlSetConfigOpt);
ACL_LDSYM(so_handle, aclmdlSetDatasetTensorDesc);
ACL_LDSYM(so_handle, aclmdlSetDump);
ACL_LDSYM(so_handle, aclmdlSetDynamicBatchSize);
ACL_LDSYM(so_handle, aclmdlSetDynamicHWSize);
ACL_LDSYM(so_handle, aclmdlSetExecConfigOpt);
ACL_LDSYM(so_handle, aclmdlSetInputAIPP);
ACL_LDSYM(so_handle, aclmdlSetInputDynamicDims);
ACL_LDSYM(so_handle, aclmdlUnload);
ACL_LDSYM(so_handle, aclopCast);
ACL_LDSYM(so_handle, aclopCompile);
ACL_LDSYM(so_handle, aclopCompileAndExecute);
ACL_LDSYM(so_handle, aclopCompileAndExecuteV2);
ACL_LDSYM(so_handle, aclopCreateAttr);
ACL_LDSYM(so_handle, aclopCreateHandle);
ACL_LDSYM(so_handle, aclopCreateHandleForCast);
ACL_LDSYM(so_handle, aclopCreateKernel);
ACL_LDSYM(so_handle, aclopDestroyAttr);
ACL_LDSYM(so_handle, aclopDestroyHandle);
ACL_LDSYM(so_handle, aclopExecWithHandle);
ACL_LDSYM(so_handle, aclopExecute);
ACL_LDSYM(so_handle, aclopExecuteV2);
ACL_LDSYM(so_handle, aclopInferShape);
ACL_LDSYM(so_handle, aclopLoad);
ACL_LDSYM(so_handle, aclopRegisterCompileFunc);
ACL_LDSYM(so_handle, aclopSetAttrBool);
ACL_LDSYM(so_handle, aclopSetAttrDataType);
ACL_LDSYM(so_handle, aclopSetAttrFloat);
ACL_LDSYM(so_handle, aclopSetAttrInt);
ACL_LDSYM(so_handle, aclopSetAttrListBool);
ACL_LDSYM(so_handle, aclopSetAttrListDataType);
ACL_LDSYM(so_handle, aclopSetAttrListFloat);
ACL_LDSYM(so_handle, aclopSetAttrListInt);
ACL_LDSYM(so_handle, aclopSetAttrListListInt);
ACL_LDSYM(so_handle, aclopSetAttrListString);
ACL_LDSYM(so_handle, aclopSetAttrString);
ACL_LDSYM(so_handle, aclopSetCompileFlag);
ACL_LDSYM(so_handle, aclopSetKernelArgs);
ACL_LDSYM(so_handle, aclopSetKernelWorkspaceSizes);
ACL_LDSYM(so_handle, aclopSetModelDir);
ACL_LDSYM(so_handle, aclopStartDumpArgs);
ACL_LDSYM(so_handle, aclopStopDumpArgs);
ACL_LDSYM(so_handle, aclopUnregisterCompileFunc);
ACL_LDSYM(so_handle, aclopUpdateParams);
ACL_LDSYM(so_handle, aclprofCreateConfig);
ACL_LDSYM(so_handle, aclprofCreateStamp);
ACL_LDSYM(so_handle, aclprofCreateStepInfo);
ACL_LDSYM(so_handle, aclprofCreateSubscribeConfig);
ACL_LDSYM(so_handle, aclprofDestroyConfig);
ACL_LDSYM(so_handle, aclprofDestroyStamp);
ACL_LDSYM(so_handle, aclprofDestroyStepInfo);
ACL_LDSYM(so_handle, aclprofDestroySubscribeConfig);
ACL_LDSYM(so_handle, aclprofFinalize);
ACL_LDSYM(so_handle, aclprofGetModelId);
ACL_LDSYM(so_handle, aclprofGetOpDescSize);
ACL_LDSYM(so_handle, aclprofGetOpDuration);
ACL_LDSYM(so_handle, aclprofGetOpEnd);
ACL_LDSYM(so_handle, aclprofGetOpName);
ACL_LDSYM(so_handle, aclprofGetOpNameLen);
ACL_LDSYM(so_handle, aclprofGetOpNum);
ACL_LDSYM(so_handle, aclprofGetOpStart);
ACL_LDSYM(so_handle, aclprofGetOpType);
ACL_LDSYM(so_handle, aclprofGetOpTypeLen);
ACL_LDSYM(so_handle, aclprofGetStepTimestamp);
ACL_LDSYM(so_handle, aclprofInit);
ACL_LDSYM(so_handle, aclprofMark);
ACL_LDSYM(so_handle, aclprofMarkEx);
ACL_LDSYM(so_handle, aclprofModelSubscribe);
ACL_LDSYM(so_handle, aclprofModelUnSubscribe);
ACL_LDSYM(so_handle, aclprofPop);
ACL_LDSYM(so_handle, aclprofPush);
ACL_LDSYM(so_handle, aclprofRangeStart);
ACL_LDSYM(so_handle, aclprofRangeStop);
ACL_LDSYM(so_handle, aclprofSetConfig);
ACL_LDSYM(so_handle, aclprofSetStampTraceMessage);
ACL_LDSYM(so_handle, aclprofStart);
ACL_LDSYM(so_handle, aclprofStop);
ACL_LDSYM(so_handle, aclrtAllocatorCreateDesc);
ACL_LDSYM(so_handle, aclrtAllocatorDestroyDesc);
ACL_LDSYM(so_handle, aclrtAllocatorRegister);
ACL_LDSYM(so_handle, aclrtAllocatorSetAllocAdviseFuncToDesc);
ACL_LDSYM(so_handle, aclrtAllocatorSetAllocFuncToDesc);
ACL_LDSYM(so_handle, aclrtAllocatorSetFreeFuncToDesc);
ACL_LDSYM(so_handle, aclrtAllocatorSetGetAddrFromBlockFuncToDesc);
ACL_LDSYM(so_handle, aclrtAllocatorSetObjToDesc);
ACL_LDSYM(so_handle, aclrtAllocatorUnregister);
ACL_LDSYM(so_handle, aclrtBinaryGetFunction);
ACL_LDSYM(so_handle, aclrtBinaryLoad);
ACL_LDSYM(so_handle, aclrtBinaryUnLoad);
ACL_LDSYM(so_handle, aclrtCreateBinary);
ACL_LDSYM(so_handle, aclrtCreateContext);
ACL_LDSYM(so_handle, aclrtCreateEvent);
ACL_LDSYM(so_handle, aclrtCreateEventExWithFlag);
ACL_LDSYM(so_handle, aclrtCreateEventWithFlag);
ACL_LDSYM(so_handle, aclrtCreateGroupInfo);
ACL_LDSYM(so_handle, aclrtCreateStream);
ACL_LDSYM(so_handle, aclrtCreateStreamWithConfig);
ACL_LDSYM(so_handle, aclrtCtxGetSysParamOpt);
ACL_LDSYM(so_handle, aclrtCtxSetSysParamOpt);
ACL_LDSYM(so_handle, aclrtDestroyBinary);
ACL_LDSYM(so_handle, aclrtDestroyContext);
ACL_LDSYM(so_handle, aclrtDestroyEvent);
ACL_LDSYM(so_handle, aclrtDestroyGroupInfo);
ACL_LDSYM(so_handle, aclrtDestroyStream);
ACL_LDSYM(so_handle, aclrtDestroyStreamForce);
ACL_LDSYM(so_handle, aclrtDeviceCanAccessPeer);
ACL_LDSYM(so_handle, aclrtDeviceDisablePeerAccess);
ACL_LDSYM(so_handle, aclrtDeviceEnablePeerAccess);
ACL_LDSYM(so_handle, aclrtDeviceGetBareTgid);
ACL_LDSYM(so_handle, aclrtEventElapsedTime);
ACL_LDSYM(so_handle, aclrtFree);
ACL_LDSYM(so_handle, aclrtFreeHost);
ACL_LDSYM(so_handle, aclrtFreePhysical);
ACL_LDSYM(so_handle, aclrtGetAllGroupInfo);
ACL_LDSYM(so_handle, aclrtGetCurrentContext);
ACL_LDSYM(so_handle, aclrtGetDevice);
ACL_LDSYM(so_handle, aclrtGetDeviceCount);
ACL_LDSYM(so_handle, aclrtGetDeviceIdFromExceptionInfo);
ACL_LDSYM(so_handle, aclrtGetDeviceSatMode);
ACL_LDSYM(so_handle, aclrtGetDeviceUtilizationRate);
ACL_LDSYM(so_handle, aclrtGetErrorCodeFromExceptionInfo);
ACL_LDSYM(so_handle, aclrtGetGroupCount);
ACL_LDSYM(so_handle, aclrtGetGroupInfoDetail);
ACL_LDSYM(so_handle, aclrtGetMemInfo);
ACL_LDSYM(so_handle, aclrtGetOverflowStatus);
ACL_LDSYM(so_handle, aclrtGetRunMode);
ACL_LDSYM(so_handle, aclrtGetSocName);
ACL_LDSYM(so_handle, aclrtGetStreamIdFromExceptionInfo);
ACL_LDSYM(so_handle, aclrtGetStreamOverflowSwitch);
ACL_LDSYM(so_handle, aclrtGetTaskIdFromExceptionInfo);
ACL_LDSYM(so_handle, aclrtGetThreadIdFromExceptionInfo);
ACL_LDSYM(so_handle, aclrtGetVersion);
ACL_LDSYM(so_handle, aclrtLaunchCallback);
ACL_LDSYM(so_handle, aclrtLaunchKernel);
ACL_LDSYM(so_handle, aclrtMalloc);
ACL_LDSYM(so_handle, aclrtMallocAlign32);
ACL_LDSYM(so_handle, aclrtMallocCached);
ACL_LDSYM(so_handle, aclrtMallocHost);
ACL_LDSYM(so_handle, aclrtMallocPhysical);
ACL_LDSYM(so_handle, aclrtMapMem);
ACL_LDSYM(so_handle, aclrtMemExportToShareableHandle);
ACL_LDSYM(so_handle, aclrtMemFlush);
ACL_LDSYM(so_handle, aclrtMemGetAllocationGranularity);
ACL_LDSYM(so_handle, aclrtMemImportFromShareableHandle);
ACL_LDSYM(so_handle, aclrtMemInvalidate);
ACL_LDSYM(so_handle, aclrtMemSetPidToShareableHandle);
ACL_LDSYM(so_handle, aclrtMemcpy);
ACL_LDSYM(so_handle, aclrtMemcpy2d);
ACL_LDSYM(so_handle, aclrtMemcpy2dAsync);
ACL_LDSYM(so_handle, aclrtMemcpyAsync);
ACL_LDSYM(so_handle, aclrtMemset);
ACL_LDSYM(so_handle, aclrtMemsetAsync);
ACL_LDSYM(so_handle, aclrtProcessReport);
ACL_LDSYM(so_handle, aclrtQueryDeviceStatus);
ACL_LDSYM(so_handle, aclrtQueryEvent);
ACL_LDSYM(so_handle, aclrtQueryEventStatus);
ACL_LDSYM(so_handle, aclrtQueryEventWaitStatus);
ACL_LDSYM(so_handle, aclrtRecordEvent);
ACL_LDSYM(so_handle, aclrtReleaseMemAddress);
ACL_LDSYM(so_handle, aclrtReserveMemAddress);
ACL_LDSYM(so_handle, aclrtSetDevice);
ACL_LDSYM(so_handle, aclrtSetDeviceSatMode);
ACL_LDSYM(so_handle, aclrtSetExceptionInfoCallback);
ACL_LDSYM(so_handle, aclrtSetGroup);
ACL_LDSYM(so_handle, aclrtSetOpExecuteTimeOut);
ACL_LDSYM(so_handle, aclrtSetOpWaitTimeout);
ACL_LDSYM(so_handle, aclrtSetStreamFailureMode);
ACL_LDSYM(so_handle, aclrtSetStreamOverflowSwitch);
ACL_LDSYM(so_handle, aclrtSetTsDevice);
ACL_LDSYM(so_handle, aclrtStreamQuery);
ACL_LDSYM(so_handle, aclrtStreamWaitEvent);
ACL_LDSYM(so_handle, aclrtSubscribeReport);
ACL_LDSYM(so_handle, aclrtSynchronizeDevice);
ACL_LDSYM(so_handle, aclrtSynchronizeEvent);
ACL_LDSYM(so_handle, aclrtSynchronizeEventWithTimeout);
ACL_LDSYM(so_handle, aclrtSynchronizeStream);
ACL_LDSYM(so_handle, aclrtSynchronizeStreamWithTimeout);
ACL_LDSYM(so_handle, aclrtUnSubscribeReport);
ACL_LDSYM(so_handle, aclrtUnmapMem);
void aclAppLog(aclLogLevel logLevel, const char* func, const char* file, uint32_t line, const char* fmt, ...){
    BEGIN_FUNC_HOOK(aclAppLog);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclAppLog, logLevel, , , , , );
    #else
        CALL_FUNC_WITHOUT_RETURN(so_aclAppLog,logLevel, , , , , );
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclDataBuffer* aclCreateDataBuffer(void* data, size_t size){
    BEGIN_FUNC_HOOK(aclCreateDataBuffer);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclCreateDataBuffer, data, );
    #else
        DEFINE_RETURN_VARIBLE(aclDataBuffer*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclCreateDataBuffer,data, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclGraphDumpOption* aclCreateGraphDumpOpt(){
    BEGIN_FUNC_HOOK(aclCreateGraphDumpOpt);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclCreateGraphDumpOpt);
    #else
        DEFINE_RETURN_VARIBLE(aclGraphDumpOption*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclCreateGraphDumpOpt,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclTensorDesc* aclCreateTensorDesc(aclDataType dataType, int numDims, const int64_t* dims, aclFormat format){
    BEGIN_FUNC_HOOK(aclCreateTensorDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclCreateTensorDesc, dataType, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclTensorDesc*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclCreateTensorDesc,dataType, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclDataTypeSize(aclDataType dataType){
    BEGIN_FUNC_HOOK(aclDataTypeSize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclDataTypeSize, dataType);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclDataTypeSize,dataType);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclDestroyDataBuffer(const aclDataBuffer* dataBuffer){
    BEGIN_FUNC_HOOK(aclDestroyDataBuffer);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclDestroyDataBuffer, dataBuffer);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclDestroyDataBuffer,dataBuffer);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclDestroyGraphDumpOpt(const aclGraphDumpOption* graphDumpOpt){
    BEGIN_FUNC_HOOK(aclDestroyGraphDumpOpt);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclDestroyGraphDumpOpt, graphDumpOpt);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclDestroyGraphDumpOpt,graphDumpOpt);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
void aclDestroyTensorDesc(const aclTensorDesc* desc){
    BEGIN_FUNC_HOOK(aclDestroyTensorDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclDestroyTensorDesc, desc);
    #else
        CALL_FUNC_WITHOUT_RETURN(so_aclDestroyTensorDesc,desc);
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclFinalize(){
    BEGIN_FUNC_HOOK(aclFinalize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclFinalize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclFinalize,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
float aclFloat16ToFloat(aclFloat16 value){
    BEGIN_FUNC_HOOK(aclFloat16ToFloat);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclFloat16ToFloat, value);
    #else
        DEFINE_RETURN_VARIBLE(float, result);
        CALL_FUNC_WITH_RETURN(result,so_aclFloat16ToFloat,value);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclFloat16 aclFloatToFloat16(float value){
    BEGIN_FUNC_HOOK(aclFloatToFloat16);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclFloatToFloat16, value);
    #else
        DEFINE_RETURN_VARIBLE(aclFloat16, result);
        CALL_FUNC_WITH_RETURN(result,so_aclFloatToFloat16,value);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclGenGraphAndDumpForOp(const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclopEngineType engineType, const char* graphDumpPath, const aclGraphDumpOption* graphDumpOpt){
    BEGIN_FUNC_HOOK(aclGenGraphAndDumpForOp);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGenGraphAndDumpForOp, opType, , , , , , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGenGraphAndDumpForOp,opType, , , , , , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclGetCannAttribute(aclCannAttr cannAttr, int32_t* value){
    BEGIN_FUNC_HOOK(aclGetCannAttribute);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetCannAttribute, cannAttr, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetCannAttribute,cannAttr, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclGetCannAttributeList(const aclCannAttr** cannAttrList, size_t* num){
    BEGIN_FUNC_HOOK(aclGetCannAttributeList);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetCannAttributeList, cannAttrList, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetCannAttributeList,cannAttrList, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclGetCompileopt(aclCompileOpt opt, char* value, size_t length){
    BEGIN_FUNC_HOOK(aclGetCompileopt);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetCompileopt, opt, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetCompileopt,opt, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclGetCompileoptSize(aclCompileOpt opt){
    BEGIN_FUNC_HOOK(aclGetCompileoptSize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetCompileoptSize, opt);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetCompileoptSize,opt);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
void* aclGetDataBufferAddr(const aclDataBuffer* dataBuffer){
    BEGIN_FUNC_HOOK(aclGetDataBufferAddr);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetDataBufferAddr, dataBuffer);
    #else
        DEFINE_RETURN_VARIBLE(void*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetDataBufferAddr,dataBuffer);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
uint32_t aclGetDataBufferSize(const aclDataBuffer* dataBuffer){
    BEGIN_FUNC_HOOK(aclGetDataBufferSize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetDataBufferSize, dataBuffer);
    #else
        DEFINE_RETURN_VARIBLE(uint32_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetDataBufferSize,dataBuffer);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclGetDataBufferSizeV2(const aclDataBuffer* dataBuffer){
    BEGIN_FUNC_HOOK(aclGetDataBufferSizeV2);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetDataBufferSizeV2, dataBuffer);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetDataBufferSizeV2,dataBuffer);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclGetDeviceCapability(uint32_t deviceId, aclDeviceInfo deviceInfo, int64_t* value){
    BEGIN_FUNC_HOOK(aclGetDeviceCapability);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetDeviceCapability, deviceId, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetDeviceCapability,deviceId, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
const char* aclGetRecentErrMsg(){
    BEGIN_FUNC_HOOK(aclGetRecentErrMsg);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetRecentErrMsg);
    #else
        DEFINE_RETURN_VARIBLE(const char*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetRecentErrMsg,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
void* aclGetTensorDescAddress(const aclTensorDesc* desc){
    BEGIN_FUNC_HOOK(aclGetTensorDescAddress);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetTensorDescAddress, desc);
    #else
        DEFINE_RETURN_VARIBLE(void*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescAddress,desc);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclTensorDesc* aclGetTensorDescByIndex(aclTensorDesc* desc, size_t index){
    BEGIN_FUNC_HOOK(aclGetTensorDescByIndex);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetTensorDescByIndex, desc, );
    #else
        DEFINE_RETURN_VARIBLE(aclTensorDesc*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescByIndex,desc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
int64_t aclGetTensorDescDim(const aclTensorDesc* desc, size_t index){
    BEGIN_FUNC_HOOK(aclGetTensorDescDim);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetTensorDescDim, desc, );
    #else
        DEFINE_RETURN_VARIBLE(int64_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescDim,desc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclGetTensorDescDimRange(const aclTensorDesc* desc, size_t index, size_t dimRangeNum, int64_t* dimRange){
    BEGIN_FUNC_HOOK(aclGetTensorDescDimRange);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetTensorDescDimRange, desc, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescDimRange,desc, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclGetTensorDescDimV2(const aclTensorDesc* desc, size_t index, int64_t* dimSize){
    BEGIN_FUNC_HOOK(aclGetTensorDescDimV2);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetTensorDescDimV2, desc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescDimV2,desc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclGetTensorDescElementCount(const aclTensorDesc* desc){
    BEGIN_FUNC_HOOK(aclGetTensorDescElementCount);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetTensorDescElementCount, desc);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescElementCount,desc);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclFormat aclGetTensorDescFormat(const aclTensorDesc* desc){
    BEGIN_FUNC_HOOK(aclGetTensorDescFormat);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetTensorDescFormat, desc);
    #else
        DEFINE_RETURN_VARIBLE(aclFormat, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescFormat,desc);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
const char* aclGetTensorDescName(aclTensorDesc* desc){
    BEGIN_FUNC_HOOK(aclGetTensorDescName);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetTensorDescName, desc);
    #else
        DEFINE_RETURN_VARIBLE(const char*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescName,desc);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclGetTensorDescNumDims(const aclTensorDesc* desc){
    BEGIN_FUNC_HOOK(aclGetTensorDescNumDims);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetTensorDescNumDims, desc);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescNumDims,desc);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclGetTensorDescSize(const aclTensorDesc* desc){
    BEGIN_FUNC_HOOK(aclGetTensorDescSize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetTensorDescSize, desc);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescSize,desc);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclDataType aclGetTensorDescType(const aclTensorDesc* desc){
    BEGIN_FUNC_HOOK(aclGetTensorDescType);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclGetTensorDescType, desc);
    #else
        DEFINE_RETURN_VARIBLE(aclDataType, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescType,desc);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclInit(const char* configPath){
    BEGIN_FUNC_HOOK(aclInit);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclInit, configPath);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclInit,configPath);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetCompileopt(aclCompileOpt opt, const char* value){
    BEGIN_FUNC_HOOK(aclSetCompileopt);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetCompileopt, opt, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetCompileopt,opt, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetTensorConst(aclTensorDesc* desc, void* dataBuffer, size_t length){
    BEGIN_FUNC_HOOK(aclSetTensorConst);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorConst, desc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorConst,desc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
void aclSetTensorDescName(aclTensorDesc* desc, const char* name){
    BEGIN_FUNC_HOOK(aclSetTensorDescName);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorDescName, desc, );
    #else
        CALL_FUNC_WITHOUT_RETURN(so_aclSetTensorDescName,desc, );
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetTensorDynamicInput(aclTensorDesc* desc, const char* dynamicInputName){
    BEGIN_FUNC_HOOK(aclSetTensorDynamicInput);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorDynamicInput, desc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorDynamicInput,desc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetTensorFormat(aclTensorDesc* desc, aclFormat format){
    BEGIN_FUNC_HOOK(aclSetTensorFormat);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorFormat, desc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorFormat,desc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetTensorOriginFormat(aclTensorDesc* desc, aclFormat format){
    BEGIN_FUNC_HOOK(aclSetTensorOriginFormat);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorOriginFormat, desc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorOriginFormat,desc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetTensorOriginShape(aclTensorDesc* desc, int numDims, const int64_t* dims){
    BEGIN_FUNC_HOOK(aclSetTensorOriginShape);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorOriginShape, desc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorOriginShape,desc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetTensorPlaceMent(aclTensorDesc* desc, aclMemType memType){
    BEGIN_FUNC_HOOK(aclSetTensorPlaceMent);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorPlaceMent, desc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorPlaceMent,desc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetTensorShape(aclTensorDesc* desc, int numDims, const int64_t* dims){
    BEGIN_FUNC_HOOK(aclSetTensorShape);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorShape, desc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorShape,desc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetTensorShapeRange(aclTensorDesc* desc, size_t dimsCount, int64_t dimsRange[][ACL_TENSOR_SHAPE_RANGE_NUM]){
    BEGIN_FUNC_HOOK(aclSetTensorShapeRange);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorShapeRange, desc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorShapeRange,desc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetTensorStorageFormat(aclTensorDesc* desc, aclFormat format){
    BEGIN_FUNC_HOOK(aclSetTensorStorageFormat);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorStorageFormat, desc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorStorageFormat,desc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetTensorStorageShape(aclTensorDesc* desc, int numDims, const int64_t* dims){
    BEGIN_FUNC_HOOK(aclSetTensorStorageShape);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorStorageShape, desc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorStorageShape,desc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclSetTensorValueRange(aclTensorDesc* desc, size_t valueCount, int64_t valueRange[][ACL_TENSOR_VALUE_RANGE_NUM]){
    BEGIN_FUNC_HOOK(aclSetTensorValueRange);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorValueRange, desc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorValueRange,desc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclTransTensorDescFormat(const aclTensorDesc* srcDesc, aclFormat dstFormat, aclTensorDesc** dstDesc){
    BEGIN_FUNC_HOOK(aclTransTensorDescFormat);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclTransTensorDescFormat, srcDesc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclTransTensorDescFormat,srcDesc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclUpdateDataBuffer(aclDataBuffer* dataBuffer, void* data, size_t size){
    BEGIN_FUNC_HOOK(aclUpdateDataBuffer);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclUpdateDataBuffer, dataBuffer, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclUpdateDataBuffer,dataBuffer, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlAddDatasetBuffer(aclmdlDataset* dataset, aclDataBuffer* dataBuffer){
    BEGIN_FUNC_HOOK(aclmdlAddDatasetBuffer);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlAddDatasetBuffer, dataset, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlAddDatasetBuffer,dataset, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclmdlAIPP* aclmdlCreateAIPP(uint64_t batchSize){
    BEGIN_FUNC_HOOK(aclmdlCreateAIPP);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlCreateAIPP, batchSize);
    #else
        DEFINE_RETURN_VARIBLE(aclmdlAIPP*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlCreateAIPP,batchSize);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlCreateAndGetOpDesc(uint32_t deviceId, uint32_t streamId, uint32_t taskId, char* opName, size_t opNameLen, aclTensorDesc** inputDesc, size_t* numInputs, aclTensorDesc** outputDesc, size_t* numOutputs){
    BEGIN_FUNC_HOOK(aclmdlCreateAndGetOpDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlCreateAndGetOpDesc, deviceId, , , , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlCreateAndGetOpDesc,deviceId, , , , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclmdlConfigHandle* aclmdlCreateConfigHandle(){
    BEGIN_FUNC_HOOK(aclmdlCreateConfigHandle);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlCreateConfigHandle);
    #else
        DEFINE_RETURN_VARIBLE(aclmdlConfigHandle*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlCreateConfigHandle,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclmdlDataset* aclmdlCreateDataset(){
    BEGIN_FUNC_HOOK(aclmdlCreateDataset);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlCreateDataset);
    #else
        DEFINE_RETURN_VARIBLE(aclmdlDataset*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlCreateDataset,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclmdlDesc* aclmdlCreateDesc(){
    BEGIN_FUNC_HOOK(aclmdlCreateDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlCreateDesc);
    #else
        DEFINE_RETURN_VARIBLE(aclmdlDesc*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlCreateDesc,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclmdlExecConfigHandle* aclmdlCreateExecConfigHandle(){
    BEGIN_FUNC_HOOK(aclmdlCreateExecConfigHandle);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlCreateExecConfigHandle);
    #else
        DEFINE_RETURN_VARIBLE(aclmdlExecConfigHandle*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlCreateExecConfigHandle,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlDestroyAIPP(const aclmdlAIPP* aippParmsSet){
    BEGIN_FUNC_HOOK(aclmdlDestroyAIPP);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlDestroyAIPP, aippParmsSet);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlDestroyAIPP,aippParmsSet);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlDestroyConfigHandle(aclmdlConfigHandle* handle){
    BEGIN_FUNC_HOOK(aclmdlDestroyConfigHandle);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlDestroyConfigHandle, handle);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlDestroyConfigHandle,handle);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlDestroyDataset(const aclmdlDataset* dataset){
    BEGIN_FUNC_HOOK(aclmdlDestroyDataset);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlDestroyDataset, dataset);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlDestroyDataset,dataset);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlDestroyDesc(aclmdlDesc* modelDesc){
    BEGIN_FUNC_HOOK(aclmdlDestroyDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlDestroyDesc, modelDesc);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlDestroyDesc,modelDesc);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlDestroyExecConfigHandle(const aclmdlExecConfigHandle* handle){
    BEGIN_FUNC_HOOK(aclmdlDestroyExecConfigHandle);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlDestroyExecConfigHandle, handle);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlDestroyExecConfigHandle,handle);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlExecute(uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output){
    BEGIN_FUNC_HOOK(aclmdlExecute);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlExecute, modelId, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlExecute,modelId, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlExecuteAsync(uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclmdlExecuteAsync);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlExecuteAsync, modelId, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlExecuteAsync,modelId, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlExecuteV2(uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output, aclrtStream stream, const aclmdlExecConfigHandle* handle){
    BEGIN_FUNC_HOOK(aclmdlExecuteV2);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlExecuteV2, modelId, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlExecuteV2,modelId, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlFinalizeDump(){
    BEGIN_FUNC_HOOK(aclmdlFinalizeDump);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlFinalizeDump);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlFinalizeDump,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetAippDataSize(uint64_t batchSize, size_t* size){
    BEGIN_FUNC_HOOK(aclmdlGetAippDataSize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetAippDataSize, batchSize, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetAippDataSize,batchSize, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetAippType(uint32_t modelId, size_t index, aclmdlInputAippType* type, size_t* dynamicAttachedDataIndex){
    BEGIN_FUNC_HOOK(aclmdlGetAippType);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetAippType, modelId, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetAippType,modelId, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetCurOutputDims(const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims){
    BEGIN_FUNC_HOOK(aclmdlGetCurOutputDims);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetCurOutputDims, modelDesc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetCurOutputDims,modelDesc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclDataBuffer* aclmdlGetDatasetBuffer(const aclmdlDataset* dataset, size_t index){
    BEGIN_FUNC_HOOK(aclmdlGetDatasetBuffer);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetDatasetBuffer, dataset, );
    #else
        DEFINE_RETURN_VARIBLE(aclDataBuffer*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetDatasetBuffer,dataset, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclmdlGetDatasetNumBuffers(const aclmdlDataset* dataset){
    BEGIN_FUNC_HOOK(aclmdlGetDatasetNumBuffers);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetDatasetNumBuffers, dataset);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetDatasetNumBuffers,dataset);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclTensorDesc* aclmdlGetDatasetTensorDesc(const aclmdlDataset* dataset, size_t index){
    BEGIN_FUNC_HOOK(aclmdlGetDatasetTensorDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetDatasetTensorDesc, dataset, );
    #else
        DEFINE_RETURN_VARIBLE(aclTensorDesc*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetDatasetTensorDesc,dataset, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetDesc(aclmdlDesc* modelDesc, uint32_t modelId){
    BEGIN_FUNC_HOOK(aclmdlGetDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetDesc, modelDesc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetDesc,modelDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetDynamicBatch(const aclmdlDesc* modelDesc, aclmdlBatch* batch){
    BEGIN_FUNC_HOOK(aclmdlGetDynamicBatch);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetDynamicBatch, modelDesc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetDynamicBatch,modelDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetDynamicHW(const aclmdlDesc* modelDesc, size_t index, aclmdlHW* hw){
    BEGIN_FUNC_HOOK(aclmdlGetDynamicHW);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetDynamicHW, modelDesc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetDynamicHW,modelDesc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetFirstAippInfo(uint32_t modelId, size_t index, aclAippInfo* aippInfo){
    BEGIN_FUNC_HOOK(aclmdlGetFirstAippInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetFirstAippInfo, modelId, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetFirstAippInfo,modelId, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclDataType aclmdlGetInputDataType(const aclmdlDesc* modelDesc, size_t index){
    BEGIN_FUNC_HOOK(aclmdlGetInputDataType);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetInputDataType, modelDesc, );
    #else
        DEFINE_RETURN_VARIBLE(aclDataType, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputDataType,modelDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetInputDims(const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims){
    BEGIN_FUNC_HOOK(aclmdlGetInputDims);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetInputDims, modelDesc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputDims,modelDesc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetInputDimsV2(const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims){
    BEGIN_FUNC_HOOK(aclmdlGetInputDimsV2);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetInputDimsV2, modelDesc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputDimsV2,modelDesc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetInputDynamicDims(const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims, size_t gearCount){
    BEGIN_FUNC_HOOK(aclmdlGetInputDynamicDims);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetInputDynamicDims, modelDesc, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputDynamicDims,modelDesc, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetInputDynamicGearCount(const aclmdlDesc* modelDesc, size_t index, size_t* gearCount){
    BEGIN_FUNC_HOOK(aclmdlGetInputDynamicGearCount);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetInputDynamicGearCount, modelDesc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputDynamicGearCount,modelDesc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclFormat aclmdlGetInputFormat(const aclmdlDesc* modelDesc, size_t index){
    BEGIN_FUNC_HOOK(aclmdlGetInputFormat);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetInputFormat, modelDesc, );
    #else
        DEFINE_RETURN_VARIBLE(aclFormat, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputFormat,modelDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetInputIndexByName(const aclmdlDesc* modelDesc, const char* name, size_t* index){
    BEGIN_FUNC_HOOK(aclmdlGetInputIndexByName);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetInputIndexByName, modelDesc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputIndexByName,modelDesc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
const char* aclmdlGetInputNameByIndex(const aclmdlDesc* modelDesc, size_t index){
    BEGIN_FUNC_HOOK(aclmdlGetInputNameByIndex);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetInputNameByIndex, modelDesc, );
    #else
        DEFINE_RETURN_VARIBLE(const char*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputNameByIndex,modelDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclmdlGetInputSizeByIndex(aclmdlDesc* modelDesc, size_t index){
    BEGIN_FUNC_HOOK(aclmdlGetInputSizeByIndex);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetInputSizeByIndex, modelDesc, );
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputSizeByIndex,modelDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclmdlGetNumInputs(aclmdlDesc* modelDesc){
    BEGIN_FUNC_HOOK(aclmdlGetNumInputs);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetNumInputs, modelDesc);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetNumInputs,modelDesc);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclmdlGetNumOutputs(aclmdlDesc* modelDesc){
    BEGIN_FUNC_HOOK(aclmdlGetNumOutputs);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetNumOutputs, modelDesc);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetNumOutputs,modelDesc);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
const char* aclmdlGetOpAttr(aclmdlDesc* modelDesc, const char* opName, const char* attr){
    BEGIN_FUNC_HOOK(aclmdlGetOpAttr);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetOpAttr, modelDesc, , );
    #else
        DEFINE_RETURN_VARIBLE(const char*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOpAttr,modelDesc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclDataType aclmdlGetOutputDataType(const aclmdlDesc* modelDesc, size_t index){
    BEGIN_FUNC_HOOK(aclmdlGetOutputDataType);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetOutputDataType, modelDesc, );
    #else
        DEFINE_RETURN_VARIBLE(aclDataType, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputDataType,modelDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetOutputDims(const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims){
    BEGIN_FUNC_HOOK(aclmdlGetOutputDims);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetOutputDims, modelDesc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputDims,modelDesc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclFormat aclmdlGetOutputFormat(const aclmdlDesc* modelDesc, size_t index){
    BEGIN_FUNC_HOOK(aclmdlGetOutputFormat);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetOutputFormat, modelDesc, );
    #else
        DEFINE_RETURN_VARIBLE(aclFormat, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputFormat,modelDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlGetOutputIndexByName(const aclmdlDesc* modelDesc, const char* name, size_t* index){
    BEGIN_FUNC_HOOK(aclmdlGetOutputIndexByName);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetOutputIndexByName, modelDesc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputIndexByName,modelDesc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
const char* aclmdlGetOutputNameByIndex(const aclmdlDesc* modelDesc, size_t index){
    BEGIN_FUNC_HOOK(aclmdlGetOutputNameByIndex);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetOutputNameByIndex, modelDesc, );
    #else
        DEFINE_RETURN_VARIBLE(const char*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputNameByIndex,modelDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclmdlGetOutputSizeByIndex(aclmdlDesc* modelDesc, size_t index){
    BEGIN_FUNC_HOOK(aclmdlGetOutputSizeByIndex);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetOutputSizeByIndex, modelDesc, );
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputSizeByIndex,modelDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
const char* aclmdlGetTensorRealName(const aclmdlDesc* modelDesc, const char* name){
    BEGIN_FUNC_HOOK(aclmdlGetTensorRealName);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlGetTensorRealName, modelDesc, );
    #else
        DEFINE_RETURN_VARIBLE(const char*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetTensorRealName,modelDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlInitDump(){
    BEGIN_FUNC_HOOK(aclmdlInitDump);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlInitDump);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlInitDump,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlLoadFromFile(const char* modelPath, uint32_t* modelId){
    BEGIN_FUNC_HOOK(aclmdlLoadFromFile);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlLoadFromFile, modelPath, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromFile,modelPath, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlLoadFromFileWithMem(const char* modelPath, uint32_t* modelId, void* workPtr, size_t workSize, void* weightPtr, size_t weightSize){
    BEGIN_FUNC_HOOK(aclmdlLoadFromFileWithMem);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlLoadFromFileWithMem, modelPath, , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromFileWithMem,modelPath, , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlLoadFromFileWithQ(const char* modelPath, uint32_t* modelId, const uint32_t* inputQ, size_t inputQNum, const uint32_t* outputQ, size_t outputQNum){
    BEGIN_FUNC_HOOK(aclmdlLoadFromFileWithQ);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlLoadFromFileWithQ, modelPath, , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromFileWithQ,modelPath, , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlLoadFromMem(const void* model, size_t modelSize, uint32_t* modelId){
    BEGIN_FUNC_HOOK(aclmdlLoadFromMem);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlLoadFromMem, model, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromMem,model, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlLoadFromMemWithMem(const void* model, size_t modelSize, uint32_t* modelId, void* workPtr, size_t workSize, void* weightPtr, size_t weightSize){
    BEGIN_FUNC_HOOK(aclmdlLoadFromMemWithMem);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlLoadFromMemWithMem, model, , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromMemWithMem,model, , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlLoadFromMemWithQ(const void* model, size_t modelSize, uint32_t* modelId, const uint32_t* inputQ, size_t inputQNum, const uint32_t* outputQ, size_t outputQNum){
    BEGIN_FUNC_HOOK(aclmdlLoadFromMemWithQ);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlLoadFromMemWithQ, model, , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromMemWithQ,model, , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlLoadWithConfig(const aclmdlConfigHandle* handle, uint32_t* modelId){
    BEGIN_FUNC_HOOK(aclmdlLoadWithConfig);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlLoadWithConfig, handle, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadWithConfig,handle, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlQuerySize(const char* fileName, size_t* workSize, size_t* weightSize){
    BEGIN_FUNC_HOOK(aclmdlQuerySize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlQuerySize, fileName, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlQuerySize,fileName, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlQuerySizeFromMem(const void* model, size_t modelSize, size_t* workSize, size_t* weightSize){
    BEGIN_FUNC_HOOK(aclmdlQuerySizeFromMem);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlQuerySizeFromMem, model, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlQuerySizeFromMem,model, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPAxSwapSwitch(aclmdlAIPP* aippParmsSet, int8_t axSwapSwitch){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPAxSwapSwitch);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPAxSwapSwitch, aippParmsSet, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPAxSwapSwitch,aippParmsSet, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPByInputIndex(uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlAIPP* aippParmsSet){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPByInputIndex);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPByInputIndex, modelId, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPByInputIndex,modelId, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPCropParams(aclmdlAIPP* aippParmsSet, int8_t cropSwitch, int32_t cropStartPosW, int32_t cropStartPosH, int32_t cropSizeW, int32_t cropSizeH, uint64_t batchIndex){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPCropParams);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPCropParams, aippParmsSet, , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPCropParams,aippParmsSet, , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPCscParams(aclmdlAIPP* aippParmsSet, int8_t cscSwitch, int16_t cscMatrixR0C0, int16_t cscMatrixR0C1, int16_t cscMatrixR0C2, int16_t cscMatrixR1C0, int16_t cscMatrixR1C1, int16_t cscMatrixR1C2, int16_t cscMatrixR2C0, int16_t cscMatrixR2C1, int16_t cscMatrixR2C2, uint8_t cscOutputBiasR0, uint8_t cscOutputBiasR1, uint8_t cscOutputBiasR2, uint8_t cscInputBiasR0, uint8_t cscInputBiasR1, uint8_t cscInputBiasR2){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPCscParams);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPCscParams, aippParmsSet, , , , , , , , , , , , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPCscParams,aippParmsSet, , , , , , , , , , , , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPDtcPixelMean(aclmdlAIPP* aippParmsSet, int16_t dtcPixelMeanChn0, int16_t dtcPixelMeanChn1, int16_t dtcPixelMeanChn2, int16_t dtcPixelMeanChn3, uint64_t batchIndex){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPDtcPixelMean);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPDtcPixelMean, aippParmsSet, , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPDtcPixelMean,aippParmsSet, , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPDtcPixelMin(aclmdlAIPP* aippParmsSet, float dtcPixelMinChn0, float dtcPixelMinChn1, float dtcPixelMinChn2, float dtcPixelMinChn3, uint64_t batchIndex){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPDtcPixelMin);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPDtcPixelMin, aippParmsSet, , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPDtcPixelMin,aippParmsSet, , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPInputFormat(aclmdlAIPP* aippParmsSet, aclAippInputFormat inputFormat){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPInputFormat);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPInputFormat, aippParmsSet, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPInputFormat,aippParmsSet, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPPaddingParams(aclmdlAIPP* aippParmsSet, int8_t paddingSwitch, int32_t paddingSizeTop, int32_t paddingSizeBottom, int32_t paddingSizeLeft, int32_t paddingSizeRight, uint64_t batchIndex){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPPaddingParams);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPPaddingParams, aippParmsSet, , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPPaddingParams,aippParmsSet, , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPPixelVarReci(aclmdlAIPP* aippParmsSet, float dtcPixelVarReciChn0, float dtcPixelVarReciChn1, float dtcPixelVarReciChn2, float dtcPixelVarReciChn3, uint64_t batchIndex){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPPixelVarReci);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPPixelVarReci, aippParmsSet, , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPPixelVarReci,aippParmsSet, , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPRbuvSwapSwitch(aclmdlAIPP* aippParmsSet, int8_t rbuvSwapSwitch){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPRbuvSwapSwitch);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPRbuvSwapSwitch, aippParmsSet, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPRbuvSwapSwitch,aippParmsSet, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPScfParams(aclmdlAIPP* aippParmsSet, int8_t scfSwitch, int32_t scfInputSizeW, int32_t scfInputSizeH, int32_t scfOutputSizeW, int32_t scfOutputSizeH, uint64_t batchIndex){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPScfParams);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPScfParams, aippParmsSet, , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPScfParams,aippParmsSet, , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetAIPPSrcImageSize(aclmdlAIPP* aippParmsSet, int32_t srcImageSizeW, int32_t srcImageSizeH){
    BEGIN_FUNC_HOOK(aclmdlSetAIPPSrcImageSize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetAIPPSrcImageSize, aippParmsSet, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPSrcImageSize,aippParmsSet, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetConfigOpt(aclmdlConfigHandle* handle, aclmdlConfigAttr attr, const void* attrValue, size_t valueSize){
    BEGIN_FUNC_HOOK(aclmdlSetConfigOpt);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetConfigOpt, handle, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetConfigOpt,handle, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetDatasetTensorDesc(aclmdlDataset* dataset, aclTensorDesc* tensorDesc, size_t index){
    BEGIN_FUNC_HOOK(aclmdlSetDatasetTensorDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetDatasetTensorDesc, dataset, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetDatasetTensorDesc,dataset, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetDump(const char* dumpCfgPath){
    BEGIN_FUNC_HOOK(aclmdlSetDump);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetDump, dumpCfgPath);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetDump,dumpCfgPath);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetDynamicBatchSize(uint32_t modelId, aclmdlDataset* dataset, size_t index, uint64_t batchSize){
    BEGIN_FUNC_HOOK(aclmdlSetDynamicBatchSize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetDynamicBatchSize, modelId, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetDynamicBatchSize,modelId, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetDynamicHWSize(uint32_t modelId, aclmdlDataset* dataset, size_t index, uint64_t height, uint64_t width){
    BEGIN_FUNC_HOOK(aclmdlSetDynamicHWSize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetDynamicHWSize, modelId, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetDynamicHWSize,modelId, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetExecConfigOpt(aclmdlExecConfigHandle* handle, aclmdlExecConfigAttr attr, const void* attrValue, size_t valueSize){
    BEGIN_FUNC_HOOK(aclmdlSetExecConfigOpt);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetExecConfigOpt, handle, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetExecConfigOpt,handle, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetInputAIPP(uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlAIPP* aippParmsSet){
    BEGIN_FUNC_HOOK(aclmdlSetInputAIPP);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetInputAIPP, modelId, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetInputAIPP,modelId, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlSetInputDynamicDims(uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlIODims* dims){
    BEGIN_FUNC_HOOK(aclmdlSetInputDynamicDims);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlSetInputDynamicDims, modelId, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetInputDynamicDims,modelId, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclmdlUnload(uint32_t modelId){
    BEGIN_FUNC_HOOK(aclmdlUnload);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclmdlUnload, modelId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlUnload,modelId);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopCast(const aclTensorDesc* srcDesc, const aclDataBuffer* srcBuffer, const aclTensorDesc* dstDesc, aclDataBuffer* dstBuffer, uint8_t truncate, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclopCast);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopCast, srcDesc, , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCast,srcDesc, , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopCompile(const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath){
    BEGIN_FUNC_HOOK(aclopCompile);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopCompile, opType, , , , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCompile,opType, , , , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopCompileAndExecute(const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclopCompileAndExecute);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopCompileAndExecute, opType, , , , , , , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCompileAndExecute,opType, , , , , , , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopCompileAndExecuteV2(const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclDataBuffer* outputs[], aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclopCompileAndExecuteV2);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopCompileAndExecuteV2, opType, , , , , , , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCompileAndExecuteV2,opType, , , , , , , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclopAttr* aclopCreateAttr(){
    BEGIN_FUNC_HOOK(aclopCreateAttr);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopCreateAttr);
    #else
        DEFINE_RETURN_VARIBLE(aclopAttr*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCreateAttr,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopCreateHandle(const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* opAttr, aclopHandle** handle){
    BEGIN_FUNC_HOOK(aclopCreateHandle);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopCreateHandle, opType, , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCreateHandle,opType, , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopCreateHandleForCast(aclTensorDesc* srcDesc, aclTensorDesc* dstDesc, uint8_t truncate, aclopHandle** handle){
    BEGIN_FUNC_HOOK(aclopCreateHandleForCast);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopCreateHandleForCast, srcDesc, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCreateHandleForCast,srcDesc, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopCreateKernel(const char* opType, const char* kernelId, const char* kernelName, void* binData, int binSize, aclopEngineType enginetype, aclDataDeallocator deallocator){
    BEGIN_FUNC_HOOK(aclopCreateKernel);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopCreateKernel, opType, , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCreateKernel,opType, , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
void aclopDestroyAttr(const aclopAttr* attr){
    BEGIN_FUNC_HOOK(aclopDestroyAttr);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopDestroyAttr, attr);
    #else
        CALL_FUNC_WITHOUT_RETURN(so_aclopDestroyAttr,attr);
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
void aclopDestroyHandle(aclopHandle* handle){
    BEGIN_FUNC_HOOK(aclopDestroyHandle);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopDestroyHandle, handle);
    #else
        CALL_FUNC_WITHOUT_RETURN(so_aclopDestroyHandle,handle);
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopExecWithHandle(aclopHandle* handle, int numInputs, const aclDataBuffer* const inputs[], int numOutputs, aclDataBuffer* const outputs[], aclrtStream stream){
    BEGIN_FUNC_HOOK(aclopExecWithHandle);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopExecWithHandle, handle, , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopExecWithHandle,handle, , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopExecute(const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclopExecute);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopExecute, opType, , , , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopExecute,opType, , , , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopExecuteV2(const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclDataBuffer* outputs[], aclopAttr* attr, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclopExecuteV2);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopExecuteV2, opType, , , , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopExecuteV2,opType, , , , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopInferShape(const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclopAttr* attr){
    BEGIN_FUNC_HOOK(aclopInferShape);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopInferShape, opType, , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopInferShape,opType, , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopLoad(const void* model, size_t modelSize){
    BEGIN_FUNC_HOOK(aclopLoad);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopLoad, model, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopLoad,model, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopRegisterCompileFunc(const char* opType, aclopCompileFunc func){
    BEGIN_FUNC_HOOK(aclopRegisterCompileFunc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopRegisterCompileFunc, opType, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopRegisterCompileFunc,opType, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetAttrBool(aclopAttr* attr, const char* attrName, uint8_t attrValue){
    BEGIN_FUNC_HOOK(aclopSetAttrBool);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetAttrBool, attr, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrBool,attr, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetAttrDataType(aclopAttr* attr, const char* attrName, aclDataType attrValue){
    BEGIN_FUNC_HOOK(aclopSetAttrDataType);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetAttrDataType, attr, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrDataType,attr, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetAttrFloat(aclopAttr* attr, const char* attrName, float attrValue){
    BEGIN_FUNC_HOOK(aclopSetAttrFloat);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetAttrFloat, attr, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrFloat,attr, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetAttrInt(aclopAttr* attr, const char* attrName, int64_t attrValue){
    BEGIN_FUNC_HOOK(aclopSetAttrInt);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetAttrInt, attr, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrInt,attr, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetAttrListBool(aclopAttr* attr, const char* attrName, int numValues, const uint8_t* values){
    BEGIN_FUNC_HOOK(aclopSetAttrListBool);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetAttrListBool, attr, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListBool,attr, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetAttrListDataType(aclopAttr* attr, const char* attrName, int numValues, const aclDataType values[]){
    BEGIN_FUNC_HOOK(aclopSetAttrListDataType);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetAttrListDataType, attr, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListDataType,attr, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetAttrListFloat(aclopAttr* attr, const char* attrName, int numValues, const float* values){
    BEGIN_FUNC_HOOK(aclopSetAttrListFloat);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetAttrListFloat, attr, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListFloat,attr, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetAttrListInt(aclopAttr* attr, const char* attrName, int numValues, const int64_t* values){
    BEGIN_FUNC_HOOK(aclopSetAttrListInt);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetAttrListInt, attr, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListInt,attr, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetAttrListListInt(aclopAttr* attr, const char* attrName, int numLists, const int* numValues, const int64_t* const values[]){
    BEGIN_FUNC_HOOK(aclopSetAttrListListInt);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetAttrListListInt, attr, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListListInt,attr, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetAttrListString(aclopAttr* attr, const char* attrName, int numValues, const char** values){
    BEGIN_FUNC_HOOK(aclopSetAttrListString);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetAttrListString, attr, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListString,attr, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetAttrString(aclopAttr* attr, const char* attrName, const char* attrValue){
    BEGIN_FUNC_HOOK(aclopSetAttrString);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetAttrString, attr, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrString,attr, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetCompileFlag(aclOpCompileFlag flag){
    BEGIN_FUNC_HOOK(aclopSetCompileFlag);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetCompileFlag, flag);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetCompileFlag,flag);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetKernelArgs(aclopKernelDesc* kernelDesc, const char* kernelId, uint32_t blockDim, const void* args, uint32_t argSize){
    BEGIN_FUNC_HOOK(aclopSetKernelArgs);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetKernelArgs, kernelDesc, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetKernelArgs,kernelDesc, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetKernelWorkspaceSizes(aclopKernelDesc* kernelDesc, int numWorkspaces, size_t* workspaceSizes){
    BEGIN_FUNC_HOOK(aclopSetKernelWorkspaceSizes);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetKernelWorkspaceSizes, kernelDesc, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetKernelWorkspaceSizes,kernelDesc, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopSetModelDir(const char* modelDir){
    BEGIN_FUNC_HOOK(aclopSetModelDir);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopSetModelDir, modelDir);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetModelDir,modelDir);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopStartDumpArgs(uint32_t dumpType, const char* path){
    BEGIN_FUNC_HOOK(aclopStartDumpArgs);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopStartDumpArgs, dumpType, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopStartDumpArgs,dumpType, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopStopDumpArgs(uint32_t dumpType){
    BEGIN_FUNC_HOOK(aclopStopDumpArgs);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopStopDumpArgs, dumpType);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopStopDumpArgs,dumpType);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopUnregisterCompileFunc(const char* opType){
    BEGIN_FUNC_HOOK(aclopUnregisterCompileFunc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopUnregisterCompileFunc, opType);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopUnregisterCompileFunc,opType);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclopUpdateParams(const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* attr){
    BEGIN_FUNC_HOOK(aclopUpdateParams);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopUpdateParams, opType, , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopUpdateParams,opType, , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclprofConfig* aclprofCreateConfig(uint32_t* deviceIdList, uint32_t deviceNums, aclprofAicoreMetrics aicoreMetrics, aclprofAicoreEvents* aicoreEvents, uint64_t dataTypeConfig){
    BEGIN_FUNC_HOOK(aclprofCreateConfig);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofCreateConfig, deviceIdList, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclprofConfig*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofCreateConfig,deviceIdList, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
void* aclprofCreateStamp(void){
    BEGIN_FUNC_HOOK(aclprofCreateStamp);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofCreateStamp, void);
    #else
        DEFINE_RETURN_VARIBLE(void*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofCreateStamp,void);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclprofStepInfo* aclprofCreateStepInfo(void){
    BEGIN_FUNC_HOOK(aclprofCreateStepInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofCreateStepInfo, void);
    #else
        DEFINE_RETURN_VARIBLE(aclprofStepInfo*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofCreateStepInfo,void);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclprofSubscribeConfig* aclprofCreateSubscribeConfig(int8_t timeInfoSwitch, aclprofAicoreMetrics aicoreMetrics, void* fd){
    BEGIN_FUNC_HOOK(aclprofCreateSubscribeConfig);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofCreateSubscribeConfig, timeInfoSwitch, , );
    #else
        DEFINE_RETURN_VARIBLE(aclprofSubscribeConfig*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofCreateSubscribeConfig,timeInfoSwitch, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofDestroyConfig(const aclprofConfig* profilerConfig){
    BEGIN_FUNC_HOOK(aclprofDestroyConfig);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofDestroyConfig, profilerConfig);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofDestroyConfig,profilerConfig);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
void aclprofDestroyStamp(void* stamp){
    BEGIN_FUNC_HOOK(aclprofDestroyStamp);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofDestroyStamp, stamp);
    #else
        CALL_FUNC_WITHOUT_RETURN(so_aclprofDestroyStamp,stamp);
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
void aclprofDestroyStepInfo(aclprofStepInfo* stepinfo){
    BEGIN_FUNC_HOOK(aclprofDestroyStepInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofDestroyStepInfo, stepinfo);
    #else
        CALL_FUNC_WITHOUT_RETURN(so_aclprofDestroyStepInfo,stepinfo);
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofDestroySubscribeConfig(const aclprofSubscribeConfig* profSubscribeConfig){
    BEGIN_FUNC_HOOK(aclprofDestroySubscribeConfig);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofDestroySubscribeConfig, profSubscribeConfig);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofDestroySubscribeConfig,profSubscribeConfig);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofFinalize(){
    BEGIN_FUNC_HOOK(aclprofFinalize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofFinalize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofFinalize,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
size_t aclprofGetModelId(const void* opInfo, size_t opInfoLen, uint32_t index){
    BEGIN_FUNC_HOOK(aclprofGetModelId);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofGetModelId, opInfo, , );
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetModelId,opInfo, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofGetOpDescSize(size_t* opDescSize){
    BEGIN_FUNC_HOOK(aclprofGetOpDescSize);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofGetOpDescSize, opDescSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpDescSize,opDescSize);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
uint64_t aclprofGetOpDuration(const void* opInfo, size_t opInfoLen, uint32_t index){
    BEGIN_FUNC_HOOK(aclprofGetOpDuration);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofGetOpDuration, opInfo, , );
    #else
        DEFINE_RETURN_VARIBLE(uint64_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpDuration,opInfo, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
uint64_t aclprofGetOpEnd(const void* opInfo, size_t opInfoLen, uint32_t index){
    BEGIN_FUNC_HOOK(aclprofGetOpEnd);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofGetOpEnd, opInfo, , );
    #else
        DEFINE_RETURN_VARIBLE(uint64_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpEnd,opInfo, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofGetOpName(const void* opInfo, size_t opInfoLen, uint32_t index, char* opName, size_t opNameLen){
    BEGIN_FUNC_HOOK(aclprofGetOpName);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofGetOpName, opInfo, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpName,opInfo, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofGetOpNameLen(const void* opInfo, size_t opInfoLen, uint32_t index, size_t* opNameLen){
    BEGIN_FUNC_HOOK(aclprofGetOpNameLen);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofGetOpNameLen, opInfo, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpNameLen,opInfo, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofGetOpNum(const void* opInfo, size_t opInfoLen, uint32_t* opNumber){
    BEGIN_FUNC_HOOK(aclprofGetOpNum);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofGetOpNum, opInfo, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpNum,opInfo, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
uint64_t aclprofGetOpStart(const void* opInfo, size_t opInfoLen, uint32_t index){
    BEGIN_FUNC_HOOK(aclprofGetOpStart);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofGetOpStart, opInfo, , );
    #else
        DEFINE_RETURN_VARIBLE(uint64_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpStart,opInfo, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofGetOpType(const void* opInfo, size_t opInfoLen, uint32_t index, char* opType, size_t opTypeLen){
    BEGIN_FUNC_HOOK(aclprofGetOpType);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofGetOpType, opInfo, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpType,opInfo, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofGetOpTypeLen(const void* opInfo, size_t opInfoLen, uint32_t index, size_t* opTypeLen){
    BEGIN_FUNC_HOOK(aclprofGetOpTypeLen);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofGetOpTypeLen, opInfo, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpTypeLen,opInfo, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofGetStepTimestamp(aclprofStepInfo* stepInfo, aclprofStepTag tag, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclprofGetStepTimestamp);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofGetStepTimestamp, stepInfo, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetStepTimestamp,stepInfo, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofInit(const char* profilerResultPath, size_t length){
    BEGIN_FUNC_HOOK(aclprofInit);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofInit, profilerResultPath, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofInit,profilerResultPath, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofMark(void* stamp){
    BEGIN_FUNC_HOOK(aclprofMark);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofMark, stamp);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofMark,stamp);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofMarkEx(const char* msg, size_t msgLen, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclprofMarkEx);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofMarkEx, msg, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofMarkEx,msg, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofModelSubscribe(uint32_t modelId, const aclprofSubscribeConfig* profSubscribeConfig){
    BEGIN_FUNC_HOOK(aclprofModelSubscribe);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofModelSubscribe, modelId, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofModelSubscribe,modelId, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofModelUnSubscribe(uint32_t modelId){
    BEGIN_FUNC_HOOK(aclprofModelUnSubscribe);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofModelUnSubscribe, modelId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofModelUnSubscribe,modelId);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofPop(){
    BEGIN_FUNC_HOOK(aclprofPop);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofPop);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofPop,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofPush(void* stamp){
    BEGIN_FUNC_HOOK(aclprofPush);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofPush, stamp);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofPush,stamp);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofRangeStart(void* stamp, uint32_t* rangeId){
    BEGIN_FUNC_HOOK(aclprofRangeStart);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofRangeStart, stamp, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofRangeStart,stamp, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofRangeStop(uint32_t rangeId){
    BEGIN_FUNC_HOOK(aclprofRangeStop);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofRangeStop, rangeId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofRangeStop,rangeId);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofSetConfig(aclprofConfigType configType, const char* config, size_t configLength){
    BEGIN_FUNC_HOOK(aclprofSetConfig);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofSetConfig, configType, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofSetConfig,configType, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofSetStampTraceMessage(void* stamp, const char* msg, uint32_t msgLen){
    BEGIN_FUNC_HOOK(aclprofSetStampTraceMessage);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofSetStampTraceMessage, stamp, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofSetStampTraceMessage,stamp, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofStart(const aclprofConfig* profilerConfig){
    BEGIN_FUNC_HOOK(aclprofStart);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofStart, profilerConfig);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofStart,profilerConfig);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclprofStop(const aclprofConfig* profilerConfig){
    BEGIN_FUNC_HOOK(aclprofStop);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclprofStop, profilerConfig);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofStop,profilerConfig);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclrtAllocatorDesc aclrtAllocatorCreateDesc(){
    BEGIN_FUNC_HOOK(aclrtAllocatorCreateDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtAllocatorCreateDesc);
    #else
        DEFINE_RETURN_VARIBLE(aclrtAllocatorDesc, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorCreateDesc,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtAllocatorDestroyDesc(aclrtAllocatorDesc allocatorDesc){
    BEGIN_FUNC_HOOK(aclrtAllocatorDestroyDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtAllocatorDestroyDesc, allocatorDesc);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorDestroyDesc,allocatorDesc);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtAllocatorRegister(aclrtStream stream, aclrtAllocatorDesc allocatorDesc){
    BEGIN_FUNC_HOOK(aclrtAllocatorRegister);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtAllocatorRegister, stream, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorRegister,stream, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtAllocatorSetAllocAdviseFuncToDesc(aclrtAllocatorDesc allocatorDesc, aclrtAllocatorAllocAdviseFunc func){
    BEGIN_FUNC_HOOK(aclrtAllocatorSetAllocAdviseFuncToDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtAllocatorSetAllocAdviseFuncToDesc, allocatorDesc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorSetAllocAdviseFuncToDesc,allocatorDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtAllocatorSetAllocFuncToDesc(aclrtAllocatorDesc allocatorDesc, aclrtAllocatorAllocFunc func){
    BEGIN_FUNC_HOOK(aclrtAllocatorSetAllocFuncToDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtAllocatorSetAllocFuncToDesc, allocatorDesc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorSetAllocFuncToDesc,allocatorDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtAllocatorSetFreeFuncToDesc(aclrtAllocatorDesc allocatorDesc, aclrtAllocatorFreeFunc func){
    BEGIN_FUNC_HOOK(aclrtAllocatorSetFreeFuncToDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtAllocatorSetFreeFuncToDesc, allocatorDesc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorSetFreeFuncToDesc,allocatorDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtAllocatorSetGetAddrFromBlockFuncToDesc(aclrtAllocatorDesc allocatorDesc, aclrtAllocatorGetAddrFromBlockFunc func){
    BEGIN_FUNC_HOOK(aclrtAllocatorSetGetAddrFromBlockFuncToDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtAllocatorSetGetAddrFromBlockFuncToDesc, allocatorDesc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorSetGetAddrFromBlockFuncToDesc,allocatorDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtAllocatorSetObjToDesc(aclrtAllocatorDesc allocatorDesc, aclrtAllocator allocator){
    BEGIN_FUNC_HOOK(aclrtAllocatorSetObjToDesc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtAllocatorSetObjToDesc, allocatorDesc, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorSetObjToDesc,allocatorDesc, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtAllocatorUnregister(aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtAllocatorUnregister);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtAllocatorUnregister, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorUnregister,stream);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtBinaryGetFunction(const aclrtBinHandle binHandle, const char* kernelName, aclrtFuncHandle* funcHandle){
    BEGIN_FUNC_HOOK(aclrtBinaryGetFunction);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtBinaryGetFunction, binHandle, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtBinaryGetFunction,binHandle, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtBinaryLoad(const aclrtBinary binary, aclrtBinHandle* binHandle){
    BEGIN_FUNC_HOOK(aclrtBinaryLoad);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtBinaryLoad, binary, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtBinaryLoad,binary, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtBinaryUnLoad(aclrtBinHandle binHandle){
    BEGIN_FUNC_HOOK(aclrtBinaryUnLoad);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtBinaryUnLoad, binHandle);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtBinaryUnLoad,binHandle);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclrtBinary aclrtCreateBinary(const void* data, size_t dataLen){
    BEGIN_FUNC_HOOK(aclrtCreateBinary);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtCreateBinary, data, );
    #else
        DEFINE_RETURN_VARIBLE(aclrtBinary, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateBinary,data, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtCreateContext(aclrtContext* context, int32_t deviceId){
    BEGIN_FUNC_HOOK(aclrtCreateContext);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtCreateContext, context, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateContext,context, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtCreateEvent(aclrtEvent* event){
    BEGIN_FUNC_HOOK(aclrtCreateEvent);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtCreateEvent, event);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateEvent,event);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtCreateEventExWithFlag(aclrtEvent* event, uint32_t flag){
    BEGIN_FUNC_HOOK(aclrtCreateEventExWithFlag);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtCreateEventExWithFlag, event, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateEventExWithFlag,event, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtCreateEventWithFlag(aclrtEvent* event, uint32_t flag){
    BEGIN_FUNC_HOOK(aclrtCreateEventWithFlag);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtCreateEventWithFlag, event, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateEventWithFlag,event, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclrtGroupInfo* aclrtCreateGroupInfo(){
    BEGIN_FUNC_HOOK(aclrtCreateGroupInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtCreateGroupInfo);
    #else
        DEFINE_RETURN_VARIBLE(aclrtGroupInfo*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateGroupInfo,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtCreateStream(aclrtStream* stream){
    BEGIN_FUNC_HOOK(aclrtCreateStream);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtCreateStream, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateStream,stream);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtCreateStreamWithConfig(aclrtStream* stream, uint32_t priority, uint32_t flag){
    BEGIN_FUNC_HOOK(aclrtCreateStreamWithConfig);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtCreateStreamWithConfig, stream, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateStreamWithConfig,stream, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtCtxGetSysParamOpt(aclSysParamOpt opt, int64_t* value){
    BEGIN_FUNC_HOOK(aclrtCtxGetSysParamOpt);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtCtxGetSysParamOpt, opt, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCtxGetSysParamOpt,opt, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtCtxSetSysParamOpt(aclSysParamOpt opt, int64_t value){
    BEGIN_FUNC_HOOK(aclrtCtxSetSysParamOpt);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtCtxSetSysParamOpt, opt, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCtxSetSysParamOpt,opt, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtDestroyBinary(aclrtBinary binary){
    BEGIN_FUNC_HOOK(aclrtDestroyBinary);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtDestroyBinary, binary);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDestroyBinary,binary);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtDestroyContext(aclrtContext context){
    BEGIN_FUNC_HOOK(aclrtDestroyContext);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtDestroyContext, context);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDestroyContext,context);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtDestroyEvent(aclrtEvent event){
    BEGIN_FUNC_HOOK(aclrtDestroyEvent);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtDestroyEvent, event);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDestroyEvent,event);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtDestroyGroupInfo(aclrtGroupInfo* groupInfo){
    BEGIN_FUNC_HOOK(aclrtDestroyGroupInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtDestroyGroupInfo, groupInfo);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDestroyGroupInfo,groupInfo);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtDestroyStream(aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtDestroyStream);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtDestroyStream, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDestroyStream,stream);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtDestroyStreamForce(aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtDestroyStreamForce);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtDestroyStreamForce, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDestroyStreamForce,stream);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtDeviceCanAccessPeer(int32_t* canAccessPeer, int32_t deviceId, int32_t peerDeviceId){
    BEGIN_FUNC_HOOK(aclrtDeviceCanAccessPeer);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtDeviceCanAccessPeer, canAccessPeer, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDeviceCanAccessPeer,canAccessPeer, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtDeviceDisablePeerAccess(int32_t peerDeviceId){
    BEGIN_FUNC_HOOK(aclrtDeviceDisablePeerAccess);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtDeviceDisablePeerAccess, peerDeviceId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDeviceDisablePeerAccess,peerDeviceId);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtDeviceEnablePeerAccess(int32_t peerDeviceId, uint32_t flags){
    BEGIN_FUNC_HOOK(aclrtDeviceEnablePeerAccess);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtDeviceEnablePeerAccess, peerDeviceId, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDeviceEnablePeerAccess,peerDeviceId, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtDeviceGetBareTgid(int32_t* pid){
    BEGIN_FUNC_HOOK(aclrtDeviceGetBareTgid);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtDeviceGetBareTgid, pid);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDeviceGetBareTgid,pid);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtEventElapsedTime(float* ms, aclrtEvent startEvent, aclrtEvent endEvent){
    BEGIN_FUNC_HOOK(aclrtEventElapsedTime);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtEventElapsedTime, ms, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtEventElapsedTime,ms, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtFree(void* devPtr){
    BEGIN_FUNC_HOOK(aclrtFree);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtFree, devPtr);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtFree,devPtr);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtFreeHost(void* hostPtr){
    BEGIN_FUNC_HOOK(aclrtFreeHost);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtFreeHost, hostPtr);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtFreeHost,hostPtr);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtFreePhysical(aclrtDrvMemHandle handle){
    BEGIN_FUNC_HOOK(aclrtFreePhysical);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtFreePhysical, handle);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtFreePhysical,handle);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetAllGroupInfo(aclrtGroupInfo* groupInfo){
    BEGIN_FUNC_HOOK(aclrtGetAllGroupInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetAllGroupInfo, groupInfo);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetAllGroupInfo,groupInfo);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetCurrentContext(aclrtContext* context){
    BEGIN_FUNC_HOOK(aclrtGetCurrentContext);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetCurrentContext, context);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetCurrentContext,context);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetDevice(int32_t* deviceId){
    BEGIN_FUNC_HOOK(aclrtGetDevice);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetDevice, deviceId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetDevice,deviceId);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetDeviceCount(uint32_t* count){
    BEGIN_FUNC_HOOK(aclrtGetDeviceCount);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetDeviceCount, count);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetDeviceCount,count);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
uint32_t aclrtGetDeviceIdFromExceptionInfo(const aclrtExceptionInfo* info){
    BEGIN_FUNC_HOOK(aclrtGetDeviceIdFromExceptionInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetDeviceIdFromExceptionInfo, info);
    #else
        DEFINE_RETURN_VARIBLE(uint32_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetDeviceIdFromExceptionInfo,info);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetDeviceSatMode(aclrtFloatOverflowMode* mode){
    BEGIN_FUNC_HOOK(aclrtGetDeviceSatMode);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetDeviceSatMode, mode);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetDeviceSatMode,mode);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetDeviceUtilizationRate(int32_t deviceId, aclrtUtilizationInfo* utilizationInfo){
    BEGIN_FUNC_HOOK(aclrtGetDeviceUtilizationRate);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetDeviceUtilizationRate, deviceId, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetDeviceUtilizationRate,deviceId, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
uint32_t aclrtGetErrorCodeFromExceptionInfo(const aclrtExceptionInfo* info){
    BEGIN_FUNC_HOOK(aclrtGetErrorCodeFromExceptionInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetErrorCodeFromExceptionInfo, info);
    #else
        DEFINE_RETURN_VARIBLE(uint32_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetErrorCodeFromExceptionInfo,info);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetGroupCount(uint32_t* count){
    BEGIN_FUNC_HOOK(aclrtGetGroupCount);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetGroupCount, count);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetGroupCount,count);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetGroupInfoDetail(const aclrtGroupInfo* groupInfo, int32_t groupIndex, aclrtGroupAttr attr, void* attrValue, size_t valueLen, size_t* paramRetSize){
    BEGIN_FUNC_HOOK(aclrtGetGroupInfoDetail);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetGroupInfoDetail, groupInfo, , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetGroupInfoDetail,groupInfo, , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetMemInfo(aclrtMemAttr attr, size_t* free, size_t* total){
    BEGIN_FUNC_HOOK(aclrtGetMemInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetMemInfo, attr, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetMemInfo,attr, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetOverflowStatus(void* outputAddr, size_t outputSize, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtGetOverflowStatus);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetOverflowStatus, outputAddr, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetOverflowStatus,outputAddr, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetRunMode(aclrtRunMode* runMode){
    BEGIN_FUNC_HOOK(aclrtGetRunMode);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetRunMode, runMode);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetRunMode,runMode);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
const char* aclrtGetSocName(){
    BEGIN_FUNC_HOOK(aclrtGetSocName);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetSocName);
    #else
        DEFINE_RETURN_VARIBLE(const char*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetSocName,);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
uint32_t aclrtGetStreamIdFromExceptionInfo(const aclrtExceptionInfo* info){
    BEGIN_FUNC_HOOK(aclrtGetStreamIdFromExceptionInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetStreamIdFromExceptionInfo, info);
    #else
        DEFINE_RETURN_VARIBLE(uint32_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetStreamIdFromExceptionInfo,info);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetStreamOverflowSwitch(aclrtStream stream, uint32_t* flag){
    BEGIN_FUNC_HOOK(aclrtGetStreamOverflowSwitch);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetStreamOverflowSwitch, stream, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetStreamOverflowSwitch,stream, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
uint32_t aclrtGetTaskIdFromExceptionInfo(const aclrtExceptionInfo* info){
    BEGIN_FUNC_HOOK(aclrtGetTaskIdFromExceptionInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetTaskIdFromExceptionInfo, info);
    #else
        DEFINE_RETURN_VARIBLE(uint32_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetTaskIdFromExceptionInfo,info);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
uint32_t aclrtGetThreadIdFromExceptionInfo(const aclrtExceptionInfo* info){
    BEGIN_FUNC_HOOK(aclrtGetThreadIdFromExceptionInfo);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetThreadIdFromExceptionInfo, info);
    #else
        DEFINE_RETURN_VARIBLE(uint32_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetThreadIdFromExceptionInfo,info);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtGetVersion(int32_t* majorVersion, int32_t* minorVersion, int32_t* patchVersion){
    BEGIN_FUNC_HOOK(aclrtGetVersion);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtGetVersion, majorVersion, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetVersion,majorVersion, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtLaunchCallback(aclrtCallback fn, void* userData, aclrtCallbackBlockType blockType, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtLaunchCallback);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtLaunchCallback, fn, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtLaunchCallback,fn, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtLaunchKernel(aclrtFuncHandle funcHandle, uint32_t blockDim, const void* argsData, size_t argsSize, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtLaunchKernel);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtLaunchKernel, funcHandle, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtLaunchKernel,funcHandle, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMalloc(void** devPtr, size_t size, aclrtMemMallocPolicy policy){
    BEGIN_FUNC_HOOK(aclrtMalloc);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMalloc, devPtr, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMalloc,devPtr, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMallocAlign32(void** devPtr, size_t size, aclrtMemMallocPolicy policy){
    BEGIN_FUNC_HOOK(aclrtMallocAlign32);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMallocAlign32, devPtr, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMallocAlign32,devPtr, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMallocCached(void** devPtr, size_t size, aclrtMemMallocPolicy policy){
    BEGIN_FUNC_HOOK(aclrtMallocCached);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMallocCached, devPtr, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMallocCached,devPtr, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMallocHost(void** hostPtr, size_t size){
    BEGIN_FUNC_HOOK(aclrtMallocHost);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMallocHost, hostPtr, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMallocHost,hostPtr, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMallocPhysical(aclrtDrvMemHandle* handle, size_t size, const aclrtPhysicalMemProp* prop, uint64_t flags){
    BEGIN_FUNC_HOOK(aclrtMallocPhysical);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMallocPhysical, handle, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMallocPhysical,handle, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMapMem(void* virPtr, size_t size, size_t offset, aclrtDrvMemHandle handle, uint64_t flags){
    BEGIN_FUNC_HOOK(aclrtMapMem);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMapMem, virPtr, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMapMem,virPtr, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemExportToShareableHandle(aclrtDrvMemHandle handle, aclrtMemHandleType handleType, uint64_t flags, uint64_t* shareableHandle){
    BEGIN_FUNC_HOOK(aclrtMemExportToShareableHandle);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemExportToShareableHandle, handle, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemExportToShareableHandle,handle, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemFlush(void* devPtr, size_t size){
    BEGIN_FUNC_HOOK(aclrtMemFlush);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemFlush, devPtr, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemFlush,devPtr, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemGetAllocationGranularity(aclrtPhysicalMemProp* prop, aclrtMemGranularityOptions option, size_t* granularity){
    BEGIN_FUNC_HOOK(aclrtMemGetAllocationGranularity);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemGetAllocationGranularity, prop, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemGetAllocationGranularity,prop, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemImportFromShareableHandle(uint64_t shareableHandle, int32_t deviceId, aclrtDrvMemHandle* handle){
    BEGIN_FUNC_HOOK(aclrtMemImportFromShareableHandle);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemImportFromShareableHandle, shareableHandle, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemImportFromShareableHandle,shareableHandle, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemInvalidate(void* devPtr, size_t size){
    BEGIN_FUNC_HOOK(aclrtMemInvalidate);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemInvalidate, devPtr, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemInvalidate,devPtr, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemSetPidToShareableHandle(uint64_t shareableHandle, int32_t* pid, size_t pidNum){
    BEGIN_FUNC_HOOK(aclrtMemSetPidToShareableHandle);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemSetPidToShareableHandle, shareableHandle, , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemSetPidToShareableHandle,shareableHandle, , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemcpy(void* dst, size_t destMax, const void* src, size_t count, aclrtMemcpyKind kind){
    BEGIN_FUNC_HOOK(aclrtMemcpy);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemcpy, dst, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemcpy,dst, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemcpy2d(void* dst, size_t dpitch, const void* src, size_t spitch, size_t width, size_t height, aclrtMemcpyKind kind){
    BEGIN_FUNC_HOOK(aclrtMemcpy2d);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemcpy2d, dst, , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemcpy2d,dst, , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemcpy2dAsync(void* dst, size_t dpitch, const void* src, size_t spitch, size_t width, size_t height, aclrtMemcpyKind kind, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtMemcpy2dAsync);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemcpy2dAsync, dst, , , , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemcpy2dAsync,dst, , , , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemcpyAsync(void* dst, size_t destMax, const void* src, size_t count, aclrtMemcpyKind kind, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtMemcpyAsync);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemcpyAsync, dst, , , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemcpyAsync,dst, , , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemset(void* devPtr, size_t maxCount, int32_t value, size_t count){
    BEGIN_FUNC_HOOK(aclrtMemset);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemset, devPtr, , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemset,devPtr, , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtMemsetAsync(void* devPtr, size_t maxCount, int32_t value, size_t count, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtMemsetAsync);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtMemsetAsync, devPtr, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemsetAsync,devPtr, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtProcessReport(int32_t timeout){
    BEGIN_FUNC_HOOK(aclrtProcessReport);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtProcessReport, timeout);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtProcessReport,timeout);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtQueryDeviceStatus(int32_t deviceId, aclrtDeviceStatus* deviceStatus){
    BEGIN_FUNC_HOOK(aclrtQueryDeviceStatus);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtQueryDeviceStatus, deviceId, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtQueryDeviceStatus,deviceId, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtQueryEvent(aclrtEvent event, aclrtEventStatus* status){
    BEGIN_FUNC_HOOK(aclrtQueryEvent);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtQueryEvent, event, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtQueryEvent,event, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtQueryEventStatus(aclrtEvent event, aclrtEventRecordedStatus* status){
    BEGIN_FUNC_HOOK(aclrtQueryEventStatus);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtQueryEventStatus, event, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtQueryEventStatus,event, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtQueryEventWaitStatus(aclrtEvent event, aclrtEventWaitStatus* status){
    BEGIN_FUNC_HOOK(aclrtQueryEventWaitStatus);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtQueryEventWaitStatus, event, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtQueryEventWaitStatus,event, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtRecordEvent(aclrtEvent event, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtRecordEvent);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtRecordEvent, event, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtRecordEvent,event, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtReleaseMemAddress(void* virPtr){
    BEGIN_FUNC_HOOK(aclrtReleaseMemAddress);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtReleaseMemAddress, virPtr);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtReleaseMemAddress,virPtr);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtReserveMemAddress(void** virPtr, size_t size, size_t alignment, void* expectPtr, uint64_t flags){
    BEGIN_FUNC_HOOK(aclrtReserveMemAddress);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtReserveMemAddress, virPtr, , , , );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtReserveMemAddress,virPtr, , , , );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSetDevice(int32_t deviceId){
    BEGIN_FUNC_HOOK(aclrtSetDevice);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSetDevice, deviceId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSetDevice,deviceId);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSetDeviceSatMode(aclrtFloatOverflowMode mode){
    BEGIN_FUNC_HOOK(aclrtSetDeviceSatMode);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSetDeviceSatMode, mode);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSetDeviceSatMode,mode);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSetExceptionInfoCallback(aclrtExceptionInfoCallback callback){
    BEGIN_FUNC_HOOK(aclrtSetExceptionInfoCallback);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSetExceptionInfoCallback, callback);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSetExceptionInfoCallback,callback);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSetGroup(int32_t groupId){
    BEGIN_FUNC_HOOK(aclrtSetGroup);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSetGroup, groupId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSetGroup,groupId);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSetOpExecuteTimeOut(uint32_t timeout){
    BEGIN_FUNC_HOOK(aclrtSetOpExecuteTimeOut);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSetOpExecuteTimeOut, timeout);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSetOpExecuteTimeOut,timeout);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSetOpWaitTimeout(uint32_t timeout){
    BEGIN_FUNC_HOOK(aclrtSetOpWaitTimeout);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSetOpWaitTimeout, timeout);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSetOpWaitTimeout,timeout);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSetStreamFailureMode(aclrtStream stream, uint64_t mode){
    BEGIN_FUNC_HOOK(aclrtSetStreamFailureMode);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSetStreamFailureMode, stream, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSetStreamFailureMode,stream, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSetStreamOverflowSwitch(aclrtStream stream, uint32_t flag){
    BEGIN_FUNC_HOOK(aclrtSetStreamOverflowSwitch);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSetStreamOverflowSwitch, stream, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSetStreamOverflowSwitch,stream, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSetTsDevice(aclrtTsId tsId){
    BEGIN_FUNC_HOOK(aclrtSetTsDevice);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSetTsDevice, tsId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSetTsDevice,tsId);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtStreamQuery(aclrtStream stream, aclrtStreamStatus* status){
    BEGIN_FUNC_HOOK(aclrtStreamQuery);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtStreamQuery, stream, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtStreamQuery,stream, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtStreamWaitEvent(aclrtStream stream, aclrtEvent event){
    BEGIN_FUNC_HOOK(aclrtStreamWaitEvent);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtStreamWaitEvent, stream, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtStreamWaitEvent,stream, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSubscribeReport(uint64_t threadId, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtSubscribeReport);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSubscribeReport, threadId, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSubscribeReport,threadId, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSynchronizeDevice(void){
    BEGIN_FUNC_HOOK(aclrtSynchronizeDevice);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSynchronizeDevice, void);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSynchronizeDevice,void);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSynchronizeEvent(aclrtEvent event){
    BEGIN_FUNC_HOOK(aclrtSynchronizeEvent);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSynchronizeEvent, event);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSynchronizeEvent,event);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSynchronizeEventWithTimeout(aclrtEvent event, int32_t timeout){
    BEGIN_FUNC_HOOK(aclrtSynchronizeEventWithTimeout);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSynchronizeEventWithTimeout, event, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSynchronizeEventWithTimeout,event, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSynchronizeStream(aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtSynchronizeStream);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSynchronizeStream, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSynchronizeStream,stream);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtSynchronizeStreamWithTimeout(aclrtStream stream, int32_t timeout){
    BEGIN_FUNC_HOOK(aclrtSynchronizeStreamWithTimeout);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtSynchronizeStreamWithTimeout, stream, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSynchronizeStreamWithTimeout,stream, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtUnSubscribeReport(uint64_t threadId, aclrtStream stream){
    BEGIN_FUNC_HOOK(aclrtUnSubscribeReport);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtUnSubscribeReport, threadId, );
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtUnSubscribeReport,threadId, );
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
aclError aclrtUnmapMem(void* virPtr){
    BEGIN_FUNC_HOOK(aclrtUnmapMem);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclrtUnmapMem, virPtr);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtUnmapMem,virPtr);
        #ifdef CHECK_ACL_RESULT_ON
            CHECK_ACL_RESULT(result);
        #endif
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return result;
}
