#include <stdio.h>
int main(void) {
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	if (num%2 == 0) {
		printf("your number %d is even\n", num);
	}
	if (num%2 == 1) {
		printf("your number %d is odd\n", num);
	}
       	return 0;
}
