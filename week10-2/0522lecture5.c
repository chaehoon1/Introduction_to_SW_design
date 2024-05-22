#include <stdio.h>
#include <string.h>

int char_at(const char* txt, char del, int start) {
	for (start; txt[start] != 0; start++) {
		if (txt[start] == del) {
			return start;
		}
	}
	return -1;
}

void camel_case(char* txt) {
	int end = char_at(txt, ' ', 0);
	
	if (end == -1) {return;}

	camel_case(&txt[end + 1]);

	if ('a' <= txt[end+1] && txt[end + 1] <= 'z') {
		txt[end + 1] -= ('a'-'A');
	}
	memmove(&txt[end], &txt[end + 1], strlen(&txt[end + 1]) + 1);
}

int main(void) {

	char txt[] = "Markets brace for Nvidia earnings: What to know this week.";

	printf("%s\n", txt);
	camel_case(txt);
	printf("%s\n", txt);

	return 0;
}
