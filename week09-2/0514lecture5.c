#include <stdio.h>

void print_arr(int arr[], int len);

void sort(int arr[], int len);

void swap(int arr[]);

int main(void) {

	int arr[8] = {3, 1, 4, 7, 2, 8, 5, 6};

	print_arr(arr, (sizeof(arr) / sizeof(arr[0])));

	sort(arr, (sizeof(arr) / sizeof(arr[0])));

	print_arr(arr, (sizeof(arr) / sizeof(arr[0])));

	return 0;
}

void print_arr(int arr[], int len) {

	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return;
}

void swap(int arr[]) {

	int tmp;

	if ( arr[0] > arr[1] ) {
		tmp = arr[1];
		arr[1] = arr[0];
		arr[0] = tmp;
	}

	return;
}

void sort(int arr[], int len) {

	swap(&arr[len-2]);
	for (int i = 3; i <= len ; i++) {
		for (int j = len - i; j < len - 1; j++) {
			swap(&arr[j]);
		}
	}	

	return;
}
