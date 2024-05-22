#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int num1, num2, answer, your_answer, op;
	char operations[] = {'+', '-', '*'};

	srand(time(NULL));
	num1 = (rand() % 101);
	num2 = (rand() % 101);
	op = (rand() % 3);

	switch (op) {
		case 0 :
			answer = num1 + num2;
			break;
		case 1 :
			answer = num1 - num2;
			break;
		case 2 :
			answer = num1 * num2;
			break;
	}

	printf("%d %c %d = ", num1, operations[op], num2);
        scanf("%d", &your_answer);


	if (answer == your_answer) {printf("Pass!!\n");}
	else {printf("Failed!!\n");}

	return 0;
}


