

all: compile


test:tmp.cpp
	@python gen.py > tmp.cpp
	g++ tmp.cpp -E -o tmp.o -I/usr/local/Ascend/ascend-toolkit/latest/include/ 


compile: profgen.py
	@python profgen.py > libprof.cpp
	g++ libprof.cpp -c -o libprof.o --shared -fPIC -I /usr/local/Ascend/ascend-toolkit/latest/include/ -L /usr/local/Ascend/ascend-toolkit/latest/acllib/lib64/ -lascendcl

clean:
	rm libprof.o
	rm libprof.cpp
	