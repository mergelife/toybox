#include <stdio.h>

//http://blog.csdn.net/wangpeihuixyz/article/details/40593619

#define align(x, a)   _align(x, (typeof(x))(a) - 1)
#define _align(x, mask)  (((x) + (mask)) & ~(mask))

#define ROUND_UP(x, align) (((int) (x) + (align - 1)) & ~(align - 1))
#define ROUND_DOWN(x, align) ((int)(x) & ~(align - 1))
#define ALIGNED(x, align) (((int)(x) & (align - 1)) == 0)

int main(int argc, char* argv[])
{

	int t, mask;

	while (1) {
		scanf("%d %d", &t, &mask);
		printf("t=%d, mask=%d, result=%d\n", t, mask, align(t, mask));		
		printf("# t=%d, mask=%d, result=%d\n", t, mask, ROUND_UP(t, mask));		
		printf("$ t=%d, mask=%d, result=%d\n", t, mask, ROUND_DOWN(t, mask));		
		printf("%d   %d\n", ALIGNED(align(t, mask), mask), ALIGNED(ROUND_UP(t, mask), mask));
	}

	return 0;
#if 0 //64 bit test
    printf("sizeof(char) %d\n", sizeof(char)*8);
    printf("sizeof(short) %d\n", sizeof(short)*8);
    printf("sizeof(int) %d\n", sizeof(int)*8);
    printf("sizeof(long) %d\n", sizeof(long)*8);
    printf("sizeof(long long) %d\n", sizeof(long long)*8);
    printf("sizeof(void*) %d\n", sizeof(void*)*8);
    printf("sizeof(size_t) %d\n", sizeof(size_t)*8);

    int i, *p, *q;

	struct foo {
        int i;
        long j;
		int x;
	} st_foo; 
    p = &i;
    q = (int *) (int)&i;

    printf("p %p   %lx, q %p   %lx\n", p, p, q, q);
    printf("sizeof(st_foo) %d    %d\n", sizeof(struct foo), sizeof(st_foo));

    return 0;
#endif
}
