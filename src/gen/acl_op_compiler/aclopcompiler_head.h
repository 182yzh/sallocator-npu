aclError aclopCompile(const char* opType,  int numInputs,  const aclTensorDesc* const inputDesc[],  int numOutputs,  const aclTensorDesc* const outputDesc[],  const aclopAttr* attr,  aclopEngineType engineType,  aclopCompileType compileFlag,  const char* opPath);
aclError aclopCompileAndExecute(const char* opType,  int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[],  int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[],  const aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag,  const char* opPath, aclrtStream stream);
aclError aclopCompileAndExecuteV2(const char* opType,  int numInputs, aclTensorDesc* inputDesc[], aclDataBuffer* inputs[],  int numOutputs, aclTensorDesc* outputDesc[], aclDataBuffer* outputs[],  aclopAttr* attr, aclopEngineType engineType, aclopCompileType compileFlag,  const char* opPath, aclrtStream stream);
aclError aclSetCompileopt(aclCompileOpt opt, const char* value);
size_t aclGetCompileoptSize(aclCompileOpt opt);
aclError aclGetCompileopt(aclCompileOpt opt, char* value, size_t length);
aclError aclopSetCompileFlag(aclOpCompileFlag flag);
aclError aclGenGraphAndDumpForOp(const char* opType,  int numInputs, const aclTensorDesc* const inputDesc[], const aclDataBuffer* const inputs[],  int numOutputs, const aclTensorDesc* const outputDesc[], aclDataBuffer* const outputs[],  const aclopAttr* attr, aclopEngineType engineType,  const char* graphDumpPath, const aclGraphDumpOption* graphDumpOpt);
aclGraphDumpOption* aclCreateGraphDumpOpt();
aclError aclDestroyGraphDumpOpt(const aclGraphDumpOption* graphDumpOpt);