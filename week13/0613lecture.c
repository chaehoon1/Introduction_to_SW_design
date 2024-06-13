#include <stdio.h>
#include <stdlib.h>

int global;

int add(int x, int y) {
	return x + y;
}

int main(void) {
	int local;
	int* allocated = (int*) malloc(sizeof(int));
	*allocated = add(1,2);

	printf("text : %p\n", &add);
	printf("data : %p\n", &global);
	printf("heap : %p\n", allocated);
	printf("stack : %p\n", &local);

	return 0;
}
