#include <stdio.h>

int main(void) {

	int arr2D[3][4] = {{0, }, };
	int i, ii;

	for (i = 0; i < 3; i++) {
		for (ii = 0; ii < 4; ii++) {
			printf("%p ", &arr2D[i][ii]);
		}
		printf("\n");
	}
	printf("\n");

	for ( i = 0; i < 3; i++) {
		printf("%p ", arr2D[i]);
	}
	printf("\n\n");

	printf("%p\n", arr2D);

	return 0;
}

/*
int arr2D[x][y];
arr2D[x] = {arr2D[0], arr2D[0]+y, arr2D[0]+2y, ... , arr2D[0]+(x-1)y} : 각 index의 data type은 pointer
(int 배열이기 때문에 1씩 더하는게 메모리상에서는 4byte 씩 더해짐)
arr2D[x][y] = {(arr2D[0]+(x-1)y)[0], (arr2D[0]+(x-1)y)[1], ... , (arr2D[0]+(x-1)y)[y-1]} : 각 index의 data type은 int
--------------------------------------------------------------------
int arr1D[x];
int arr2D[x][y];
에서 arr1D와 arr2D는 첫번째 index의 주소값인 것은 동일하지만 arr1D[k](arr1D[0]의 주소에서 k만큼 떨어진 주소의 int값)와 
arr2D[k](arr2D[0]에서 (k-1)y만큼 떨어진 주속값)는 다르게 쓰임.
*/
