#include <stdio.h>
#define MAX_LEN 10
#define ARR_LEN(arr) (sizeof(arr)/sizeof(arr[0]))

int main(void) {
	int arr[MAX_LEN];

	for(int i = 0; i < ARR_LEN(arr); i++) {
		arr[i] = i;
	}

	for(int i = 0; i < ARR_LEN(arr); i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
