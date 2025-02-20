

all: compile


test:tmp.cpp
	@python aclrtgen.py > tmp.cpp
	g++ tmp.cpp -E -o tmp.o -I/usr/local/Ascend/ascend-toolkit/latest/include/ 


compile: aclrtgen.py
	@python aclrtgen.py > libaclrt.cpp
	g++ libaclrt.cpp -c -o libaclrt.o --shared -fPIC -I /usr/local/Ascend/ascend-toolkit/latest/include/ -L /usr/local/Ascend/ascend-toolkit/latest/acllib/lib64/ -lascendcl

clean:
	rm libaclrt.o
	rm libaclrt.cpp
	