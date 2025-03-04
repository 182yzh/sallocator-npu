
WORKPATH=/home/potato/sallocator-npu/src
BUILD_DIR=$(WORKPATH)/build



all : client.so

client.so:
	make -C gen/aclrt OUTPUT_DIR=$(BUILD_DIR)
	make -C gen/aclprof OUTPUT_DIR=$(BUILD_DIR)
	make -C gen/acl_op_compiler OUTPUT_DIR=$(BUILD_DIR)
	g++ --shared  -fPIC -o $(BUILD_DIR)/client.so $(BUILD_DIR)/libaclrt.o $(BUILD_DIR)/libaclprof.o $(BUILD_DIR)/libacl_op_compiler.o 

clean:
	rm -rf $(BUILD_DIR)/*
