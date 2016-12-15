CC=clang
CFLAGS=-Wall --pedantic -std=c11

all: main

main: main.c phi.c
	clang -o main main.c phi.c

main.o: main.c
	clang -c main.c

palindrom.o: phi.c
	clang -c phi.c

clean:
	rm -f main *.o *~
