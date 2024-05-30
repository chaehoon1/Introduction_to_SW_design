#include <stdio.h>

int add(int x, int y);

int main(void) {

	int x = 1, y = 2, res;
	res = add(x, y);

	printf("address of x, y, res in main() : x is %p, y is %p, res is %p\n", &x, &y, &res);
        printf("value of x, y, res in main() : x is %d, y is %d, res is %d\n", x, y, res);
	
	return 0;
}

int add(int x, int y) {

	int res;
	res = x + y;

	printf("address of x, y, res in add() : x is %p, y is %p, res is %p\n", &x, &y, &res);
	printf("value of x, y, res in add() : x is %d, y is %d, res is %d\n", x, y, res);

	return res;
}
