#include <stdio.h>

void prime_factors(int num);

int main(void) {

	int num;
	num = 14;

	prime_factors(num);

	return 0;
}

void prime_factors(int num) {
	for (int i = 1; i <= num; i++) {
		if ((num % i) == 0) {
			printf("%d\n", i);
		}
	}
	return;
}

