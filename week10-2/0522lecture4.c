#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int char_at(const char* txt, char del, int start) {
	for (start; txt[start] != 0; start++) {
		if(txt[start] == del) {
			return start;
		}
	}
	return -1;
}

int main(void) {
	char expr[] = "1+2";
	int start, end;
	char s_num1[10] = "", s_num2[10] = "";
	int num1, num2;

	start = 0;
	end = char_at(expr, '+', start);


	if (end > -1) {
		strncpy(s_num1, &expr[start], end - start);
		start += end;
		strcpy(s_num2, &expr[start]);

		num1 = atoi(s_num1);
		num2 = atoi(s_num2);
	}

	printf("%d + %d = %d\n", num1, num2, num1+num2);

	return 0;
}

