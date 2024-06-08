#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[] = "Alice";
	char str2[] = "Bob";
	char str3[] = "Charlie";
	char str4[] = "David";
	char str5[] = "Ethan";

	char* str_arr[5] = {str1, str2, str3, str4, str5};

	char fixedLengthStr_arr[5][8];
	
	strcpy(fixedLengthStr_arr[0], "Alice");
	strcpy(fixedLengthStr_arr[1], "Bob");
	strcpy(fixedLengthStr_arr[2], "Charlie");
	strcpy(fixedLengthStr_arr[3], "David");
	strcpy(fixedLengthStr_arr[4], "Ethan");

	printf("address of str_arr : \n");
	for (int i = 0; i < 5; i++) {
	       printf("%p ", str_arr[i]);
	}
	printf("\n\n");

	printf("address of fixedLengthStr_arr : \n");
	for (int i = 0; i < 5; i++) {
		for (int ii = 0; ii < 8; ii++) {
			printf("%p ", &fixedLengthStr_arr[i][ii]);
		}
		printf("\n");
	}
	printf("\n");

	printf("size of str_arr : %lu\n", sizeof(str_arr));
	printf("size of fixedLengthStr_arr : %lu\n", sizeof(fixedLengthStr_arr));	

	return 0;
}
