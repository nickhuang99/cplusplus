export LANG=en_US.UTF-8
CC=/home/nick/opt/gcc-10.2.0/bin/gcc
CPP=/home/nick/opt/gcc-10.2.0/bin/g++

all: cplusplus.exe

cplusplus.exe: bnf.exe lexer.exe
	${CPP} -std=c++20 -I. -g -O0 -DYYMAXDEPTH=80000 cplusplus.c lexer.c -o cplusplus.exe
		
bnf.exe: grammar.txt bnf.cpp
	${CPP} -std=c++20 -g -O0 -I. -static-libstdc++ bnf.cpp -o bnf.exe	
	./bnf.exe
	bison -d -t -v -g --html=cplusplus.html --report-file=cplusplus.output cplusplus.y -o cplusplus.c
	
lexer.exe: lexer.l cplusplus.h
	flex -t lexer.l > lexer.c
	${CPP} -std=c++20 -I. -DLEXER_TEST lexer.c -o lexer.exe 

clean:
	rm -f *.exe cplusplus.* lexer.c
			
