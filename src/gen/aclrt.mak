

CXX := g++
CXXFLAGS := -Wall -O2 --shared -fPIC 
ACLRTFLAGS := -I /usr/local/Ascend/ascend-toolkit/latest/include/ -L /usr/local/Ascend/ascend-toolkit/latest/lib64 -lascendcl -lacl_op_compiler 


BUILD_DIR ?= ../build/aclrt

CPP_FILES := $(wildcard $(BUILD_DIR)/*.cpp)
OBJ_FILES := $(CPP_FILES:.cpp=.o)
SO_FILES  := $(CPP_FILES:.cpp=.so)
OBJS := $(wildcard $(BUILD_DIR)/*.o)


.SECONDARY: $(OBJ_FILES)


all: generate $(SO_FILES) totalso

generate:
	@python total_gen.py
	mv *.cpp $(BUILD_DIR)/

totalso: $(OBJS)
	$(CXX) $(CXXFLAGS)  $(ACLRTFLAGS) $(OBJ_FILES) -o $(BUILD_DIR)/clientaclrt.so


$(BUILD_DIR)/%.o: $(BUILD_DIR)/%.cpp
	$(CXX) $(CXXFLAGS)  $(ACLRTFLAGS) -c $< -o $@


$(BUILD_DIR)/%.so: $(BUILD_DIR)/%.o
	$(CXX) $(CXXFLAGS)  $(ACLRTFLAGS) $< -o $@

clean:
	rm -rf $(BUILD_DIR)/*

# .PHONY: all generate clean
	
