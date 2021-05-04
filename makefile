CC=g++
CFLAGS= -c -Wall

all: prog
prog: main.o Player.o
	$(CC) main.o Player.o -o prog
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
Player.o: ./src/Player.cpp
	$(CC) $(CFLAGS) ./src/Player.cpp
clean:
	rm -rf *.o
