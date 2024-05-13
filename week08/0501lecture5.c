#include <stdio.h>

int ret = 0, num;

void is_prime_number(void);

int main(void) {

	scanf("%d", &num);

	is_prime_number();

	if (ret) {
		printf("%d is a prime numebr\n", num);
	}
	else {
		printf("%d is not a prime number\n", num);
	}

	return 0;
}

void is_prime_number(void) {
	int count = 0;
	for (int i = 1; i <= num; i++) {
		if ((num % i) == 0) {
			count = count + 1;
		}
	}
	if (count == 2) {
		ret = 1;
		return;
	}
	ret = 0;
	return;
}

