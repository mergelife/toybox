CC = gcc
CFLAGS = -g -Wall
#LDFLAGS = -lCppUTest

all: test_container_of

test_container_of: container_of.o
	$(CC) -static -o test_container_of container_of.o $(LDFLAGS)


clean:
	-rm -f *.o test_container_of 

