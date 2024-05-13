#include <stdio.h>

int main(void) {
	char str[4];
	int val = 0;

	printf("str : %p, val : %p\n", str, &val);
	scanf("%s", str);
	printf("str : %s,  val : %d\n", str, val);

	return 0;
}
