#include <stdio.h>

void r_scan(void);

int main(void) {

	r_scan();
	printf("\n");
	
	return 0;
}

void r_scan(void) {
	
	char c;
	scanf("%c", &c);
	
	if (c == '\n') { 
		return; 
	}
	
	r_scan();
	printf("%c", c);

}
