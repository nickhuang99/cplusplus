PROGRAM=first

all: ${PROGRAM}


%.c: %.l
	flex -t $< > $*.c 
	
%: %.c
	gcc -I. -o $@ $<	
.SECONDARY:	
clean:
	rm -f ${PROGRAM} $(PROGRAM:=.c) 	