program: main.c test.o
	gcc main.c test.o -Wall -O3 -o program

test.o: test.c test.h
	gcc test.c -c -Wall -O3

clean:
	rm program test.o
