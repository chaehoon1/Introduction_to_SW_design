#include <stdio.h>

int factorial(int num);

int main(void) {

	int num, val;
	scanf("%d", &num);

	val = factorial(num);

	printf("%d\n", val);

	return 0;
}

int factorial(int num) {
	if (num == 1) {return 1;}
	else {
		return (num*factorial(num-1));
	}
}
