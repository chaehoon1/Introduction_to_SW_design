#include <stdio.h>

int main(void) {
	
	int a;
	
	printf("int a %ld\n", sizeof(a));

	unsigned int b;

	printf("unsigned int b %ld\n", sizeof(b));

	long c;

	printf("long c %ld\n", sizeof(c));

	unsigned long d;

        printf("unsigned long d %ld\n", sizeof(d));

	short e;

        printf("short e %ld\n", sizeof(e));

        unsigned short f;

        printf("unsigned short f %ld\n", sizeof(f));

	char g;

        printf("char g %ld\n", sizeof(g));

	unsigned char h;

        printf("unsigned char h %ld\n", sizeof(h));

	float i;

        printf("float i %ld\n", sizeof(i));

	double j;

        printf("double j %ld\n", sizeof(j));

	return 0;
}
