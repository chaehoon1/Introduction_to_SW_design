#include <stdio.h>

int main(void) {

	char* a = NULL;
	short* b = NULL;
        int* c = NULL;
        long* d = NULL;

	printf("Bytes required for\n");
	printf(" a: %luB, b: %luB, c: %luB, d: %luB\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));

	printf("Pytes pointed by\n");
	printf(" a: %luB, b: %luB, c: %luB, d: %luB\n", sizeof(*a), sizeof(*b), sizeof(*c), sizeof(*d));

	return 0;
}
