export LANG=en_US.UTF-8
CC=/home/nick/opt/gcc-10.2.0/bin/gcc
CPP=/home/nick/opt/gcc-10.2.0/bin/g++

all: cplusplus.c scanner.c
	${CC} -g -O0 cplusplus.c scanner.c -o cplusplus
	cp bnf.txt /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp bnf.cpp /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp cplusplus.y /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp Makefile /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp cplusplus.html /mnt/sda3/diabloforum/public_html/mycplusplus/	
	cp scanner.l /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp scanner.c /mnt/sda3/diabloforum/public_html/mycplusplus/	
	cp cplusplus.c /mnt/sda3/diabloforum/public_html/mycplusplus/	
		
bnf.exe: bnf.txt bnf.cpp
	${CPP} -std=c++20 -g -O0 -static-libstdc++ bnf.cpp -o bnf.exe	
	./bnf.exe
cplusplus.y scanner.l: bnf.exe	
	
###-Wdangling-alias	
cplusplus.c: cplusplus.y
	bison -d -t -v -g --html=cplusplus.html --report-file=cplusplus.output cplusplus.y -o cplusplus.c
	
scanner.c: scanner.l
	flex -t scanner.l > scanner.c
			
