PROGRAM=parser
all: ${PROGRAM}
CXX=g++ -g -O0

%.cc %.html %.gv : %.yy
	bison -d --header --html --graph -o $*.cc  $<

%.cc: %.ll
	flex $(FLEXFLAGS) -o $@ $<
		
parser.cc: lexer.cc

$(PROGRAM): parser.cc 
	$(CXX) -I. -o $@ $^	
	
.SECONDARY:	
clean:
	rm -f ${PROGRAM} ${PROGRAM}.cc ${PROGRAM}.hh ${PROGRAM}.gv ${PROGRAM}.html ${PROGRAM}.xml *.o lexer.cc