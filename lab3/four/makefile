CC=clang
CFLAGS=-Wall --pedantic -std=c11

all: main

main: main.o newagent.o north.o south.o east.o west.o distance.o
	$(CC) -o main main.o newagent.o north.o south.o east.o west.o distance.o -lm

main.o: main.c
	$(CC) -c main.c

newagent.o: newagent.c
	$(CC) -c newagent.c

north.o: north.c
	$(CC) -c north.c

south.o: south.c
	$(CC) -c south.c

east.o: east.c
	$(CC) -c east.c

west.o: west.c
	$(CC) -c west.c

distance.o: distance.c
	$(CC) -c distance.c 

clean:
	rm -f main *.o *~
