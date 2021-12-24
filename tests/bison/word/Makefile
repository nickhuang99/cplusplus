PROGRAM=word

all: ${PROGRAM}


%.cc %.html %.gv: %.y
	bison --html --graph -o $*.cc  $<
	
%: %.cc
	g++ -std=c++17 -I. -o $@ $<	
.SECONDARY:	
clean:
	rm -f ${PROGRAM} $(PROGRAM:=.cc) $(PROGRAM:=.hh) $(PROGRAM:=.gv) $(PROGRAM:=.html) $(PROGRAM:=.xml)	