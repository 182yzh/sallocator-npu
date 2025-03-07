

CXX := g++
CXXFLAGS := -Wall -O2 --shared -fPIC 
ACLNNFLAGS := -I /usr/local/Ascend/ascend-toolkit/latest/include/ -L /usr/local/Ascend/ascend-toolkit/latest/lib64 -lascendcl -laclnn_ops_infer -laclnn_ops_train 

BUILD_DIR ?= ../build/aclnn

CPP_FILES = $(wildcard $(BUILD_DIR)/*.cpp) 
OBJ_FILES = $(CPP_FILES:.cpp=.o)
SO_FILES  = $(CPP_FILES:.cpp=.so)

.SECONDARY: $(OBJ_FILES)

all: $(SO_FILES) totalso


$(BUILD_DIR)/%.o:  $(BUILD_DIR)/%.cpp 
	$(CXX) $(CXXFLAGS)  $(ACLNNFLAGS) -c $< -o $@


$(BUILD_DIR)/%.so:   $(BUILD_DIR)/%.o 
	$(CXX) $(CXXFLAGS)  $(ACLNNFLAGS) $< -o $@

totalso: $(SO_FILES)
	$(CXX) $(CXXFLAGS)  $(ACLNNFLAGS) $(OBJ_FILES) -o $(BUILD_DIR)/clientaclnn.so

clean:
	rm -rf $(BUILD_DIR)/*

# .PHONY: all generate clean
	
