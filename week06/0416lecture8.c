#include <stdio.h>
int main(void) {
	int num, i, count;
	count = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
	switch (num) {
		case 2: case 3: case 5: case 7:
			printf("Your number is a prime number\n");
			break;
		defalte:
			printf("Your number is NOT a prime number\n");
	}
	/*for(i = 1; i <= num; i++) {
		if ((num%i) == 0) {
			count++;
		}
	}
        if (count == 1) {
		printf("Your number is a prime number\n");
	}
	else {
		printf("Your number is NOT a prime number\n");
	}*/
	return 0;
}
