# Makefile

all: libtest.a

libtest.a: test1.o test2.o
	ar -cvq libtest.a *.o

test1.o: test1.c
	gcc -c test1.c

test2.o: test2.c
	gcc -c test2.c

main:
	gcc main.c -L. -ltest -o main

clean:
	rm -f *.o *.a main
