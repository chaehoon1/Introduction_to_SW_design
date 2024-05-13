#include <stdio.h>

int main(void) {
	
	int depositPeriod, i;
	long interest, total, principal; 
	
	printf("Enter your deposit period, principal : ");
	scanf("%d %ld", &depositPeriod, &principal);
        
	interest = principal/10;
	total = principal;

	for (i = 0; i < depositPeriod; i++) {
		total = total + interest;
	}

	printf("Total : %ld\n", total);
	
	return 0;
}
