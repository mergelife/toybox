#include <stdio.h>


#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)


#define container_of(ptr, type, member) ({ \
				const typeof(((type *)0)->member) *__mptr = (ptr); \
				(type *)((char *)__mptr - offsetof(type, member)); })

struct test_st {
	char test_1;
	int  test_2;
	char test_3;
	short test_4;
};


int main(int argc, char **argv)
{
	struct test_st test;
	struct test_st *test_p;
	
	test.test_1 = 0xff;
	test.test_2 = 2;
	test.test_3 = 3;
	test.test_4 = 4;

	test_p = container_of(&test.test_1, struct test_st, test_1);

	printf("test_1 = %d\n", test_p->test_1);
	printf("test_2 = %d\n", test_p->test_2);
	printf("test_3 = %d\n", test_p->test_3);
	printf("test_4 = %d\n", test_p->test_4);
	
	return 0;
}


