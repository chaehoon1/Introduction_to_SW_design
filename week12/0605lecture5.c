#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add(int a, int b) {return a + b;}
int sub(int a, int b) {return a - b;}
int mul(int a, int b) {return a * b;}

int main(void) {

	int (*fptr[3]) (int, int);

	fptr[0] = add;
	fptr[1] = sub;
	fptr[2] = mul;

	int num1, num2, answer, your_answer, op;
	char operations[] = {'+', '-', '*'};

	srand(time(NULL));
	num1 = (rand() % 101);
	num2 = (rand() % 101);
	op = (rand() % 3);
	answer = fptr[op](num1, num2);

	printf("%d %c %d = ", num1, operations[op], num2);
        scanf("%d", &your_answer);


	if (answer == your_answer) {printf("Pass!!\n");}
	else {printf("Failed!!\n");}

	return 0;
}


