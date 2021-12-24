# This Makefile is designed to be simple and readable.  It does not
# aim at portability.  It requires GNU Make.

BASE = calc
BISON = bison
CC=g++

all: $(BASE)

%.c %.h %.html %.xml %.gv: %.y
	$(BISON) $(BISONFLAGS)  --html --graph -o $*.c $<

$(BASE): $(BASE).o
	$(CC) $(CFLAGS) -o $@ $^

run: $(BASE)
	@echo "Type arithmetic expressions.  Quit with ctrl-d."
	./$<
.SECONDARY:

CLEANFILES =									\
  $(BASE) *.o $(BASE).[ch] $(BASE).output $(BASE).xml $(BASE).html $(BASE).gv

clean:
	rm -f $(CLEANFILES)
