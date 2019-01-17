CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

dado: dado.o main.o random.o

random.o: random.c random.h
dado.o: dado.c dado.h random.h
main.o: main.c dado.h

.PHONY: clean
clean:
	rm -rf *.o dado

