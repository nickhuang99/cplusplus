export LANG=en_US.UTF-8
CC=/home/nick/opt/gcc-10.2.0/bin/g++
#BISON=/home/nick/Downloads/bison-3.7/src/bison
#BISON=bison

all: cplusplus.c scanner.c
	cp bnf.txt /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp bnf.cpp /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp cplusplus.y /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp Makefile /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp cplusplus.html /mnt/sda3/diabloforum/public_html/mycplusplus/
	
		
bnf.exe: bnf.txt bnf.cpp
	${CC} -std=c++20 -g -O0 -static-libstdc++ bnf.cpp -o bnf.exe	
	./bnf.exe
cplusplus.y scanner.l: bnf.exe
	
	
cplusplus.c: cplusplus.y
	bison -d -v -g --html=cplusplus.html --report-file=cplusplus.output cplusplus.y -o cplusplus.c
	
scanner.c: scanner.l
	flex scanner.l -o scanner.c
			
