#include <stdio.h>

int fibo(int num);

int fibo_arr[10] = {0, };

int main(void) {

	int num;
	scanf("%d", &num);

	printf("%d\n", fibo(num));
	printf("%d\n", fibo(num));

	return 0;
}

int fibo(int num) {
	if (num == 0) {return 0;}
	else if (num == 1) {return 1;}
	else {
		if (fibo_arr[num] == 0) {
			fibo_arr[num] = fibo(num-1) + fibo(num-2);
			printf("recall\n");
			return (fibo(num-1) + fibo(num-2));
		}
		else {return fibo_arr[num];}
	}

}
