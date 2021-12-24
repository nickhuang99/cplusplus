# This Makefile is designed to be simple and readable.  It does not
# aim at portability.  It requires GNU Make.

BISON = bison
CXX = g++
CXXFLAGS =
PROGS = simple

simple: CXXFLAGS = -std=c++17


all: $(PROGS)

.SECONDARY:

%.cc %.hh %.html %.gv: %.yy
	$(BISON) $(BISONFLAGS) --html --graph -o $*.cc $<

%: %.cc
	$(CXX) $(CXXFLAGS) -o$@ $<

clean:
	rm -f $(PROGS:=.cc) $(PROGS)
