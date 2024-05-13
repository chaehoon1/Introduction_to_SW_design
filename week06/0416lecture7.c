#include <stdio.h>
int main(void) {
	int num, i;
	printf("Enter a number : ");
        scanf("%d", &num);
	printf("The factors of %d are...\n", num);
        for ( i = 1; i <= num; i++) {
		if ((num%i) == 0) {
			printf("%d\n", i);
		}
	}	
	return 0;
}
