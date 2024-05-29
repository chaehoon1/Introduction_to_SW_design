#include <stdio.h>
#include <string.h>

typedef struct {
	char txt[16];
	size_t len;
} my_string;

int main(void) {
	char txt[16] = "";
	my_string myStr;

	scanf("%s", txt);
	strcpy(myStr.txt, txt);

	myStr.len = strlen(myStr.txt);

	printf("txt : %s, len : %lu\n", myStr.txt, myStr.len);

	return 0;
}
