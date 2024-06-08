#include <stdio.h>

/*void printArr1(int arr2D[][], int len1, int len2) {
	int i, ii;

	for (i = 0; i < len2; i++) {
                for (ii = 0; ii < len1; ii++) {
                        printf("%p ", &arr2D[i][ii]);
                }
		printf("\n");
        }
	printf("\n");

	return;
}
불가능한 2차원 배열을 매개변수로 전달하는 방법*/ 

void printArr2(int arr2D[][4], int len1, int len2) {
	int i, ii;

	for (i = 0; i < len1; i++) {
                for (ii = 0; ii < len2; ii++) {
                        printf("%p ", &arr2D[i][ii]);
                }
		printf("\n");
        }
	printf("\n");

	return;
}

void printArr3(int* arr2D, int len1, int len2) {
        int i, ii;

         for (i = 0; i < (len1 * len2); i += len2) {
                for (ii = 0; ii < len2; ii++) {
                        printf("%p ", &arr2D[i+ii]);
                }
                printf("\n");
        }

        return;
} //type cating : 2Darray->pointer


int main(void) {
	//int arr2D1[3][4] = {{0, }, };
	int arr2D2[3][4] = {{0, }, };
	int arr2D3[3][4] = {{0, }, };

	//printArr1(arr2D1, 3, 4);
	
	for (int i = 0; i < 3; i++) {
                for (int ii = 0; ii < 4; ii++) {
                        printf("%p ", &arr2D2[i][ii]);
                }
                printf("\n");
        }
        printf("\n");
	printArr2(arr2D2, 3, 4);

	for (int i = 0; i < 3; i++) {
                for (int ii = 0; ii < 4; ii++) {
                        printf("%p ", &arr2D3[i][ii]);
                }
                printf("\n");
        }
        printf("\n");
	printArr3(arr2D3, 3, 4);

	return 0;
}



