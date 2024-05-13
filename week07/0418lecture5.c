#include <stdio.h>

int main(void) {

	long a = 5215571311076468480UL;
	char c;
	printf("%lx\n", a / 0x0100000000000000UL);
	printf("%lx\n", a / 0x0001000000000000UL);
	printf("%lx\n", a / 0x0000010000000000UL);
	printf("%lx\n", a / 0x0000000100000000UL);
	printf("%lx\n", a / 0x0000000001000000UL);
	printf("%lx\n", a / 0x0000000000010000UL);
	printf("%lx\n", a / 0x0000000000000100UL);
	printf("%lx\n", a / 0x0000000000000001UL);

	c = a / 0x0100000000000000UL;
	printf("%c %x\n", c, c);
	c = a / 0x0001000000000000UL;
        printf("%c %x\n", c, c);
	c = a / 0x0000010000000000UL;
        printf("%c %x\n", c, c);
	c = a / 0x0000000100000000UL;
        printf("%c %x\n", c, c);
	c = a / 0x0000000001000000UL;
        printf("%c %x\n", c, c);
	c = a / 0x0000000000010000UL;
        printf("%c %x\n", c, c);
	c = a / 0x0000000000000100UL;
        printf("%c %x\n", c, c);
	c = a / 0x0000000000000001UL;
        printf("%c %x\n", c, c);

	return 0;
}
