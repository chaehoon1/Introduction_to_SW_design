#include <stdio.h>
#include <string.h>
#define USING_MACRO
#ifdef USING_MACRO
#define LOWER(str) \
	do {\
		for(int i =0; i < strlen(str); i++) {\
			if('A' <= str[i] && str[i] <= 'Z') {\
				str[i] += ('a'-'A');\
			}\
		}\
	} while(0);
#else
void LOWER(char str[]) {
        for (int i = 0; i < strlen(str); i++) {
                if ('A' <= str[i] && str[i] <= 'Z') {
                        str[i] += ('a' - 'A');
                }
        }
	printf("This is not macro!\n");
}
#endif

typedef struct {
	char txt[16];
	int len;
} my_str;

int main(void) {
	my_str str = {"Hello World!", 0};
	str.len = strlen(str.txt);

	LOWER(str.txt);

	printf("%s, %d\n", str.txt, str.len);  

	return 0;
}
