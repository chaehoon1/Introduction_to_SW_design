#include <stdio.h>
int main(void) {
	printf("Enter two numbers : ");
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("Your numbers : %d %d\n", num1, num2);
	printf("%d + %d = %d\n", num1, num2, num1+num2);
	printf("%d - %d = %d\n", num1, num2, num1-num2);
	printf("%d x %d = %d\n", num1, num2, num1*num2);
	printf("%d / %d = Q : %d, R : %d\n", num1, num2, num1/num2, num1%num2);
	return 0;
}
