CFLAGS= -g -std=c++11
LDFLAGS=

all: test

test: test.o string.o
	g++ test.o string.o -o test

test.o: test.cpp string.h
	g++ $(CFLAGS) -c test.cpp -o test.o

string.o: string.cpp string.h
	g++ $(CFLAGS) -c  string.cpp -o string.o
clean:
	rm -f *.o
