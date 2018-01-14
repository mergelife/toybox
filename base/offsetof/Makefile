CC = gcc
CFLAGS = -g -Wall
#LDFLAGS = -lCppUTest

all: test_offsetof

test_offsetof: offsetof.o
	$(CC) -o test_offsetof offsetof.o $(LDFLAGS)


clean:
	-rm -f *.o test_offsetof

