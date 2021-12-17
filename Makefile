export LANG=en_US.UTF-8
CC=/home/nick/opt/gcc-10.2.0/bin/gcc
CPP=/home/nick/opt/gcc-10.2.0/bin/g++

all: cplusplus.c lexer.exe
#	${CC} -g -O0 cplusplus.c -o cplusplus
	cp grammar.txt /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp bnf.cpp /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp cplusplus.y /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp Makefile /mnt/sda3/diabloforum/public_html/mycplusplus/
	cp cplusplus.html /mnt/sda3/diabloforum/public_html/mycplusplus/	
	cp lexer.l /mnt/sda3/diabloforum/public_html/mycplusplus/

		
bnf.exe: grammar.txt bnf.cpp
	${CPP} -std=c++20 -g -O0 -static-libstdc++ bnf.cpp -o bnf.exe	
	./bnf.exe
	
cplusplus.y lexer.l: bnf.exe	
	
###-Wdangling-alias	
cplusplus.c: cplusplus.y
	bison -d -t -v -g --html=cplusplus.html --report-file=cplusplus.output cplusplus.y -o cplusplus.c
	
lexer.c: lexer.l
	flex -t lexer.l > lexer.c

lexer.exe: lexer.c lexer.l
	g++ -I. lexer.c -o lexer.exe -lfl
#	./lexer.exe /tmp/bnf.i

			
