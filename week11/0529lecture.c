#include <stdio.h>
#include <string.h>

typedef struct my_string 
{
	char txt[16];
	size_t len;
};

int main(void) {
	char txt[16] = "";
	struct my_string myStr;

	scanf("%s", txt);
	strcpy(myStr.txt, txt);

	myStr.len = strlen(myStr.txt);

	printf("txt : %s, len : %lu\n", myStr.txt, myStr.len);

	return 0;
}
