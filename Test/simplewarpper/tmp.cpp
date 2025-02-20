 #include <acl/acl.h>
#include <acl/acl_op.h>
#include <acl/acl_rt.h>
#include <acl/acl_op_compiler.h>
#include "../../src/common.h"

DEFFUNCV(aclAppLog);
DEFFTYPE(void, aclAppLog, aclLogLevel logLevel, const char* func, const char* file, uint32_t line, const char* fmt, ...);
DEFFUNCV(aclCreateDataBuffer);
DEFFTYPE(aclDataBuffer*, aclCreateDataBuffer, void* data, size_t size);
DEFFUNCV(aclCreateGraphDumpOpt);
DEFFTYPE(aclGraphDumpOption*, aclCreateGraphDumpOpt);
DEFFUNCV(aclCreateTensorDesc);
DEFFTYPE(aclTensorDesc*, aclCreateTensorDesc, aclDataType dataType, int numDims, const int64_t* dims, aclFormat format);
DEFFUNCV(aclDataTypeSize);
DEFFTYPE(size_t, aclDataTypeSize, aclDataType dataType);
DEFFUNCV(aclDestroyDataBuffer);
DEFFTYPE(aclError, aclDestroyDataBuffer, const aclDataBuffer* dataBuffer);
DEFFUNCV(aclDestroyGraphDumpOpt);
DEFFTYPE(aclError, aclDestroyGraphDumpOpt, const aclGraphDumpOption* graphDumpOpt);
DEFFUNCV(aclDestroyTensorDesc);
DEFFTYPE(void, aclDestroyTensorDesc, const aclTensorDesc* desc);
DEFFUNCV(aclFinalize);
DEFFTYPE(aclError, aclFinalize);
DEFFUNCV(aclFloat16ToFloat);
DEFFTYPE(float, aclFloat16ToFloat, aclFloat16 value);
DEFFUNCV(aclFloatToFloat16);
DEFFTYPE(aclFloat16, aclFloatToFloat16, float value);
DEFFUNCV(aclGenGraphAndDumpForOp);
DEFFTYPE(aclError, aclGenGraphAndDumpForOp, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclopEngineType engineType, const char* graphDumpPath, const aclGraphDumpOption* graphDumpOpt);
DEFFUNCV(aclGetCannAttribute);
DEFFTYPE(aclError, aclGetCannAttribute, aclCannAttr cannAttr, int32_t* value);
DEFFUNCV(aclGetCannAttributeList);
DEFFTYPE(aclError, aclGetCannAttributeList, const aclCannAttr** cannAttrList, size_t* num);
DEFFUNCV(aclGetCompileopt);
DEFFTYPE(aclError, aclGetCompileopt, aclCompileOpt opt, char* value, size_t length);
DEFFUNCV(aclGetCompileoptSize);
DEFFTYPE(size_t, aclGetCompileoptSize, aclCompileOpt opt);
DEFFUNCV(aclGetDataBufferAddr);
DEFFTYPE(void*, aclGetDataBufferAddr, const aclDataBuffer* dataBuffer);
DEFFUNCV(aclGetDataBufferSize);
DEFFTYPE(uint32_t, aclGetDataBufferSize, const aclDataBuffer* dataBuffer);
DEFFUNCV(aclGetDataBufferSizeV2);
DEFFTYPE(size_t, aclGetDataBufferSizeV2, const aclDataBuffer* dataBuffer);
DEFFUNCV(aclGetDeviceCapability);
DEFFTYPE(aclError, aclGetDeviceCapability, uint32_t deviceId, aclDeviceInfo deviceInfo, int64_t* value);
DEFFUNCV(aclGetRecentErrMsg);
DEFFTYPE(const char*, aclGetRecentErrMsg);
DEFFUNCV(aclGetTensorDescAddress);
DEFFTYPE(void*, aclGetTensorDescAddress, const aclTensorDesc* desc);
DEFFUNCV(aclGetTensorDescByIndex);
DEFFTYPE(aclTensorDesc*, aclGetTensorDescByIndex, aclTensorDesc* desc, size_t index);
DEFFUNCV(aclGetTensorDescDim);
DEFFTYPE(int64_t, aclGetTensorDescDim, const aclTensorDesc* desc, size_t index);
DEFFUNCV(aclGetTensorDescDimRange);
DEFFTYPE(aclError, aclGetTensorDescDimRange, const aclTensorDesc* desc, size_t index, size_t dimRangeNum, int64_t* dimRange);
DEFFUNCV(aclGetTensorDescDimV2);
DEFFTYPE(aclError, aclGetTensorDescDimV2, const aclTensorDesc* desc, size_t index, int64_t* dimSize);
DEFFUNCV(aclGetTensorDescElementCount);
DEFFTYPE(size_t, aclGetTensorDescElementCount, const aclTensorDesc* desc);
DEFFUNCV(aclGetTensorDescFormat);
DEFFTYPE(aclFormat, aclGetTensorDescFormat, const aclTensorDesc* desc);
DEFFUNCV(aclGetTensorDescName);
DEFFTYPE(const char*, aclGetTensorDescName, aclTensorDesc* desc);
DEFFUNCV(aclGetTensorDescNumDims);
DEFFTYPE(size_t, aclGetTensorDescNumDims, const aclTensorDesc* desc);
DEFFUNCV(aclGetTensorDescSize);
DEFFTYPE(size_t, aclGetTensorDescSize, const aclTensorDesc* desc);
DEFFUNCV(aclGetTensorDescType);
DEFFTYPE(aclDataType, aclGetTensorDescType, const aclTensorDesc* desc);
DEFFUNCV(aclInit);
DEFFTYPE(aclError, aclInit, const char* configPath);
aclInitTensor cnt == 0
aclRfft1D cnt == 0
aclRfft1DGetWorkspaceSize cnt == 0
DEFFUNCV(aclSetCompileopt);
DEFFTYPE(aclError, aclSetCompileopt, aclCompileOpt opt, const char* value);
DEFFUNCV(aclSetTensorConst);
DEFFTYPE(aclError, aclSetTensorConst, aclTensorDesc* desc, void* dataBuffer, size_t length);
DEFFUNCV(aclSetTensorDescName);
DEFFTYPE(void, aclSetTensorDescName, aclTensorDesc* desc, const char* name);
DEFFUNCV(aclSetTensorDynamicInput);
DEFFTYPE(aclError, aclSetTensorDynamicInput, aclTensorDesc* desc, const char* dynamicInputName);
DEFFUNCV(aclSetTensorFormat);
DEFFTYPE(aclError, aclSetTensorFormat, aclTensorDesc* desc, aclFormat format);
DEFFUNCV(aclSetTensorOriginFormat);
DEFFTYPE(aclError, aclSetTensorOriginFormat, aclTensorDesc* desc, aclFormat format);
DEFFUNCV(aclSetTensorOriginShape);
DEFFTYPE(aclError, aclSetTensorOriginShape, aclTensorDesc* desc, int numDims, const int64_t* dims);
DEFFUNCV(aclSetTensorPlaceMent);
DEFFTYPE(aclError, aclSetTensorPlaceMent, aclTensorDesc* desc, aclMemType memType);
DEFFUNCV(aclSetTensorShape);
DEFFTYPE(aclError, aclSetTensorShape, aclTensorDesc* desc, int numDims, const int64_t* dims);
DEFFUNCV(aclSetTensorShapeRange);
DEFFTYPE(aclError, aclSetTensorShapeRange, aclTensorDesc* desc, size_t dimsCount, int64_t dimsRange[][ACL_TENSOR_SHAPE_RANGE_NUM]);
DEFFUNCV(aclSetTensorStorageFormat);
DEFFTYPE(aclError, aclSetTensorStorageFormat, aclTensorDesc* desc, aclFormat format);
DEFFUNCV(aclSetTensorStorageShape);
DEFFTYPE(aclError, aclSetTensorStorageShape, aclTensorDesc* desc, int numDims, const int64_t* dims);
DEFFUNCV(aclSetTensorValueRange);
DEFFTYPE(aclError, aclSetTensorValueRange, aclTensorDesc* desc, size_t valueCount, int64_t valueRange[][ACL_TENSOR_VALUE_RANGE_NUM]);
aclStft cnt == 0
aclStftGetWorkspaceSize cnt == 0
DEFFUNCV(aclTransTensorDescFormat);
DEFFTYPE(aclError, aclTransTensorDescFormat, const aclTensorDesc* srcDesc, aclFormat dstFormat, aclTensorDesc** dstDesc);
DEFFUNCV(aclUpdateDataBuffer);
DEFFTYPE(aclError, aclUpdateDataBuffer, aclDataBuffer* dataBuffer, void* data, size_t size);
acldumpRegCallback cnt == 0
acldumpUnregCallback cnt == 0
aclgrphProfGraphSubscribe cnt == 0
aclgrphProfGraphUnSubscribe cnt == 0
DEFFUNCV(aclmdlAddDatasetBuffer);
DEFFTYPE(aclError, aclmdlAddDatasetBuffer, aclmdlDataset* dataset, aclDataBuffer* dataBuffer);
DEFFUNCV(aclmdlCreateAIPP);
DEFFTYPE(aclmdlAIPP*, aclmdlCreateAIPP, uint64_t batchSize);
DEFFUNCV(aclmdlCreateAndGetOpDesc);
DEFFTYPE(aclError, aclmdlCreateAndGetOpDesc, uint32_t deviceId, uint32_t streamId, uint32_t taskId, char* opName, size_t opNameLen, aclTensorDesc** inputDesc, size_t* numInputs, aclTensorDesc** outputDesc, size_t* numOutputs);
DEFFUNCV(aclmdlCreateConfigHandle);
DEFFTYPE(aclmdlConfigHandle*, aclmdlCreateConfigHandle);
DEFFUNCV(aclmdlCreateDataset);
DEFFTYPE(aclmdlDataset*, aclmdlCreateDataset);
DEFFUNCV(aclmdlCreateDesc);
DEFFTYPE(aclmdlDesc*, aclmdlCreateDesc);
DEFFUNCV(aclmdlCreateExecConfigHandle);
DEFFTYPE(aclmdlExecConfigHandle*, aclmdlCreateExecConfigHandle);
DEFFUNCV(aclmdlDestroyAIPP);
DEFFTYPE(aclError, aclmdlDestroyAIPP, const aclmdlAIPP* aippParmsSet);
DEFFUNCV(aclmdlDestroyConfigHandle);
DEFFTYPE(aclError, aclmdlDestroyConfigHandle, aclmdlConfigHandle* handle);
DEFFUNCV(aclmdlDestroyDataset);
DEFFTYPE(aclError, aclmdlDestroyDataset, const aclmdlDataset* dataset);
DEFFUNCV(aclmdlDestroyDesc);
DEFFTYPE(aclError, aclmdlDestroyDesc, aclmdlDesc* modelDesc);
DEFFUNCV(aclmdlDestroyExecConfigHandle);
DEFFTYPE(aclError, aclmdlDestroyExecConfigHandle, const aclmdlExecConfigHandle* handle);
DEFFUNCV(aclmdlExecute);
DEFFTYPE(aclError, aclmdlExecute, uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output);
DEFFUNCV(aclmdlExecuteAsync);
DEFFTYPE(aclError, aclmdlExecuteAsync, uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output, aclrtStream stream);
DEFFUNCV(aclmdlExecuteV2);
DEFFTYPE(aclError, aclmdlExecuteV2, uint32_t modelId, const aclmdlDataset* input, aclmdlDataset* output, aclrtStream stream, const aclmdlExecConfigHandle* handle);
DEFFUNCV(aclmdlFinalizeDump);
DEFFTYPE(aclError, aclmdlFinalizeDump);
DEFFUNCV(aclmdlGetAippDataSize);
DEFFTYPE(aclError, aclmdlGetAippDataSize, uint64_t batchSize, size_t* size);
DEFFUNCV(aclmdlGetAippType);
DEFFTYPE(aclError, aclmdlGetAippType, uint32_t modelId, size_t index, aclmdlInputAippType* type, size_t* dynamicAttachedDataIndex);
DEFFUNCV(aclmdlGetCurOutputDims);
DEFFTYPE(aclError, aclmdlGetCurOutputDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFUNCV(aclmdlGetDatasetBuffer);
DEFFTYPE(aclDataBuffer*, aclmdlGetDatasetBuffer, const aclmdlDataset* dataset, size_t index);
DEFFUNCV(aclmdlGetDatasetNumBuffers);
DEFFTYPE(size_t, aclmdlGetDatasetNumBuffers, const aclmdlDataset* dataset);
DEFFUNCV(aclmdlGetDatasetTensorDesc);
DEFFTYPE(aclTensorDesc*, aclmdlGetDatasetTensorDesc, const aclmdlDataset* dataset, size_t index);
DEFFUNCV(aclmdlGetDesc);
DEFFTYPE(aclError, aclmdlGetDesc, aclmdlDesc* modelDesc, uint32_t modelId);
DEFFUNCV(aclmdlGetDynamicBatch);
DEFFTYPE(aclError, aclmdlGetDynamicBatch, const aclmdlDesc* modelDesc, aclmdlBatch* batch);
DEFFUNCV(aclmdlGetDynamicHW);
DEFFTYPE(aclError, aclmdlGetDynamicHW, const aclmdlDesc* modelDesc, size_t index, aclmdlHW* hw);
DEFFUNCV(aclmdlGetFirstAippInfo);
DEFFTYPE(aclError, aclmdlGetFirstAippInfo, uint32_t modelId, size_t index, aclAippInfo* aippInfo);
DEFFUNCV(aclmdlGetInputDataType);
DEFFTYPE(aclDataType, aclmdlGetInputDataType, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclmdlGetInputDims);
DEFFTYPE(aclError, aclmdlGetInputDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFUNCV(aclmdlGetInputDimsV2);
DEFFTYPE(aclError, aclmdlGetInputDimsV2, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFUNCV(aclmdlGetInputDynamicDims);
DEFFTYPE(aclError, aclmdlGetInputDynamicDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims, size_t gearCount);
DEFFUNCV(aclmdlGetInputDynamicGearCount);
DEFFTYPE(aclError, aclmdlGetInputDynamicGearCount, const aclmdlDesc* modelDesc, size_t index, size_t* gearCount);
DEFFUNCV(aclmdlGetInputFormat);
DEFFTYPE(aclFormat, aclmdlGetInputFormat, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclmdlGetInputIndexByName);
DEFFTYPE(aclError, aclmdlGetInputIndexByName, const aclmdlDesc* modelDesc, const char* name, size_t* index);
DEFFUNCV(aclmdlGetInputNameByIndex);
DEFFTYPE(const char*, aclmdlGetInputNameByIndex, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclmdlGetInputSizeByIndex);
DEFFTYPE(size_t, aclmdlGetInputSizeByIndex, aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclmdlGetNumInputs);
DEFFTYPE(size_t, aclmdlGetNumInputs, aclmdlDesc* modelDesc);
DEFFUNCV(aclmdlGetNumOutputs);
DEFFTYPE(size_t, aclmdlGetNumOutputs, aclmdlDesc* modelDesc);
DEFFUNCV(aclmdlGetOpAttr);
DEFFTYPE(const char*, aclmdlGetOpAttr, aclmdlDesc* modelDesc, const char* opName, const char* attr);
DEFFUNCV(aclmdlGetOutputDataType);
DEFFTYPE(aclDataType, aclmdlGetOutputDataType, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclmdlGetOutputDims);
DEFFTYPE(aclError, aclmdlGetOutputDims, const aclmdlDesc* modelDesc, size_t index, aclmdlIODims* dims);
DEFFUNCV(aclmdlGetOutputFormat);
DEFFTYPE(aclFormat, aclmdlGetOutputFormat, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclmdlGetOutputIndexByName);
DEFFTYPE(aclError, aclmdlGetOutputIndexByName, const aclmdlDesc* modelDesc, const char* name, size_t* index);
DEFFUNCV(aclmdlGetOutputNameByIndex);
DEFFTYPE(const char*, aclmdlGetOutputNameByIndex, const aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclmdlGetOutputSizeByIndex);
DEFFTYPE(size_t, aclmdlGetOutputSizeByIndex, aclmdlDesc* modelDesc, size_t index);
DEFFUNCV(aclmdlGetTensorRealName);
DEFFTYPE(const char*, aclmdlGetTensorRealName, const aclmdlDesc* modelDesc, const char* name);
DEFFUNCV(aclmdlInitDump);
DEFFTYPE(aclError, aclmdlInitDump);
DEFFUNCV(aclmdlLoadFromFile);
DEFFTYPE(aclError, aclmdlLoadFromFile, const char* modelPath, uint32_t* modelId);
DEFFUNCV(aclmdlLoadFromFileWithMem);
DEFFTYPE(aclError, aclmdlLoadFromFileWithMem, const char* modelPath, uint32_t* modelId, void* workPtr, size_t workSize, void* weightPtr, size_t weightSize);
DEFFUNCV(aclmdlLoadFromFileWithQ);
DEFFTYPE(aclError, aclmdlLoadFromFileWithQ, const char* modelPath, uint32_t* modelId, const uint32_t* inputQ, size_t inputQNum, const uint32_t* outputQ, size_t outputQNum);
DEFFUNCV(aclmdlLoadFromMem);
DEFFTYPE(aclError, aclmdlLoadFromMem, const void* model, size_t modelSize, uint32_t* modelId);
DEFFUNCV(aclmdlLoadFromMemWithMem);
DEFFTYPE(aclError, aclmdlLoadFromMemWithMem, const void* model, size_t modelSize, uint32_t* modelId, void* workPtr, size_t workSize, void* weightPtr, size_t weightSize);
DEFFUNCV(aclmdlLoadFromMemWithQ);
DEFFTYPE(aclError, aclmdlLoadFromMemWithQ, const void* model, size_t modelSize, uint32_t* modelId, const uint32_t* inputQ, size_t inputQNum, const uint32_t* outputQ, size_t outputQNum);
DEFFUNCV(aclmdlLoadWithConfig);
DEFFTYPE(aclError, aclmdlLoadWithConfig, const aclmdlConfigHandle* handle, uint32_t* modelId);
DEFFUNCV(aclmdlQuerySize);
DEFFTYPE(aclError, aclmdlQuerySize, const char* fileName, size_t* workSize, size_t* weightSize);
DEFFUNCV(aclmdlQuerySizeFromMem);
DEFFTYPE(aclError, aclmdlQuerySizeFromMem, const void* model, size_t modelSize, size_t* workSize, size_t* weightSize);
DEFFUNCV(aclmdlSetAIPPAxSwapSwitch);
DEFFTYPE(aclError, aclmdlSetAIPPAxSwapSwitch, aclmdlAIPP* aippParmsSet, int8_t axSwapSwitch);
DEFFUNCV(aclmdlSetAIPPByInputIndex);
DEFFTYPE(aclError, aclmdlSetAIPPByInputIndex, uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlAIPP* aippParmsSet);
DEFFUNCV(aclmdlSetAIPPCropParams);
DEFFTYPE(aclError, aclmdlSetAIPPCropParams, aclmdlAIPP* aippParmsSet, int8_t cropSwitch, int32_t cropStartPosW, int32_t cropStartPosH, int32_t cropSizeW, int32_t cropSizeH, uint64_t batchIndex);
DEFFUNCV(aclmdlSetAIPPCscParams);
DEFFTYPE(aclError, aclmdlSetAIPPCscParams, aclmdlAIPP* aippParmsSet, int8_t cscSwitch, int16_t cscMatrixR0C0, int16_t cscMatrixR0C1, int16_t cscMatrixR0C2, int16_t cscMatrixR1C0, int16_t cscMatrixR1C1, int16_t cscMatrixR1C2, int16_t cscMatrixR2C0, int16_t cscMatrixR2C1, int16_t cscMatrixR2C2, uint8_t cscOutputBiasR0, uint8_t cscOutputBiasR1, uint8_t cscOutputBiasR2, uint8_t cscInputBiasR0, uint8_t cscInputBiasR1, uint8_t cscInputBiasR2);
DEFFUNCV(aclmdlSetAIPPDtcPixelMean);
DEFFTYPE(aclError, aclmdlSetAIPPDtcPixelMean, aclmdlAIPP* aippParmsSet, int16_t dtcPixelMeanChn0, int16_t dtcPixelMeanChn1, int16_t dtcPixelMeanChn2, int16_t dtcPixelMeanChn3, uint64_t batchIndex);
DEFFUNCV(aclmdlSetAIPPDtcPixelMin);
DEFFTYPE(aclError, aclmdlSetAIPPDtcPixelMin, aclmdlAIPP* aippParmsSet, float dtcPixelMinChn0, float dtcPixelMinChn1, float dtcPixelMinChn2, float dtcPixelMinChn3, uint64_t batchIndex);
DEFFUNCV(aclmdlSetAIPPInputFormat);
DEFFTYPE(aclError, aclmdlSetAIPPInputFormat, aclmdlAIPP* aippParmsSet, aclAippInputFormat inputFormat);
DEFFUNCV(aclmdlSetAIPPPaddingParams);
DEFFTYPE(aclError, aclmdlSetAIPPPaddingParams, aclmdlAIPP* aippParmsSet, int8_t paddingSwitch, int32_t paddingSizeTop, int32_t paddingSizeBottom, int32_t paddingSizeLeft, int32_t paddingSizeRight, uint64_t batchIndex);
DEFFUNCV(aclmdlSetAIPPPixelVarReci);
DEFFTYPE(aclError, aclmdlSetAIPPPixelVarReci, aclmdlAIPP* aippParmsSet, float dtcPixelVarReciChn0, float dtcPixelVarReciChn1, float dtcPixelVarReciChn2, float dtcPixelVarReciChn3, uint64_t batchIndex);
DEFFUNCV(aclmdlSetAIPPRbuvSwapSwitch);
DEFFTYPE(aclError, aclmdlSetAIPPRbuvSwapSwitch, aclmdlAIPP* aippParmsSet, int8_t rbuvSwapSwitch);
DEFFUNCV(aclmdlSetAIPPScfParams);
DEFFTYPE(aclError, aclmdlSetAIPPScfParams, aclmdlAIPP* aippParmsSet, int8_t scfSwitch, int32_t scfInputSizeW, int32_t scfInputSizeH, int32_t scfOutputSizeW, int32_t scfOutputSizeH, uint64_t batchIndex);
DEFFUNCV(aclmdlSetAIPPSrcImageSize);
DEFFTYPE(aclError, aclmdlSetAIPPSrcImageSize, aclmdlAIPP* aippParmsSet, int32_t srcImageSizeW, int32_t srcImageSizeH);
DEFFUNCV(aclmdlSetConfigOpt);
DEFFTYPE(aclError, aclmdlSetConfigOpt, aclmdlConfigHandle* handle, aclmdlConfigAttr attr, const void* attrValue, size_t valueSize);
DEFFUNCV(aclmdlSetDatasetTensorDesc);
DEFFTYPE(aclError, aclmdlSetDatasetTensorDesc, aclmdlDataset* dataset, aclTensorDesc* tensorDesc, size_t index);
DEFFUNCV(aclmdlSetDump);
DEFFTYPE(aclError, aclmdlSetDump, const char* dumpCfgPath);
DEFFUNCV(aclmdlSetDynamicBatchSize);
DEFFTYPE(aclError, aclmdlSetDynamicBatchSize, uint32_t modelId, aclmdlDataset* dataset, size_t index, uint64_t batchSize);
DEFFUNCV(aclmdlSetDynamicHWSize);
DEFFTYPE(aclError, aclmdlSetDynamicHWSize, uint32_t modelId, aclmdlDataset* dataset, size_t index, uint64_t height, uint64_t width);
DEFFUNCV(aclmdlSetExecConfigOpt);
DEFFTYPE(aclError, aclmdlSetExecConfigOpt, aclmdlExecConfigHandle* handle, aclmdlExecConfigAttr attr, const void* attrValue, size_t valueSize);
DEFFUNCV(aclmdlSetInputAIPP);
DEFFTYPE(aclError, aclmdlSetInputAIPP, uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlAIPP* aippParmsSet);
DEFFUNCV(aclmdlSetInputDynamicDims);
DEFFTYPE(aclError, aclmdlSetInputDynamicDims, uint32_t modelId, aclmdlDataset* dataset, size_t index, const aclmdlIODims* dims);
DEFFUNCV(aclmdlUnload);
DEFFTYPE(aclError, aclmdlUnload, uint32_t modelId);
DEFFUNCV(aclopCast);
DEFFTYPE(aclError, aclopCast, const aclTensorDesc* srcDesc, const aclDataBuffer* srcBuffer, const aclTensorDesc* dstDesc, aclDataBuffer* dstBuffer, uint8_t truncate, aclrtStream stream);
DEFFUNCV(aclopCompile);
DEFFTYPE(aclError, aclopCompile, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath);
DEFFUNCV(aclopCompileAndExecute);
DEFFTYPE(aclError, aclopCompileAndExecute, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath, aclrtStream stream);
DEFFUNCV(aclopCompileAndExecuteV2);
DEFFTYPE(aclError, aclopCompileAndExecuteV2, const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclDataBuffer* outputs[], aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag, const char* opPath, aclrtStream stream);
DEFFUNCV(aclopCreateAttr);
DEFFTYPE(aclopAttr*, aclopCreateAttr);
DEFFUNCV(aclopCreateHandle);
DEFFTYPE(aclError, aclopCreateHandle, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* opAttr, aclopHandle** handle);
DEFFUNCV(aclopCreateHandleForCast);
DEFFTYPE(aclError, aclopCreateHandleForCast, aclTensorDesc* srcDesc, aclTensorDesc* dstDesc, uint8_t truncate, aclopHandle** handle);
DEFFUNCV(aclopCreateKernel);
DEFFTYPE(aclError, aclopCreateKernel, const char* opType, const char* kernelId, const char* kernelName, void* binData, int binSize, aclopEngineType enginetype, aclDataDeallocator deallocator);
DEFFUNCV(aclopDestroyAttr);
DEFFTYPE(void, aclopDestroyAttr, const aclopAttr* attr);
DEFFUNCV(aclopDestroyHandle);
DEFFTYPE(void, aclopDestroyHandle, aclopHandle* handle);
DEFFUNCV(aclopExecWithHandle);
DEFFTYPE(aclError, aclopExecWithHandle, aclopHandle* handle, int numInputs, const aclDataBuffer* const inputs[], int numOutputs, aclDataBuffer* const outputs[], aclrtStream stream);
DEFFUNCV(aclopExecute);
DEFFTYPE(aclError, aclopExecute, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[], int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[], const aclopAttr* attr, aclrtStream stream);
DEFFUNCV(aclopExecuteV2);
DEFFTYPE(aclError, aclopExecuteV2, const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclDataBuffer* outputs[], aclopAttr* attr, aclrtStream stream);
DEFFUNCV(aclopInferShape);
DEFFTYPE(aclError, aclopInferShape, const char* opType, int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[], int numOutputs, aclTensorDesc* outputDesc[], aclopAttr* attr);
DEFFUNCV(aclopLoad);
DEFFTYPE(aclError, aclopLoad, const void* model, size_t modelSize);
DEFFUNCV(aclopRegisterCompileFunc);
DEFFTYPE(aclError, aclopRegisterCompileFunc, const char* opType, aclopCompileFunc func);
DEFFUNCV(aclopSetAttrBool);
DEFFTYPE(aclError, aclopSetAttrBool, aclopAttr* attr, const char* attrName, uint8_t attrValue);
DEFFUNCV(aclopSetAttrDataType);
DEFFTYPE(aclError, aclopSetAttrDataType, aclopAttr* attr, const char* attrName, aclDataType attrValue);
DEFFUNCV(aclopSetAttrFloat);
DEFFTYPE(aclError, aclopSetAttrFloat, aclopAttr* attr, const char* attrName, float attrValue);
DEFFUNCV(aclopSetAttrInt);
DEFFTYPE(aclError, aclopSetAttrInt, aclopAttr* attr, const char* attrName, int64_t attrValue);
DEFFUNCV(aclopSetAttrListBool);
DEFFTYPE(aclError, aclopSetAttrListBool, aclopAttr* attr, const char* attrName, int numValues, const uint8_t* values);
DEFFUNCV(aclopSetAttrListDataType);
DEFFTYPE(aclError, aclopSetAttrListDataType, aclopAttr* attr, const char* attrName, int numValues, const aclDataType values[]);
DEFFUNCV(aclopSetAttrListFloat);
DEFFTYPE(aclError, aclopSetAttrListFloat, aclopAttr* attr, const char* attrName, int numValues, const float* values);
DEFFUNCV(aclopSetAttrListInt);
DEFFTYPE(aclError, aclopSetAttrListInt, aclopAttr* attr, const char* attrName, int numValues, const int64_t* values);
DEFFUNCV(aclopSetAttrListListInt);
DEFFTYPE(aclError, aclopSetAttrListListInt, aclopAttr* attr, const char* attrName, int numLists, const int* numValues, const int64_t* const values[]);
DEFFUNCV(aclopSetAttrListString);
DEFFTYPE(aclError, aclopSetAttrListString, aclopAttr* attr, const char* attrName, int numValues, const char** values);
DEFFUNCV(aclopSetAttrString);
DEFFTYPE(aclError, aclopSetAttrString, aclopAttr* attr, const char* attrName, const char* attrValue);
DEFFUNCV(aclopSetCompileFlag);
DEFFTYPE(aclError, aclopSetCompileFlag, aclOpCompileFlag flag);
DEFFUNCV(aclopSetKernelArgs);
DEFFTYPE(aclError, aclopSetKernelArgs, aclopKernelDesc* kernelDesc, const char* kernelId, uint32_t blockDim, const void* args, uint32_t argSize);
DEFFUNCV(aclopSetKernelWorkspaceSizes);
DEFFTYPE(aclError, aclopSetKernelWorkspaceSizes, aclopKernelDesc* kernelDesc, int numWorkspaces, size_t* workspaceSizes);
DEFFUNCV(aclopSetModelDir);
DEFFTYPE(aclError, aclopSetModelDir, const char* modelDir);
DEFFUNCV(aclopStartDumpArgs);
DEFFTYPE(aclError, aclopStartDumpArgs, uint32_t dumpType, const char* path);
DEFFUNCV(aclopStopDumpArgs);
DEFFTYPE(aclError, aclopStopDumpArgs, uint32_t dumpType);
DEFFUNCV(aclopUnregisterCompileFunc);
DEFFTYPE(aclError, aclopUnregisterCompileFunc, const char* opType);
DEFFUNCV(aclopUpdateParams);
DEFFTYPE(aclError, aclopUpdateParams, const char* opType, int numInputs, const aclTensorDesc* const inputDesc[], int numOutputs, const aclTensorDesc* const outputDesc[], const aclopAttr* attr);
DEFFUNCV(aclprofCreateConfig);
DEFFTYPE(aclprofConfig*, aclprofCreateConfig, uint32_t* deviceIdList, uint32_t deviceNums, aclprofAicoreMetrics aicoreMetrics, aclprofAicoreEvents* aicoreEvents, uint64_t dataTypeConfig);
DEFFUNCV(aclprofCreateStamp);
DEFFTYPE(void*, aclprofCreateStamp);
DEFFUNCV(aclprofCreateStepInfo);
DEFFTYPE(aclprofStepInfo*, aclprofCreateStepInfo);
DEFFUNCV(aclprofCreateSubscribeConfig);
DEFFTYPE(aclprofSubscribeConfig*, aclprofCreateSubscribeConfig, int8_t timeInfoSwitch, aclprofAicoreMetrics aicoreMetrics, void* fd);
DEFFUNCV(aclprofDestroyConfig);
DEFFTYPE(aclError, aclprofDestroyConfig, const aclprofConfig* profilerConfig);
DEFFUNCV(aclprofDestroyStamp);
DEFFTYPE(void, aclprofDestroyStamp, void* stamp);
DEFFUNCV(aclprofDestroyStepInfo);
DEFFTYPE(void, aclprofDestroyStepInfo, aclprofStepInfo* stepinfo);
DEFFUNCV(aclprofDestroySubscribeConfig);
DEFFTYPE(aclError, aclprofDestroySubscribeConfig, const aclprofSubscribeConfig* profSubscribeConfig);
DEFFUNCV(aclprofFinalize);
DEFFTYPE(aclError, aclprofFinalize);
aclprofGetGraphId cnt == 0
DEFFUNCV(aclprofGetModelId);
DEFFTYPE(size_t, aclprofGetModelId, const void* opInfo, size_t opInfoLen, uint32_t index);
aclprofGetOpAttriValue cnt == 0
DEFFUNCV(aclprofGetOpDescSize);
DEFFTYPE(aclError, aclprofGetOpDescSize, size_t* opDescSize);
DEFFUNCV(aclprofGetOpDuration);
DEFFTYPE(uint64_t, aclprofGetOpDuration, const void* opInfo, size_t opInfoLen, uint32_t index);
DEFFUNCV(aclprofGetOpEnd);
DEFFTYPE(uint64_t, aclprofGetOpEnd, const void* opInfo, size_t opInfoLen, uint32_t index);
aclprofGetOpFlag cnt == 0
DEFFUNCV(aclprofGetOpName);
DEFFTYPE(aclError, aclprofGetOpName, const void* opInfo, size_t opInfoLen, uint32_t index, char* opName, size_t opNameLen);
DEFFUNCV(aclprofGetOpNameLen);
DEFFTYPE(aclError, aclprofGetOpNameLen, const void* opInfo, size_t opInfoLen, uint32_t index, size_t* opNameLen);
DEFFUNCV(aclprofGetOpNum);
DEFFTYPE(aclError, aclprofGetOpNum, const void* opInfo, size_t opInfoLen, uint32_t* opNumber);
DEFFUNCV(aclprofGetOpStart);
DEFFTYPE(uint64_t, aclprofGetOpStart, const void* opInfo, size_t opInfoLen, uint32_t index);
DEFFUNCV(aclprofGetOpType);
DEFFTYPE(aclError, aclprofGetOpType, const void* opInfo, size_t opInfoLen, uint32_t index, char* opType, size_t opTypeLen);
DEFFUNCV(aclprofGetOpTypeLen);
DEFFTYPE(aclError, aclprofGetOpTypeLen, const void* opInfo, size_t opInfoLen, uint32_t index, size_t* opTypeLen);
DEFFUNCV(aclprofGetStepTimestamp);
DEFFTYPE(aclError, aclprofGetStepTimestamp, aclprofStepInfo* stepInfo, aclprofStepTag tag, aclrtStream stream);
aclprofGetSupportedFeatures cnt == 0
DEFFUNCV(aclprofInit);
DEFFTYPE(aclError, aclprofInit, const char* profilerResultPath, size_t length);
DEFFUNCV(aclprofMark);
DEFFTYPE(aclError, aclprofMark, void* stamp);
DEFFUNCV(aclprofMarkEx);
DEFFTYPE(aclError, aclprofMarkEx, const char* msg, size_t msgLen, aclrtStream stream);
DEFFUNCV(aclprofModelSubscribe);
DEFFTYPE(aclError, aclprofModelSubscribe, uint32_t modelId, const aclprofSubscribeConfig* profSubscribeConfig);
DEFFUNCV(aclprofModelUnSubscribe);
DEFFTYPE(aclError, aclprofModelUnSubscribe, uint32_t modelId);
DEFFUNCV(aclprofPop);
DEFFTYPE(aclError, aclprofPop);
DEFFUNCV(aclprofPush);
DEFFTYPE(aclError, aclprofPush, void* stamp);
DEFFUNCV(aclprofRangeStart);
DEFFTYPE(aclError, aclprofRangeStart, void* stamp, uint32_t* rangeId);
DEFFUNCV(aclprofRangeStop);
DEFFTYPE(aclError, aclprofRangeStop, uint32_t rangeId);
aclprofSetCategoryName cnt == 0
DEFFUNCV(aclprofSetConfig);
DEFFTYPE(aclError, aclprofSetConfig, aclprofConfigType configType, const char* config, size_t configLength);
aclprofSetStampCategory cnt == 0
aclprofSetStampPayload cnt == 0
DEFFUNCV(aclprofSetStampTraceMessage);
DEFFTYPE(aclError, aclprofSetStampTraceMessage, void* stamp, const char* msg, uint32_t msgLen);
DEFFUNCV(aclprofStart);
DEFFTYPE(aclError, aclprofStart, const aclprofConfig* profilerConfig);
DEFFUNCV(aclprofStop);
DEFFTYPE(aclError, aclprofStop, const aclprofConfig* profilerConfig);
DEFFUNCV(aclrtAllocatorCreateDesc);
DEFFTYPE(aclrtAllocatorDesc, aclrtAllocatorCreateDesc);
DEFFUNCV(aclrtAllocatorDestroyDesc);
DEFFTYPE(aclError, aclrtAllocatorDestroyDesc, aclrtAllocatorDesc allocatorDesc);
DEFFUNCV(aclrtAllocatorRegister);
DEFFTYPE(aclError, aclrtAllocatorRegister, aclrtStream stream, aclrtAllocatorDesc allocatorDesc);
DEFFUNCV(aclrtAllocatorSetAllocAdviseFuncToDesc);
DEFFTYPE(aclError, aclrtAllocatorSetAllocAdviseFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorAllocAdviseFunc func);
DEFFUNCV(aclrtAllocatorSetAllocFuncToDesc);
DEFFTYPE(aclError, aclrtAllocatorSetAllocFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorAllocFunc func);
DEFFUNCV(aclrtAllocatorSetFreeFuncToDesc);
DEFFTYPE(aclError, aclrtAllocatorSetFreeFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorFreeFunc func);
DEFFUNCV(aclrtAllocatorSetGetAddrFromBlockFuncToDesc);
DEFFTYPE(aclError, aclrtAllocatorSetGetAddrFromBlockFuncToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocatorGetAddrFromBlockFunc func);
DEFFUNCV(aclrtAllocatorSetObjToDesc);
DEFFTYPE(aclError, aclrtAllocatorSetObjToDesc, aclrtAllocatorDesc allocatorDesc, aclrtAllocator allocator);
DEFFUNCV(aclrtAllocatorUnregister);
DEFFTYPE(aclError, aclrtAllocatorUnregister, aclrtStream stream);
DEFFUNCV(aclrtBinaryGetFunction);
DEFFTYPE(aclError, aclrtBinaryGetFunction, const aclrtBinHandle binHandle, const char* kernelName, aclrtFuncHandle* funcHandle);
DEFFUNCV(aclrtBinaryLoad);
DEFFTYPE(aclError, aclrtBinaryLoad, const aclrtBinary binary, aclrtBinHandle* binHandle);
DEFFUNCV(aclrtBinaryUnLoad);
DEFFTYPE(aclError, aclrtBinaryUnLoad, aclrtBinHandle binHandle);
DEFFUNCV(aclrtCreateBinary);
DEFFTYPE(aclrtBinary, aclrtCreateBinary, const void* data, size_t dataLen);
DEFFUNCV(aclrtCreateContext);
DEFFTYPE(aclError, aclrtCreateContext, aclrtContext* context, int32_t deviceId);
DEFFUNCV(aclrtCreateEvent);
DEFFTYPE(aclError, aclrtCreateEvent, aclrtEvent* event);
DEFFUNCV(aclrtCreateEventExWithFlag);
DEFFTYPE(aclError, aclrtCreateEventExWithFlag, aclrtEvent* event, uint32_t flag);
DEFFUNCV(aclrtCreateEventWithFlag);
DEFFTYPE(aclError, aclrtCreateEventWithFlag, aclrtEvent* event, uint32_t flag);
DEFFUNCV(aclrtCreateGroupInfo);
DEFFTYPE(aclrtGroupInfo*, aclrtCreateGroupInfo);
DEFFUNCV(aclrtCreateStream);
DEFFTYPE(aclError, aclrtCreateStream, aclrtStream* stream);
DEFFUNCV(aclrtCreateStreamWithConfig);
DEFFTYPE(aclError, aclrtCreateStreamWithConfig, aclrtStream* stream, uint32_t priority, uint32_t flag);
DEFFUNCV(aclrtCtxGetSysParamOpt);
DEFFTYPE(aclError, aclrtCtxGetSysParamOpt, aclSysParamOpt opt, int64_t* value);
DEFFUNCV(aclrtCtxSetSysParamOpt);
DEFFTYPE(aclError, aclrtCtxSetSysParamOpt, aclSysParamOpt opt, int64_t value);
DEFFUNCV(aclrtDestroyBinary);
DEFFTYPE(aclError, aclrtDestroyBinary, aclrtBinary binary);
DEFFUNCV(aclrtDestroyContext);
DEFFTYPE(aclError, aclrtDestroyContext, aclrtContext context);
DEFFUNCV(aclrtDestroyEvent);
DEFFTYPE(aclError, aclrtDestroyEvent, aclrtEvent event);
DEFFUNCV(aclrtDestroyGroupInfo);
DEFFTYPE(aclError, aclrtDestroyGroupInfo, aclrtGroupInfo* groupInfo);
DEFFUNCV(aclrtDestroyStream);
DEFFTYPE(aclError, aclrtDestroyStream, aclrtStream stream);
DEFFUNCV(aclrtDestroyStreamForce);
DEFFTYPE(aclError, aclrtDestroyStreamForce, aclrtStream stream);
DEFFUNCV(aclrtDeviceCanAccessPeer);
DEFFTYPE(aclError, aclrtDeviceCanAccessPeer, int32_t* canAccessPeer, int32_t deviceId, int32_t peerDeviceId);
DEFFUNCV(aclrtDeviceDisablePeerAccess);
DEFFTYPE(aclError, aclrtDeviceDisablePeerAccess, int32_t peerDeviceId);
DEFFUNCV(aclrtDeviceEnablePeerAccess);
DEFFTYPE(aclError, aclrtDeviceEnablePeerAccess, int32_t peerDeviceId, uint32_t flags);
DEFFUNCV(aclrtDeviceGetBareTgid);
DEFFTYPE(aclError, aclrtDeviceGetBareTgid, int32_t* pid);
DEFFUNCV(aclrtEventElapsedTime);
DEFFTYPE(aclError, aclrtEventElapsedTime, float* ms, aclrtEvent startEvent, aclrtEvent endEvent);
DEFFUNCV(aclrtFree);
DEFFTYPE(aclError, aclrtFree, void* devPtr);
DEFFUNCV(aclrtFreeHost);
DEFFTYPE(aclError, aclrtFreeHost, void* hostPtr);
DEFFUNCV(aclrtFreePhysical);
DEFFTYPE(aclError, aclrtFreePhysical, aclrtDrvMemHandle handle);
DEFFUNCV(aclrtGetAllGroupInfo);
DEFFTYPE(aclError, aclrtGetAllGroupInfo, aclrtGroupInfo* groupInfo);
DEFFUNCV(aclrtGetCurrentContext);
DEFFTYPE(aclError, aclrtGetCurrentContext, aclrtContext* context);
DEFFUNCV(aclrtGetDevice);
DEFFTYPE(aclError, aclrtGetDevice, int32_t* deviceId);
DEFFUNCV(aclrtGetDeviceCount);
DEFFTYPE(aclError, aclrtGetDeviceCount, uint32_t* count);
DEFFUNCV(aclrtGetDeviceIdFromExceptionInfo);
DEFFTYPE(uint32_t, aclrtGetDeviceIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFUNCV(aclrtGetDeviceSatMode);
DEFFTYPE(aclError, aclrtGetDeviceSatMode, aclrtFloatOverflowMode* mode);
DEFFUNCV(aclrtGetDeviceUtilizationRate);
DEFFTYPE(aclError, aclrtGetDeviceUtilizationRate, int32_t deviceId, aclrtUtilizationInfo* utilizationInfo);
DEFFUNCV(aclrtGetErrorCodeFromExceptionInfo);
DEFFTYPE(uint32_t, aclrtGetErrorCodeFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFUNCV(aclrtGetGroupCount);
DEFFTYPE(aclError, aclrtGetGroupCount, uint32_t* count);
DEFFUNCV(aclrtGetGroupInfoDetail);
DEFFTYPE(aclError, aclrtGetGroupInfoDetail, const aclrtGroupInfo* groupInfo, int32_t groupIndex, aclrtGroupAttr attr, void* attrValue, size_t valueLen, size_t* paramRetSize);
DEFFUNCV(aclrtGetMemInfo);
DEFFTYPE(aclError, aclrtGetMemInfo, aclrtMemAttr attr, size_t* free, size_t* total);
DEFFUNCV(aclrtGetOverflowStatus);
DEFFTYPE(aclError, aclrtGetOverflowStatus, void* outputAddr, size_t outputSize, aclrtStream stream);
DEFFUNCV(aclrtGetRunMode);
DEFFTYPE(aclError, aclrtGetRunMode, aclrtRunMode* runMode);
DEFFUNCV(aclrtGetSocName);
DEFFTYPE(const char*, aclrtGetSocName);
DEFFUNCV(aclrtGetStreamIdFromExceptionInfo);
DEFFTYPE(uint32_t, aclrtGetStreamIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFUNCV(aclrtGetStreamOverflowSwitch);
DEFFTYPE(aclError, aclrtGetStreamOverflowSwitch, aclrtStream stream, uint32_t* flag);
DEFFUNCV(aclrtGetTaskIdFromExceptionInfo);
DEFFTYPE(uint32_t, aclrtGetTaskIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFUNCV(aclrtGetThreadIdFromExceptionInfo);
DEFFTYPE(uint32_t, aclrtGetThreadIdFromExceptionInfo, const aclrtExceptionInfo* info);
DEFFUNCV(aclrtGetVersion);
DEFFTYPE(aclError, aclrtGetVersion, int32_t* majorVersion, int32_t* minorVersion, int32_t* patchVersion);
DEFFUNCV(aclrtLaunchCallback);
DEFFTYPE(aclError, aclrtLaunchCallback, aclrtCallback fn, void* userData, aclrtCallbackBlockType blockType, aclrtStream stream);
DEFFUNCV(aclrtLaunchKernel);
DEFFTYPE(aclError, aclrtLaunchKernel, aclrtFuncHandle funcHandle, uint32_t blockDim, const void* argsData, size_t argsSize, aclrtStream stream);
DEFFUNCV(aclrtMalloc);
DEFFTYPE(aclError, aclrtMalloc, void** devPtr, size_t size, aclrtMemMallocPolicy policy);
DEFFUNCV(aclrtMallocAlign32);
DEFFTYPE(aclError, aclrtMallocAlign32, void** devPtr, size_t size, aclrtMemMallocPolicy policy);
DEFFUNCV(aclrtMallocCached);
DEFFTYPE(aclError, aclrtMallocCached, void** devPtr, size_t size, aclrtMemMallocPolicy policy);
DEFFUNCV(aclrtMallocHost);
DEFFTYPE(aclError, aclrtMallocHost, void** hostPtr, size_t size);
DEFFUNCV(aclrtMallocPhysical);
DEFFTYPE(aclError, aclrtMallocPhysical, aclrtDrvMemHandle* handle, size_t size, const aclrtPhysicalMemProp* prop, uint64_t flags);
DEFFUNCV(aclrtMapMem);
DEFFTYPE(aclError, aclrtMapMem, void* virPtr, size_t size, size_t offset, aclrtDrvMemHandle handle, uint64_t flags);
DEFFUNCV(aclrtMemExportToShareableHandle);
DEFFTYPE(aclError, aclrtMemExportToShareableHandle, aclrtDrvMemHandle handle, aclrtMemHandleType handleType, uint64_t flags, uint64_t* shareableHandle);
DEFFUNCV(aclrtMemFlush);
DEFFTYPE(aclError, aclrtMemFlush, void* devPtr, size_t size);
DEFFUNCV(aclrtMemGetAllocationGranularity);
DEFFTYPE(aclError, aclrtMemGetAllocationGranularity, aclrtPhysicalMemProp* prop, aclrtMemGranularityOptions option, size_t* granularity);
DEFFUNCV(aclrtMemImportFromShareableHandle);
DEFFTYPE(aclError, aclrtMemImportFromShareableHandle, uint64_t shareableHandle, int32_t deviceId, aclrtDrvMemHandle* handle);
DEFFUNCV(aclrtMemInvalidate);
DEFFTYPE(aclError, aclrtMemInvalidate, void* devPtr, size_t size);
DEFFUNCV(aclrtMemSetPidToShareableHandle);
DEFFTYPE(aclError, aclrtMemSetPidToShareableHandle, uint64_t shareableHandle, int32_t* pid, size_t pidNum);
DEFFUNCV(aclrtMemcpy);
DEFFTYPE(aclError, aclrtMemcpy, void* dst, size_t destMax, const void* src, size_t count, aclrtMemcpyKind kind);
DEFFUNCV(aclrtMemcpy2d);
DEFFTYPE(aclError, aclrtMemcpy2d, void* dst, size_t dpitch, const void* src, size_t spitch, size_t width, size_t height, aclrtMemcpyKind kind);
DEFFUNCV(aclrtMemcpy2dAsync);
DEFFTYPE(aclError, aclrtMemcpy2dAsync, void* dst, size_t dpitch, const void* src, size_t spitch, size_t width, size_t height, aclrtMemcpyKind kind, aclrtStream stream);
DEFFUNCV(aclrtMemcpyAsync);
DEFFTYPE(aclError, aclrtMemcpyAsync, void* dst, size_t destMax, const void* src, size_t count, aclrtMemcpyKind kind, aclrtStream stream);
DEFFUNCV(aclrtMemset);
DEFFTYPE(aclError, aclrtMemset, void* devPtr, size_t maxCount, int32_t value, size_t count);
DEFFUNCV(aclrtMemsetAsync);
DEFFTYPE(aclError, aclrtMemsetAsync, void* devPtr, size_t maxCount, int32_t value, size_t count, aclrtStream stream);
DEFFUNCV(aclrtProcessReport);
DEFFTYPE(aclError, aclrtProcessReport, int32_t timeout);
DEFFUNCV(aclrtQueryDeviceStatus);
DEFFTYPE(aclError, aclrtQueryDeviceStatus, int32_t deviceId, aclrtDeviceStatus* deviceStatus);
DEFFUNCV(aclrtQueryEvent);
DEFFTYPE(aclError, aclrtQueryEvent, aclrtEvent event, aclrtEventStatus* status);
DEFFUNCV(aclrtQueryEventStatus);
DEFFTYPE(aclError, aclrtQueryEventStatus, aclrtEvent event, aclrtEventRecordedStatus* status);
DEFFUNCV(aclrtQueryEventWaitStatus);
DEFFTYPE(aclError, aclrtQueryEventWaitStatus, aclrtEvent event, aclrtEventWaitStatus* status);
DEFFUNCV(aclrtRecordEvent);
DEFFTYPE(aclError, aclrtRecordEvent, aclrtEvent event, aclrtStream stream);
DEFFUNCV(aclrtReleaseMemAddress);
DEFFTYPE(aclError, aclrtReleaseMemAddress, void* virPtr);
DEFFUNCV(aclrtReserveMemAddress);
DEFFTYPE(aclError, aclrtReserveMemAddress, void** virPtr, size_t size, size_t alignment, void* expectPtr, uint64_t flags);
aclrtResetD- cnt == 0
DEFFUNCV(aclrtSetDevice);
DEFFTYPE(aclError, aclrtSetDevice, int32_t deviceId);
DEFFUNCV(aclrtSetDeviceSatMode);
DEFFTYPE(aclError, aclrtSetDeviceSatMode, aclrtFloatOverflowMode mode);
aclrtSetDeviceWithoutTsdVXX cnt == 0
DEFFUNCV(aclrtSetExceptionInfoCallback);
DEFFTYPE(aclError, aclrtSetExceptionInfoCallback, aclrtExceptionInfoCallback callback);
DEFFUNCV(aclrtSetGroup);
DEFFTYPE(aclError, aclrtSetGroup, int32_t groupId);
DEFFUNCV(aclrtSetOpExecuteTimeOut);
DEFFTYPE(aclError, aclrtSetOpExecuteTimeOut, uint32_t timeout);
DEFFUNCV(aclrtSetOpWaitTimeout);
DEFFTYPE(aclError, aclrtSetOpWaitTimeout, uint32_t timeout);
DEFFUNCV(aclrtSetStreamFailureMode);
DEFFTYPE(aclError, aclrtSetStreamFailureMode, aclrtStream stream, uint64_t mode);
DEFFUNCV(aclrtSetStreamOverflowSwitch);
DEFFTYPE(aclError, aclrtSetStreamOverflowSwitch, aclrtStream stream, uint32_t flag);
DEFFUNCV(aclrtSetTsDevice);
DEFFTYPE(aclError, aclrtSetTsDevice, aclrtTsId tsId);
DEFFUNCV(aclrtStreamQuery);
DEFFTYPE(aclError, aclrtStreamQuery, aclrtStream stream, aclrtStreamStatus* status);
DEFFUNCV(aclrtStreamWaitEvent);
DEFFTYPE(aclError, aclrtStreamWaitEvent, aclrtStream stream, aclrtEvent event);
DEFFUNCV(aclrtSubscribeReport);
DEFFTYPE(aclError, aclrtSubscribeReport, uint64_t threadId, aclrtStream stream);
DEFFUNCV(aclrtSynchronizeDevice);
DEFFTYPE(aclError, aclrtSynchronizeDevice);
DEFFUNCV(aclrtSynchronizeEvent);
DEFFTYPE(aclError, aclrtSynchronizeEvent, aclrtEvent event);
DEFFUNCV(aclrtSynchronizeEventWithTimeout);
DEFFTYPE(aclError, aclrtSynchronizeEventWithTimeout, aclrtEvent event, int32_t timeout);
DEFFUNCV(aclrtSynchronizeStream);
DEFFTYPE(aclError, aclrtSynchronizeStream, aclrtStream stream);
DEFFUNCV(aclrtSynchronizeStreamWithTimeout);
DEFFTYPE(aclError, aclrtSynchronizeStreamWithTimeout, aclrtStream stream, int32_t timeout);
DEFFUNCV(aclrtUnSubscribeReport);
DEFFTYPE(aclError, aclrtUnSubscribeReport, uint64_t threadId, aclrtStream stream);
DEFFUNCV(aclrtUnmapMem);
DEFFTYPE(aclError, aclrtUnmapMem, void* virPtr);
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
        PASS_FUNC(aclAppLog, logLevel, func, file, line, fmt, ...);
    #else
        CALL_FUNC_WITHOUT_RETURN(so_aclAppLog,logLevel, func, file, line, fmt, ...);
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return ;
}
aclDataBuffer* aclCreateDataBuffer(void* data, size_t size){
    BEGIN_FUNC_HOOK(aclCreateDataBuffer);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclCreateDataBuffer, data, size);
    #else
        DEFINE_RETURN_VARIBLE(aclDataBuffer*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclCreateDataBuffer,data, size);
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
        PASS_FUNC(aclCreateTensorDesc, dataType, numDims, dims, format);
    #else
        DEFINE_RETURN_VARIBLE(aclTensorDesc*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclCreateTensorDesc,dataType, numDims, dims, format);
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
    return ;
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
        PASS_FUNC(aclGenGraphAndDumpForOp, opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, outputs, attr, engineType, graphDumpPath, graphDumpOpt);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGenGraphAndDumpForOp,opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, outputs, attr, engineType, graphDumpPath, graphDumpOpt);
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
        PASS_FUNC(aclGetCannAttribute, cannAttr, value);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetCannAttribute,cannAttr, value);
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
        PASS_FUNC(aclGetCannAttributeList, cannAttrList, num);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetCannAttributeList,cannAttrList, num);
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
        PASS_FUNC(aclGetCompileopt, opt, value, length);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetCompileopt,opt, value, length);
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
        PASS_FUNC(aclGetDeviceCapability, deviceId, deviceInfo, value);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetDeviceCapability,deviceId, deviceInfo, value);
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
        PASS_FUNC(aclGetTensorDescByIndex, desc, index);
    #else
        DEFINE_RETURN_VARIBLE(aclTensorDesc*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescByIndex,desc, index);
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
        PASS_FUNC(aclGetTensorDescDim, desc, index);
    #else
        DEFINE_RETURN_VARIBLE(int64_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescDim,desc, index);
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
        PASS_FUNC(aclGetTensorDescDimRange, desc, index, dimRangeNum, dimRange);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescDimRange,desc, index, dimRangeNum, dimRange);
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
        PASS_FUNC(aclGetTensorDescDimV2, desc, index, dimSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclGetTensorDescDimV2,desc, index, dimSize);
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
        PASS_FUNC(aclSetCompileopt, opt, value);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetCompileopt,opt, value);
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
        PASS_FUNC(aclSetTensorConst, desc, dataBuffer, length);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorConst,desc, dataBuffer, length);
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
        PASS_FUNC(aclSetTensorDescName, desc, name);
    #else
        CALL_FUNC_WITHOUT_RETURN(so_aclSetTensorDescName,desc, name);
    #endif
    #ifdef END_FUNC_HOOK_ON
        END_FUNC_HOOK(func);
    #endif
    return ;
}
aclError aclSetTensorDynamicInput(aclTensorDesc* desc, const char* dynamicInputName){
    BEGIN_FUNC_HOOK(aclSetTensorDynamicInput);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclSetTensorDynamicInput, desc, dynamicInputName);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorDynamicInput,desc, dynamicInputName);
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
        PASS_FUNC(aclSetTensorFormat, desc, format);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorFormat,desc, format);
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
        PASS_FUNC(aclSetTensorOriginFormat, desc, format);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorOriginFormat,desc, format);
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
        PASS_FUNC(aclSetTensorOriginShape, desc, numDims, dims);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorOriginShape,desc, numDims, dims);
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
        PASS_FUNC(aclSetTensorPlaceMent, desc, memType);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorPlaceMent,desc, memType);
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
        PASS_FUNC(aclSetTensorShape, desc, numDims, dims);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorShape,desc, numDims, dims);
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
        PASS_FUNC(aclSetTensorShapeRange, desc, dimsCount, dimsRange);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorShapeRange,desc, dimsCount, dimsRange);
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
        PASS_FUNC(aclSetTensorStorageFormat, desc, format);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorStorageFormat,desc, format);
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
        PASS_FUNC(aclSetTensorStorageShape, desc, numDims, dims);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorStorageShape,desc, numDims, dims);
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
        PASS_FUNC(aclSetTensorValueRange, desc, valueCount, valueRange);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclSetTensorValueRange,desc, valueCount, valueRange);
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
        PASS_FUNC(aclTransTensorDescFormat, srcDesc, dstFormat, dstDesc);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclTransTensorDescFormat,srcDesc, dstFormat, dstDesc);
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
        PASS_FUNC(aclUpdateDataBuffer, dataBuffer, data, size);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclUpdateDataBuffer,dataBuffer, data, size);
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
        PASS_FUNC(aclmdlAddDatasetBuffer, dataset, dataBuffer);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlAddDatasetBuffer,dataset, dataBuffer);
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
        PASS_FUNC(aclmdlCreateAndGetOpDesc, deviceId, streamId, taskId, opName, opNameLen, inputDesc, numInputs, outputDesc, numOutputs);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlCreateAndGetOpDesc,deviceId, streamId, taskId, opName, opNameLen, inputDesc, numInputs, outputDesc, numOutputs);
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
        PASS_FUNC(aclmdlExecute, modelId, input, output);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlExecute,modelId, input, output);
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
        PASS_FUNC(aclmdlExecuteAsync, modelId, input, output, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlExecuteAsync,modelId, input, output, stream);
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
        PASS_FUNC(aclmdlExecuteV2, modelId, input, output, stream, handle);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlExecuteV2,modelId, input, output, stream, handle);
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
        PASS_FUNC(aclmdlGetAippDataSize, batchSize, size);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetAippDataSize,batchSize, size);
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
        PASS_FUNC(aclmdlGetAippType, modelId, index, type, dynamicAttachedDataIndex);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetAippType,modelId, index, type, dynamicAttachedDataIndex);
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
        PASS_FUNC(aclmdlGetCurOutputDims, modelDesc, index, dims);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetCurOutputDims,modelDesc, index, dims);
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
        PASS_FUNC(aclmdlGetDatasetBuffer, dataset, index);
    #else
        DEFINE_RETURN_VARIBLE(aclDataBuffer*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetDatasetBuffer,dataset, index);
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
        PASS_FUNC(aclmdlGetDatasetTensorDesc, dataset, index);
    #else
        DEFINE_RETURN_VARIBLE(aclTensorDesc*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetDatasetTensorDesc,dataset, index);
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
        PASS_FUNC(aclmdlGetDesc, modelDesc, modelId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetDesc,modelDesc, modelId);
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
        PASS_FUNC(aclmdlGetDynamicBatch, modelDesc, batch);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetDynamicBatch,modelDesc, batch);
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
        PASS_FUNC(aclmdlGetDynamicHW, modelDesc, index, hw);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetDynamicHW,modelDesc, index, hw);
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
        PASS_FUNC(aclmdlGetFirstAippInfo, modelId, index, aippInfo);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetFirstAippInfo,modelId, index, aippInfo);
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
        PASS_FUNC(aclmdlGetInputDataType, modelDesc, index);
    #else
        DEFINE_RETURN_VARIBLE(aclDataType, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputDataType,modelDesc, index);
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
        PASS_FUNC(aclmdlGetInputDims, modelDesc, index, dims);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputDims,modelDesc, index, dims);
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
        PASS_FUNC(aclmdlGetInputDimsV2, modelDesc, index, dims);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputDimsV2,modelDesc, index, dims);
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
        PASS_FUNC(aclmdlGetInputDynamicDims, modelDesc, index, dims, gearCount);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputDynamicDims,modelDesc, index, dims, gearCount);
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
        PASS_FUNC(aclmdlGetInputDynamicGearCount, modelDesc, index, gearCount);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputDynamicGearCount,modelDesc, index, gearCount);
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
        PASS_FUNC(aclmdlGetInputFormat, modelDesc, index);
    #else
        DEFINE_RETURN_VARIBLE(aclFormat, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputFormat,modelDesc, index);
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
        PASS_FUNC(aclmdlGetInputIndexByName, modelDesc, name, index);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputIndexByName,modelDesc, name, index);
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
        PASS_FUNC(aclmdlGetInputNameByIndex, modelDesc, index);
    #else
        DEFINE_RETURN_VARIBLE(const char*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputNameByIndex,modelDesc, index);
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
        PASS_FUNC(aclmdlGetInputSizeByIndex, modelDesc, index);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetInputSizeByIndex,modelDesc, index);
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
        PASS_FUNC(aclmdlGetOpAttr, modelDesc, opName, attr);
    #else
        DEFINE_RETURN_VARIBLE(const char*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOpAttr,modelDesc, opName, attr);
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
        PASS_FUNC(aclmdlGetOutputDataType, modelDesc, index);
    #else
        DEFINE_RETURN_VARIBLE(aclDataType, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputDataType,modelDesc, index);
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
        PASS_FUNC(aclmdlGetOutputDims, modelDesc, index, dims);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputDims,modelDesc, index, dims);
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
        PASS_FUNC(aclmdlGetOutputFormat, modelDesc, index);
    #else
        DEFINE_RETURN_VARIBLE(aclFormat, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputFormat,modelDesc, index);
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
        PASS_FUNC(aclmdlGetOutputIndexByName, modelDesc, name, index);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputIndexByName,modelDesc, name, index);
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
        PASS_FUNC(aclmdlGetOutputNameByIndex, modelDesc, index);
    #else
        DEFINE_RETURN_VARIBLE(const char*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputNameByIndex,modelDesc, index);
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
        PASS_FUNC(aclmdlGetOutputSizeByIndex, modelDesc, index);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetOutputSizeByIndex,modelDesc, index);
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
        PASS_FUNC(aclmdlGetTensorRealName, modelDesc, name);
    #else
        DEFINE_RETURN_VARIBLE(const char*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlGetTensorRealName,modelDesc, name);
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
        PASS_FUNC(aclmdlLoadFromFile, modelPath, modelId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromFile,modelPath, modelId);
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
        PASS_FUNC(aclmdlLoadFromFileWithMem, modelPath, modelId, workPtr, workSize, weightPtr, weightSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromFileWithMem,modelPath, modelId, workPtr, workSize, weightPtr, weightSize);
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
        PASS_FUNC(aclmdlLoadFromFileWithQ, modelPath, modelId, inputQ, inputQNum, outputQ, outputQNum);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromFileWithQ,modelPath, modelId, inputQ, inputQNum, outputQ, outputQNum);
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
        PASS_FUNC(aclmdlLoadFromMem, model, modelSize, modelId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromMem,model, modelSize, modelId);
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
        PASS_FUNC(aclmdlLoadFromMemWithMem, model, modelSize, modelId, workPtr, workSize, weightPtr, weightSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromMemWithMem,model, modelSize, modelId, workPtr, workSize, weightPtr, weightSize);
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
        PASS_FUNC(aclmdlLoadFromMemWithQ, model, modelSize, modelId, inputQ, inputQNum, outputQ, outputQNum);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadFromMemWithQ,model, modelSize, modelId, inputQ, inputQNum, outputQ, outputQNum);
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
        PASS_FUNC(aclmdlLoadWithConfig, handle, modelId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlLoadWithConfig,handle, modelId);
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
        PASS_FUNC(aclmdlQuerySize, fileName, workSize, weightSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlQuerySize,fileName, workSize, weightSize);
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
        PASS_FUNC(aclmdlQuerySizeFromMem, model, modelSize, workSize, weightSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlQuerySizeFromMem,model, modelSize, workSize, weightSize);
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
        PASS_FUNC(aclmdlSetAIPPAxSwapSwitch, aippParmsSet, axSwapSwitch);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPAxSwapSwitch,aippParmsSet, axSwapSwitch);
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
        PASS_FUNC(aclmdlSetAIPPByInputIndex, modelId, dataset, index, aippParmsSet);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPByInputIndex,modelId, dataset, index, aippParmsSet);
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
        PASS_FUNC(aclmdlSetAIPPCropParams, aippParmsSet, cropSwitch, cropStartPosW, cropStartPosH, cropSizeW, cropSizeH, batchIndex);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPCropParams,aippParmsSet, cropSwitch, cropStartPosW, cropStartPosH, cropSizeW, cropSizeH, batchIndex);
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
        PASS_FUNC(aclmdlSetAIPPCscParams, aippParmsSet, cscSwitch, cscMatrixR0C0, cscMatrixR0C1, cscMatrixR0C2, cscMatrixR1C0, cscMatrixR1C1, cscMatrixR1C2, cscMatrixR2C0, cscMatrixR2C1, cscMatrixR2C2, cscOutputBiasR0, cscOutputBiasR1, cscOutputBiasR2, cscInputBiasR0, cscInputBiasR1, cscInputBiasR2);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPCscParams,aippParmsSet, cscSwitch, cscMatrixR0C0, cscMatrixR0C1, cscMatrixR0C2, cscMatrixR1C0, cscMatrixR1C1, cscMatrixR1C2, cscMatrixR2C0, cscMatrixR2C1, cscMatrixR2C2, cscOutputBiasR0, cscOutputBiasR1, cscOutputBiasR2, cscInputBiasR0, cscInputBiasR1, cscInputBiasR2);
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
        PASS_FUNC(aclmdlSetAIPPDtcPixelMean, aippParmsSet, dtcPixelMeanChn0, dtcPixelMeanChn1, dtcPixelMeanChn2, dtcPixelMeanChn3, batchIndex);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPDtcPixelMean,aippParmsSet, dtcPixelMeanChn0, dtcPixelMeanChn1, dtcPixelMeanChn2, dtcPixelMeanChn3, batchIndex);
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
        PASS_FUNC(aclmdlSetAIPPDtcPixelMin, aippParmsSet, dtcPixelMinChn0, dtcPixelMinChn1, dtcPixelMinChn2, dtcPixelMinChn3, batchIndex);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPDtcPixelMin,aippParmsSet, dtcPixelMinChn0, dtcPixelMinChn1, dtcPixelMinChn2, dtcPixelMinChn3, batchIndex);
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
        PASS_FUNC(aclmdlSetAIPPInputFormat, aippParmsSet, inputFormat);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPInputFormat,aippParmsSet, inputFormat);
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
        PASS_FUNC(aclmdlSetAIPPPaddingParams, aippParmsSet, paddingSwitch, paddingSizeTop, paddingSizeBottom, paddingSizeLeft, paddingSizeRight, batchIndex);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPPaddingParams,aippParmsSet, paddingSwitch, paddingSizeTop, paddingSizeBottom, paddingSizeLeft, paddingSizeRight, batchIndex);
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
        PASS_FUNC(aclmdlSetAIPPPixelVarReci, aippParmsSet, dtcPixelVarReciChn0, dtcPixelVarReciChn1, dtcPixelVarReciChn2, dtcPixelVarReciChn3, batchIndex);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPPixelVarReci,aippParmsSet, dtcPixelVarReciChn0, dtcPixelVarReciChn1, dtcPixelVarReciChn2, dtcPixelVarReciChn3, batchIndex);
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
        PASS_FUNC(aclmdlSetAIPPRbuvSwapSwitch, aippParmsSet, rbuvSwapSwitch);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPRbuvSwapSwitch,aippParmsSet, rbuvSwapSwitch);
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
        PASS_FUNC(aclmdlSetAIPPScfParams, aippParmsSet, scfSwitch, scfInputSizeW, scfInputSizeH, scfOutputSizeW, scfOutputSizeH, batchIndex);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPScfParams,aippParmsSet, scfSwitch, scfInputSizeW, scfInputSizeH, scfOutputSizeW, scfOutputSizeH, batchIndex);
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
        PASS_FUNC(aclmdlSetAIPPSrcImageSize, aippParmsSet, srcImageSizeW, srcImageSizeH);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetAIPPSrcImageSize,aippParmsSet, srcImageSizeW, srcImageSizeH);
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
        PASS_FUNC(aclmdlSetConfigOpt, handle, attr, attrValue, valueSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetConfigOpt,handle, attr, attrValue, valueSize);
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
        PASS_FUNC(aclmdlSetDatasetTensorDesc, dataset, tensorDesc, index);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetDatasetTensorDesc,dataset, tensorDesc, index);
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
        PASS_FUNC(aclmdlSetDynamicBatchSize, modelId, dataset, index, batchSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetDynamicBatchSize,modelId, dataset, index, batchSize);
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
        PASS_FUNC(aclmdlSetDynamicHWSize, modelId, dataset, index, height, width);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetDynamicHWSize,modelId, dataset, index, height, width);
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
        PASS_FUNC(aclmdlSetExecConfigOpt, handle, attr, attrValue, valueSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetExecConfigOpt,handle, attr, attrValue, valueSize);
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
        PASS_FUNC(aclmdlSetInputAIPP, modelId, dataset, index, aippParmsSet);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetInputAIPP,modelId, dataset, index, aippParmsSet);
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
        PASS_FUNC(aclmdlSetInputDynamicDims, modelId, dataset, index, dims);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclmdlSetInputDynamicDims,modelId, dataset, index, dims);
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
        PASS_FUNC(aclopCast, srcDesc, srcBuffer, dstDesc, dstBuffer, truncate, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCast,srcDesc, srcBuffer, dstDesc, dstBuffer, truncate, stream);
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
        PASS_FUNC(aclopCompile, opType, numInputs, inputDesc, numOutputs, outputDesc, attr, engineType, compileFlag, opPath);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCompile,opType, numInputs, inputDesc, numOutputs, outputDesc, attr, engineType, compileFlag, opPath);
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
        PASS_FUNC(aclopCompileAndExecute, opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, outputs, attr, engineType, compileFlag, opPath, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCompileAndExecute,opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, outputs, attr, engineType, compileFlag, opPath, stream);
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
        PASS_FUNC(aclopCompileAndExecuteV2, opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, outputs, attr, engineType, compileFlag, opPath, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCompileAndExecuteV2,opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, outputs, attr, engineType, compileFlag, opPath, stream);
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
        PASS_FUNC(aclopCreateHandle, opType, numInputs, inputDesc, numOutputs, outputDesc, opAttr, handle);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCreateHandle,opType, numInputs, inputDesc, numOutputs, outputDesc, opAttr, handle);
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
        PASS_FUNC(aclopCreateHandleForCast, srcDesc, dstDesc, truncate, handle);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCreateHandleForCast,srcDesc, dstDesc, truncate, handle);
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
        PASS_FUNC(aclopCreateKernel, opType, kernelId, kernelName, binData, binSize, enginetype, deallocator);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopCreateKernel,opType, kernelId, kernelName, binData, binSize, enginetype, deallocator);
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
    return ;
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
    return ;
}
aclError aclopExecWithHandle(aclopHandle* handle, int numInputs, const aclDataBuffer* const inputs[], int numOutputs, aclDataBuffer* const outputs[], aclrtStream stream){
    BEGIN_FUNC_HOOK(aclopExecWithHandle);
    #ifdef PASS_FUNC_ON
        PASS_FUNC(aclopExecWithHandle, handle, numInputs, inputs, numOutputs, outputs, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopExecWithHandle,handle, numInputs, inputs, numOutputs, outputs, stream);
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
        PASS_FUNC(aclopExecute, opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, outputs, attr, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopExecute,opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, outputs, attr, stream);
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
        PASS_FUNC(aclopExecuteV2, opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, outputs, attr, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopExecuteV2,opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, outputs, attr, stream);
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
        PASS_FUNC(aclopInferShape, opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, attr);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopInferShape,opType, numInputs, inputDesc, inputs, numOutputs, outputDesc, attr);
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
        PASS_FUNC(aclopLoad, model, modelSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopLoad,model, modelSize);
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
        PASS_FUNC(aclopRegisterCompileFunc, opType, func);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopRegisterCompileFunc,opType, func);
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
        PASS_FUNC(aclopSetAttrBool, attr, attrName, attrValue);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrBool,attr, attrName, attrValue);
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
        PASS_FUNC(aclopSetAttrDataType, attr, attrName, attrValue);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrDataType,attr, attrName, attrValue);
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
        PASS_FUNC(aclopSetAttrFloat, attr, attrName, attrValue);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrFloat,attr, attrName, attrValue);
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
        PASS_FUNC(aclopSetAttrInt, attr, attrName, attrValue);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrInt,attr, attrName, attrValue);
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
        PASS_FUNC(aclopSetAttrListBool, attr, attrName, numValues, values);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListBool,attr, attrName, numValues, values);
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
        PASS_FUNC(aclopSetAttrListDataType, attr, attrName, numValues, values);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListDataType,attr, attrName, numValues, values);
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
        PASS_FUNC(aclopSetAttrListFloat, attr, attrName, numValues, values);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListFloat,attr, attrName, numValues, values);
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
        PASS_FUNC(aclopSetAttrListInt, attr, attrName, numValues, values);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListInt,attr, attrName, numValues, values);
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
        PASS_FUNC(aclopSetAttrListListInt, attr, attrName, numLists, numValues, values);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListListInt,attr, attrName, numLists, numValues, values);
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
        PASS_FUNC(aclopSetAttrListString, attr, attrName, numValues, values);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrListString,attr, attrName, numValues, values);
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
        PASS_FUNC(aclopSetAttrString, attr, attrName, attrValue);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetAttrString,attr, attrName, attrValue);
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
        PASS_FUNC(aclopSetKernelArgs, kernelDesc, kernelId, blockDim, args, argSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetKernelArgs,kernelDesc, kernelId, blockDim, args, argSize);
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
        PASS_FUNC(aclopSetKernelWorkspaceSizes, kernelDesc, numWorkspaces, workspaceSizes);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopSetKernelWorkspaceSizes,kernelDesc, numWorkspaces, workspaceSizes);
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
        PASS_FUNC(aclopStartDumpArgs, dumpType, path);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopStartDumpArgs,dumpType, path);
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
        PASS_FUNC(aclopUpdateParams, opType, numInputs, inputDesc, numOutputs, outputDesc, attr);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclopUpdateParams,opType, numInputs, inputDesc, numOutputs, outputDesc, attr);
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
        PASS_FUNC(aclprofCreateConfig, deviceIdList, deviceNums, aicoreMetrics, aicoreEvents, dataTypeConfig);
    #else
        DEFINE_RETURN_VARIBLE(aclprofConfig*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofCreateConfig,deviceIdList, deviceNums, aicoreMetrics, aicoreEvents, dataTypeConfig);
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
        PASS_FUNC(aclprofCreateSubscribeConfig, timeInfoSwitch, aicoreMetrics, fd);
    #else
        DEFINE_RETURN_VARIBLE(aclprofSubscribeConfig*, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofCreateSubscribeConfig,timeInfoSwitch, aicoreMetrics, fd);
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
    return ;
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
    return ;
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
        PASS_FUNC(aclprofGetModelId, opInfo, opInfoLen, index);
    #else
        DEFINE_RETURN_VARIBLE(size_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetModelId,opInfo, opInfoLen, index);
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
        PASS_FUNC(aclprofGetOpDuration, opInfo, opInfoLen, index);
    #else
        DEFINE_RETURN_VARIBLE(uint64_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpDuration,opInfo, opInfoLen, index);
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
        PASS_FUNC(aclprofGetOpEnd, opInfo, opInfoLen, index);
    #else
        DEFINE_RETURN_VARIBLE(uint64_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpEnd,opInfo, opInfoLen, index);
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
        PASS_FUNC(aclprofGetOpName, opInfo, opInfoLen, index, opName, opNameLen);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpName,opInfo, opInfoLen, index, opName, opNameLen);
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
        PASS_FUNC(aclprofGetOpNameLen, opInfo, opInfoLen, index, opNameLen);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpNameLen,opInfo, opInfoLen, index, opNameLen);
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
        PASS_FUNC(aclprofGetOpNum, opInfo, opInfoLen, opNumber);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpNum,opInfo, opInfoLen, opNumber);
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
        PASS_FUNC(aclprofGetOpStart, opInfo, opInfoLen, index);
    #else
        DEFINE_RETURN_VARIBLE(uint64_t, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpStart,opInfo, opInfoLen, index);
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
        PASS_FUNC(aclprofGetOpType, opInfo, opInfoLen, index, opType, opTypeLen);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpType,opInfo, opInfoLen, index, opType, opTypeLen);
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
        PASS_FUNC(aclprofGetOpTypeLen, opInfo, opInfoLen, index, opTypeLen);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetOpTypeLen,opInfo, opInfoLen, index, opTypeLen);
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
        PASS_FUNC(aclprofGetStepTimestamp, stepInfo, tag, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofGetStepTimestamp,stepInfo, tag, stream);
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
        PASS_FUNC(aclprofInit, profilerResultPath, length);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofInit,profilerResultPath, length);
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
        PASS_FUNC(aclprofMarkEx, msg, msgLen, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofMarkEx,msg, msgLen, stream);
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
        PASS_FUNC(aclprofModelSubscribe, modelId, profSubscribeConfig);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofModelSubscribe,modelId, profSubscribeConfig);
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
        PASS_FUNC(aclprofRangeStart, stamp, rangeId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofRangeStart,stamp, rangeId);
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
        PASS_FUNC(aclprofSetConfig, configType, config, configLength);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofSetConfig,configType, config, configLength);
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
        PASS_FUNC(aclprofSetStampTraceMessage, stamp, msg, msgLen);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclprofSetStampTraceMessage,stamp, msg, msgLen);
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
        PASS_FUNC(aclrtAllocatorRegister, stream, allocatorDesc);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorRegister,stream, allocatorDesc);
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
        PASS_FUNC(aclrtAllocatorSetAllocAdviseFuncToDesc, allocatorDesc, func);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorSetAllocAdviseFuncToDesc,allocatorDesc, func);
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
        PASS_FUNC(aclrtAllocatorSetAllocFuncToDesc, allocatorDesc, func);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorSetAllocFuncToDesc,allocatorDesc, func);
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
        PASS_FUNC(aclrtAllocatorSetFreeFuncToDesc, allocatorDesc, func);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorSetFreeFuncToDesc,allocatorDesc, func);
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
        PASS_FUNC(aclrtAllocatorSetGetAddrFromBlockFuncToDesc, allocatorDesc, func);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorSetGetAddrFromBlockFuncToDesc,allocatorDesc, func);
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
        PASS_FUNC(aclrtAllocatorSetObjToDesc, allocatorDesc, allocator);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtAllocatorSetObjToDesc,allocatorDesc, allocator);
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
        PASS_FUNC(aclrtBinaryGetFunction, binHandle, kernelName, funcHandle);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtBinaryGetFunction,binHandle, kernelName, funcHandle);
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
        PASS_FUNC(aclrtBinaryLoad, binary, binHandle);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtBinaryLoad,binary, binHandle);
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
        PASS_FUNC(aclrtCreateBinary, data, dataLen);
    #else
        DEFINE_RETURN_VARIBLE(aclrtBinary, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateBinary,data, dataLen);
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
        PASS_FUNC(aclrtCreateContext, context, deviceId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateContext,context, deviceId);
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
        PASS_FUNC(aclrtCreateEventExWithFlag, event, flag);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateEventExWithFlag,event, flag);
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
        PASS_FUNC(aclrtCreateEventWithFlag, event, flag);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateEventWithFlag,event, flag);
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
        PASS_FUNC(aclrtCreateStreamWithConfig, stream, priority, flag);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCreateStreamWithConfig,stream, priority, flag);
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
        PASS_FUNC(aclrtCtxGetSysParamOpt, opt, value);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCtxGetSysParamOpt,opt, value);
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
        PASS_FUNC(aclrtCtxSetSysParamOpt, opt, value);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtCtxSetSysParamOpt,opt, value);
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
        PASS_FUNC(aclrtDeviceCanAccessPeer, canAccessPeer, deviceId, peerDeviceId);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDeviceCanAccessPeer,canAccessPeer, deviceId, peerDeviceId);
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
        PASS_FUNC(aclrtDeviceEnablePeerAccess, peerDeviceId, flags);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtDeviceEnablePeerAccess,peerDeviceId, flags);
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
        PASS_FUNC(aclrtEventElapsedTime, ms, startEvent, endEvent);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtEventElapsedTime,ms, startEvent, endEvent);
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
        PASS_FUNC(aclrtGetDeviceUtilizationRate, deviceId, utilizationInfo);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetDeviceUtilizationRate,deviceId, utilizationInfo);
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
        PASS_FUNC(aclrtGetGroupInfoDetail, groupInfo, groupIndex, attr, attrValue, valueLen, paramRetSize);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetGroupInfoDetail,groupInfo, groupIndex, attr, attrValue, valueLen, paramRetSize);
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
        PASS_FUNC(aclrtGetMemInfo, attr, free, total);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetMemInfo,attr, free, total);
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
        PASS_FUNC(aclrtGetOverflowStatus, outputAddr, outputSize, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetOverflowStatus,outputAddr, outputSize, stream);
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
        PASS_FUNC(aclrtGetStreamOverflowSwitch, stream, flag);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetStreamOverflowSwitch,stream, flag);
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
        PASS_FUNC(aclrtGetVersion, majorVersion, minorVersion, patchVersion);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtGetVersion,majorVersion, minorVersion, patchVersion);
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
        PASS_FUNC(aclrtLaunchCallback, fn, userData, blockType, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtLaunchCallback,fn, userData, blockType, stream);
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
        PASS_FUNC(aclrtLaunchKernel, funcHandle, blockDim, argsData, argsSize, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtLaunchKernel,funcHandle, blockDim, argsData, argsSize, stream);
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
        PASS_FUNC(aclrtMalloc, devPtr, size, policy);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMalloc,devPtr, size, policy);
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
        PASS_FUNC(aclrtMallocAlign32, devPtr, size, policy);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMallocAlign32,devPtr, size, policy);
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
        PASS_FUNC(aclrtMallocCached, devPtr, size, policy);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMallocCached,devPtr, size, policy);
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
        PASS_FUNC(aclrtMallocHost, hostPtr, size);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMallocHost,hostPtr, size);
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
        PASS_FUNC(aclrtMallocPhysical, handle, size, prop, flags);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMallocPhysical,handle, size, prop, flags);
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
        PASS_FUNC(aclrtMapMem, virPtr, size, offset, handle, flags);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMapMem,virPtr, size, offset, handle, flags);
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
        PASS_FUNC(aclrtMemExportToShareableHandle, handle, handleType, flags, shareableHandle);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemExportToShareableHandle,handle, handleType, flags, shareableHandle);
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
        PASS_FUNC(aclrtMemFlush, devPtr, size);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemFlush,devPtr, size);
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
        PASS_FUNC(aclrtMemGetAllocationGranularity, prop, option, granularity);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemGetAllocationGranularity,prop, option, granularity);
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
        PASS_FUNC(aclrtMemImportFromShareableHandle, shareableHandle, deviceId, handle);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemImportFromShareableHandle,shareableHandle, deviceId, handle);
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
        PASS_FUNC(aclrtMemInvalidate, devPtr, size);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemInvalidate,devPtr, size);
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
        PASS_FUNC(aclrtMemSetPidToShareableHandle, shareableHandle, pid, pidNum);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemSetPidToShareableHandle,shareableHandle, pid, pidNum);
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
        PASS_FUNC(aclrtMemcpy, dst, destMax, src, count, kind);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemcpy,dst, destMax, src, count, kind);
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
        PASS_FUNC(aclrtMemcpy2d, dst, dpitch, src, spitch, width, height, kind);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemcpy2d,dst, dpitch, src, spitch, width, height, kind);
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
        PASS_FUNC(aclrtMemcpy2dAsync, dst, dpitch, src, spitch, width, height, kind, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemcpy2dAsync,dst, dpitch, src, spitch, width, height, kind, stream);
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
        PASS_FUNC(aclrtMemcpyAsync, dst, destMax, src, count, kind, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemcpyAsync,dst, destMax, src, count, kind, stream);
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
        PASS_FUNC(aclrtMemset, devPtr, maxCount, value, count);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemset,devPtr, maxCount, value, count);
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
        PASS_FUNC(aclrtMemsetAsync, devPtr, maxCount, value, count, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtMemsetAsync,devPtr, maxCount, value, count, stream);
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
        PASS_FUNC(aclrtQueryDeviceStatus, deviceId, deviceStatus);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtQueryDeviceStatus,deviceId, deviceStatus);
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
        PASS_FUNC(aclrtQueryEvent, event, status);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtQueryEvent,event, status);
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
        PASS_FUNC(aclrtQueryEventStatus, event, status);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtQueryEventStatus,event, status);
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
        PASS_FUNC(aclrtQueryEventWaitStatus, event, status);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtQueryEventWaitStatus,event, status);
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
        PASS_FUNC(aclrtRecordEvent, event, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtRecordEvent,event, stream);
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
        PASS_FUNC(aclrtReserveMemAddress, virPtr, size, alignment, expectPtr, flags);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtReserveMemAddress,virPtr, size, alignment, expectPtr, flags);
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
        PASS_FUNC(aclrtSetStreamFailureMode, stream, mode);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSetStreamFailureMode,stream, mode);
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
        PASS_FUNC(aclrtSetStreamOverflowSwitch, stream, flag);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSetStreamOverflowSwitch,stream, flag);
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
        PASS_FUNC(aclrtStreamQuery, stream, status);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtStreamQuery,stream, status);
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
        PASS_FUNC(aclrtStreamWaitEvent, stream, event);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtStreamWaitEvent,stream, event);
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
        PASS_FUNC(aclrtSubscribeReport, threadId, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSubscribeReport,threadId, stream);
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
        PASS_FUNC(aclrtSynchronizeEventWithTimeout, event, timeout);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSynchronizeEventWithTimeout,event, timeout);
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
        PASS_FUNC(aclrtSynchronizeStreamWithTimeout, stream, timeout);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtSynchronizeStreamWithTimeout,stream, timeout);
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
        PASS_FUNC(aclrtUnSubscribeReport, threadId, stream);
    #else
        DEFINE_RETURN_VARIBLE(aclError, result);
        CALL_FUNC_WITH_RETURN(result,so_aclrtUnSubscribeReport,threadId, stream);
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
