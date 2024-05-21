#include <stdio.h>
#include <string.h>

void my_strcat(char* dest, char* src);

int main(void) {

	char c_code[8], c_id[6], c_name[65];
	char csv[256] = "";

	printf("course code : ");
	scanf("%s", c_code);
	printf("course id : ");
        scanf("%s", c_id);
	printf("course name : ");
        scanf("%s", c_name);

	my_strcat(csv, c_code);
	my_strcat(csv, ", ");
	my_strcat(csv, c_id);
	my_strcat(csv, ", ");
	my_strcat(csv, c_name);

	printf("generating a csv : %s\n", csv);

	return 0;
}

void my_strcat(char* dest, char* src) {

	size_t len1, len2;

	for (len1 = 0; dest[len1] != 0; len1++);
	for (len2 = 0; src[len2] != 0; len2++) {
		dest[len1] = src[len2];
		len1++;
	}

	return;
}
