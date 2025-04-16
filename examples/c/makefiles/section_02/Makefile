program: main.c test.o
	gcc main.c test.o -o program -O3 -Wall

test.o: test.c test.h
	gcc test.c -c -O3 -Wall

clean: 
	rm program test.o
