#include <stdio.h>
#include <string.h>

int my_atoi(char* str) {
	int i = 0, ret;
	
	if (str[0] == '-') {i++;}

	for (ret = 0; str[i] != 0; i++) {
		ret = 10 * ret;
		ret += str[i] - '0';
	}
	if (str[0] == '-') {
		return -1 * ret;
	}
	else {
		return ret;
	}
}

int main(void) {

	char in[6] = "";

	scanf("%s", in);

	printf("%d\n", my_atoi(in));

	return 0;
}
