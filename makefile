all: list.o
	gcc list.o
run:
	./a.out
list.o: list.c list.h
	gcc -c list.c
