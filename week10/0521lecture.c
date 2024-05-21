#include <stdio.h>
#include <string.h>

size_t my_strlen(char str[]);

int main(void) {

	char str1[16] = "Hello";
	char str2[16] = "World";

	printf("strlen(Hello) : %lu\n", strlen(str1));
	printf("strlen(World) : %lu\n", strlen(str2));
	printf("my_str(Hello) : %lu\n", my_strlen(str1));
	printf("my_str(World) : %lu\n", my_strlen(str2));

	return 0;
}

size_t my_strlen(char str[]) {
	size_t len;

	for (len = 0; str[len] != 0; len++) {}
	return len;	
}
