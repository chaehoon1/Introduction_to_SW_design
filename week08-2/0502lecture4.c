#include <stdio.h>

int fibo(int num);

int main(void) {

	int num;
	scanf("%d", &num);

	printf("%d\n", fibo(num));

	return 0;
}

int fibo(int num) {
	if (num == 0) {return 0;}
	else if (num == 1) {return 1;}
	else {
		return (fibo(num-1) + fibo(num-2));
	}
}
