
OUTPUT_DIR ?= .

all: compile


test:tmp.cpp
	@python gen.py > $(OUTPUT_DIR)/tmp.cpp
	g++ tmp.cpp -E -o $(OUTPUT_DIR)/tmp.o -I/usr/local/Ascend/ascend-toolkit/latest/include/ 


compile: profgen.py
	@python profgen.py > $(OUTPUT_DIR)/libprof.cpp
	g++ $(OUTPUT_DIR)/libprof.cpp -c -o $(OUTPUT_DIR)/libaclprof.o --shared -fPIC -I /usr/local/Ascend/ascend-toolkit/latest/include/ -L /usr/local/Ascend/ascend-toolkit/latest/acllib/lib64/ -lascendcl
	
	g++ $(OUTPUT_DIR)/libprof.cpp -o $(OUTPUT_DIR)/libaclprof.so --shared -fPIC -I /usr/local/Ascend/ascend-toolkit/latest/include/ -L /usr/local/Ascend/ascend-toolkit/latest/acllib/lib64/ -lascendcl

clean:
	rm $(OUTPUT_DIR)/libprof.o
	rm $(OUTPUT_DIR)/libprof.cpp
	