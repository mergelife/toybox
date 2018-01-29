CC = gcc
CFLAGS = -g -Wall
#LDFLAGS = -lCppUTest

all: test_align

test_align: align.o
	$(CC) -o test_align align.o $(LDFLAGS)


clean:
	-rm -f *.o test_align

