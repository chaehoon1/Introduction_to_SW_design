#include <stdio.h>
#include <string.h>

void upper(char s[]);

int main(void) {

	char txt[] = "Markets brace for Nvidia earnings: What to know this week.";

	printf("%s\n", txt);

	upper(txt);

	printf("%s\n", txt);

	return 0;
}

void upper(char s[]) {
	size_t len;

	for (len = 0; s[len] != 0; len++) {
		if (97 <= s[len] && s[len] <= 122) {
		       s[len] -= 32;
		}	       
	}

	return;
}
