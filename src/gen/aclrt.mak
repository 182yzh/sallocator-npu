

CXX := g++
CXXFLAGS := -Wall -O2 --shared -fPIC
ACLRTFLAGS := -I /usr/local/Ascend/ascend-toolkit/latest/include/ -L /usr/local/Ascend/ascend-toolkit/latest/lib64 -lascendcl -lacl_op_compiler


BUILD_DIR ?= ../build/aclrt

CPP_FILES = $(wildcard $(BUILD_DIR)/*.cpp)
OBJ_FILES = $(CPP_FILES:.cpp=.o)
SO_FILES  = $(CPP_FILES:.cpp=.so)



.SECONDARY: $(OBJ_FILES)

all: $(SO_FILES) totalso


$(BUILD_DIR)/%.o: $(BUILD_DIR)/%.cpp 
	$(CXX) $(CXXFLAGS)  $(ACLRTFLAGS) -c $< -o $@


$(BUILD_DIR)/%.so: $(BUILD_DIR)/%.o  
	$(CXX) $(CXXFLAGS)  $(ACLRTFLAGS) $< -o $@

totalso: $(SO_FILES)
	$(CXX) $(CXXFLAGS)  $(ACLRTFLAGS) $(OBJ_FILES) -o $(BUILD_DIR)/clientaclrt.so

clean:
	rm -rf $(BUILD_DIR)/*

# .PHONY: all generate clean
	
