#include <stdio.h>

int is_prime_number(int num);

int main(void) {

	int num;
	scanf("%d", &num);

	if (is_prime_number(num)) {
		printf("%d is a prime numebr\n", num);
	}
	else {
		printf("%d is not a prime number\n", num);
	}

	return 0;
}

int is_prime_number(int num) {
	int count = 0;
	for (int i = 1; i <= num; i++) {
		if ((num % i) == 0) {
			count = count + 1;
		}
	}
	if (count == 2) {
		return 1;
	}
	else {
		return 0;
	}
}

