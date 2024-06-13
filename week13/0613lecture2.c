#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *p1, *p2, *p3;

	p1 = (int*) malloc(sizeof(int));
	p2 = (int*) malloc(sizeof(int));

	printf("p1 : %p\n", p1);
	printf("p2 : %p\n", p2);

	free(p1);

	p3 = (int*) malloc(sizeof(int));

	printf("p3 : %p\n", p3);

	return 0;
}
