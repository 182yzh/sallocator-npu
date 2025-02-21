
OUTPUT_DIR ?= .

all: compile


test:tmp.cpp
	@python aclrtgen.py > $(OUTPUT_DIR)/tmp.cpp
	g++ tmp.cpp -E -o $(OUTPUT_DIR)/tmp.o -I/usr/local/Ascend/ascend-toolkit/latest/include/ 


compile: aclrtgen.py
	@python aclrtgen.py > $(OUTPUT_DIR)/libaclrt.cpp
	g++ $(OUTPUT_DIR)/libaclrt.cpp -c -o $(OUTPUT_DIR)/libaclrt.o --shared -fPIC -I /usr/local/Ascend/ascend-toolkit/latest/include/ -L /usr/local/Ascend/ascend-toolkit/latest/acllib/lib64/ -lascendcl

clean:
	rm $(OUTPUT_DIR)/libaclrt.o
	rm $(OUTPUT_DIR)/libaclrt.cpp
	