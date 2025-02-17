# export ASCEND_TOOLKIT_HOME=/usr/local/Ascend/ascend-toolkit/latest
# export LD_LIBRARY_PATH=${ASCEND_TOOLKIT_HOME}/lib64:${ASCEND_TOOLKIT_HOME}/lib64/plugin/opskernel:${ASCEND_TOOLKIT_HOME}/lib64/plugin/nnengine:${ASCEND_TOOLKIT_HOME}/opp/built-in/op_impl/ai_core/tbe/op_tiling/lib/linux/$(arch):$LD_LIBRARY_PATH

ASCEND_TOOLKIT_HOME=/usr/local/Ascend/ascend-toolkit/latest
ACL_INCLUDE_PATH=$(ASCEND_TOOLKIT_HOME)/include/
ACL_LIB_PATH=$(ASCEND_TOOLKIT_HOME)/lib64/

all: first_test

first_test: malloc.cpp
	g++ ./malloc.cpp -I$(ACL_INCLUDE_PATH) -lascendcl -L $(ACL_LIB_PATH)
