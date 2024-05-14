#include <stdio.h>

void print_arr(int arr[], int len);

void swap(int arr[]);

int main(void) {

	int arr[2] = {3, 1};

	print_arr(arr, (sizeof(arr) / sizeof(arr[0])));

	swap(arr);

	print_arr(arr, 2);

	return 0;
}

void print_arr(int arr[], int len) {

	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

void swap(int arr[]) {

	int tmp;

	if (arr[0] > arr[1]) {
		tmp = arr[0];
		arr[0] = arr[1];
		arr[1] = tmp;
	}

	return;
}
