

all: compile


test:tmp.cpp
	@python opcompilergen.py > opcompiler.cpp
	g++ opcompiler.cpp -E -o tmp.o -I/usr/local/Ascend/ascend-toolkit/latest/include/ 


compile: opcompilergen.py
	@python opcompilergen.py > opcompiler.cpp
	g++ opcompiler.cpp -c -o libopcompiler.o --shared -fPIC -I /usr/local/Ascend/ascend-toolkit/latest/include/ -L /usr/local/Ascend/ascend-toolkit/latest/acllib/lib64/ -lascendcl

clean:
	rm libopcompiler.o
	rm opcompiler.cpp
	