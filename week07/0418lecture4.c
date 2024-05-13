#include <stdio.h>

int main(void) {
	
	char c;
	printf("Enter a lowercase : ");
	scanf("%c", &c);
	
	if ('a' <= c && c <= 'z') {
		c = c - 32;
	}

	printf("%c %d\n", c, c);

	return 0;
}

