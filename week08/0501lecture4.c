#include <stdio.h>

int num = 14;

void prime_factors(void);

int main(void) {
	prime_factors();

	num = 13;
	prime_factors();

	return 0;
}

void prime_factors(void) {
	for (int i = 1; i <= num; i++) {
		if ((num % i) == 0) {
			printf("%d\n", i);
		}
	}
	return;
}

