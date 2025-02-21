

OUTPUT_DIR ?= .

all: compile


test:tmp.cpp
	@python opcompilergen.py > $(OUTPUT_DIR)/opcompiler.cpp
	g++ opcompiler.cpp -E -o $(OUTPUT_DIR)/tmp.o -I/usr/local/Ascend/ascend-toolkit/latest/include/ 


compile: opcompilergen.py
	@python opcompilergen.py > $(OUTPUT_DIR)/opcompiler.cpp
	g++ $(OUTPUT_DIR)/opcompiler.cpp -c -o $(OUTPUT_DIR)/libacl_op_compiler.o --shared -fPIC -I /usr/local/Ascend/ascend-toolkit/latest/include/ -L /usr/local/Ascend/ascend-toolkit/latest/acllib/lib64/ -lascendcl -lacl_op_compiler

clean:
	rm $(OUTPUT_DIR)/libopcompiler.o
	rm $(OUTPUT_DIR)/opcompiler.cpp
	