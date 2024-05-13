#include <stdio.h>

void count_function(int num);

int main(void) {

	int num;
	scanf("%d", &num);

	count_function(num);

	return 0;
}

void count_function(int num) {
	if (num == 1) { printf("1\n"); return;}
	else {
		printf("%d\n", num);
		count_function(num-1);
	}
}
	
