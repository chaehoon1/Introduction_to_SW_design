#include <stdio.h>

int add (int a, int b) {
	return a + b;
}

int main(void) {
	int (*fptr) (int, int);
	int x, y;
	
	fptr = add;

	printf("Enter the two numbers to add : ");
	scanf("%d %d", &x, &y);
	printf("%d\n", fptr(x, y));

	return 0;
}
