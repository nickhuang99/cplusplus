PROGRAM=parser

all: ${PROGRAM}
CXX=gcc

%.cc %.html %.gv %.hh: %.yy
	bison -d --header --html --graph -o $*.cc  $<

%.cc: %.ll
	flex  $(FLEXFLAGS) -o $@ $<
		
%.o: %.cc
	$(CXX) -c -o $@ $<
lexer.o: parser.hh

$(PROGRAM): parser.o lexer.o 
	$(CXX) -o $@ $^	
	
.SECONDARY:	
clean:
	rm -f ${PROGRAM} *.html *.gv *.o *.cc *.hh	