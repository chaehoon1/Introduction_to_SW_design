#include <stdio.h>

int main(void) {
	int a = 0;
	int* pa = &a;
	float* pb = (float*) &a;
	
	printf("&a: %p, pa: %p, pb: %p\n", &a, pa, pb); 
	
	printf("pa: %d, pb: %f\n", *pa, *pb);
	
	*pa = 1;
	printf("pa: %d, pb: %f\n", *pa, *pb);

	*pb = 2.00;
	printf("pa: %d, pb: %f\n", *pa, *pb);
	
	return 0;
}
