#include <stdio.h>

int main(void) {

        unsigned char a, b, c;

        printf("Enter two numbers to add : ");
        scanf("%d %d", &a, &b);
        c = a + b;

        printf("  ");
	printb(a);
        printf("\n");

        printf("+ ");
	printb(b);
        printf("\n");

        printf("-----------\n");
        printf("  ");
	printb(c);
        printf("\n");

        return 0;
}

void printb(unsigned char num) {
	int i;
	unsigned char div;
        for (i = 0, div = 128; i < 8; i++, div /= 2) {
                if ((num / div) % 2 == 1) {
                        printf("1");}
                else {
                        printf("0");}
        }
	return;
}

