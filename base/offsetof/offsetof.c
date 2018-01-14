#include <stdio.h>

#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)

struct test_st {
	char test_1;
	int  test_2;
	char test_3;
	short test_4;
};


int main(int argc, char **argv)
{

	int off_1, off_2, off_3, off_4;


	printf("sizeof(char): %ld\n", sizeof(char));
	printf("sizeof(short): %ld\n", sizeof(short));
	printf("sizeof(int): %ld\n", sizeof(int));
	printf("sizeof(long): %ld\n", sizeof(long));
	printf("sizeof(long long): %ld\n", sizeof(long long));
	printf("sizeof(void *): %ld\n", sizeof(void *));

	off_1 = offsetof(struct test_st, test_1);
	printf("test_1 offset test_st: %d\n", off_1);

	off_2 = offsetof(struct test_st, test_2);
	printf("test_2 offset test_st: %d\n", off_2);

	off_3 = offsetof(struct test_st, test_3);
	printf("test_3 offset test_st: %d\n", off_3);

	off_4 = offsetof(struct test_st, test_4);
	printf("test_4 offset test_st: %d\n", off_4);





	return 0;
}
