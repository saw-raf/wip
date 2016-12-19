
all: main

main: main.o bisection.o function.o
	clang -o main main.o bisection.o function.o -lm

main.o: main.c
	clang -c main.c 

bisection.o: bisection.c
	clang -c bisection.c 

function.o: function.c
	clang -c function.c 

clean:
	rm -f main *.o *~
