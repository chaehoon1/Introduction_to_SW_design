#include <stdio.h>

int main(void) {

	int arr[8] = {1, 4, 8, 3, 7, 2, 6, 5};
	int* parr = arr; //&arr[0]

	for(int i = 0; i < 8; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (; parr <= &arr[7]; parr++) {
		printf("%d ", *parr);
	}
	printf("\n");

	return 0;
}


