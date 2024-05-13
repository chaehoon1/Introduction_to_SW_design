#include <stdio.h>

int main(void) {

	char str[11];
	scanf("%s", str);
	printf("%s\n", str);
	for (int i = 0; i < (sizeof(str) / sizeof(str[0])); i++) {
		printf("%c", str[10-i]);
	}
	printf("\n");
	
	return 0;
}
