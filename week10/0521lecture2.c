#include <stdio.h>
#include <string.h>

int my_strcmp(char txt[], char input[]);

int main(void) {

	char txt[] = "Markets";
	char input[256] = "";

	scanf("%s", input);

	if (strcmp(txt, input)) {
		printf("different\n");
	}
	else {
		printf("same\n");
	}
	
	if (my_strcmp(txt, input)) {
	        printf("differnet\n");
	}
	else {
		printf("same\n");	
	}

	return 0;
}

int my_strcmp(char txt[], char input[]) {
	size_t len;

	for (len = 0; txt[len] != 0 && input[len] != 0; len++) {
		if (txt[len] != input[len]) {
			return txt[len] - input[len];
		}
	}
	return txt[len] - input[len];
}

