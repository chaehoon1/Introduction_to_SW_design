#include <stdio.h>
#include <string.h>

typedef struct {
	char txt[16];
	size_t len;
} my_str;

my_str concat(my_str* p1, my_str* p2);

int main() {
	my_str p1 = {"Hello", 5}, p2 = {"World", 5}, res;
	res = concat(&p1, &p2);
	
	printf("address of p1, p2, res in main() : p1 is %p, p2 is %p, res is %p\n", &p1, &p2, &res);
	printf("value of result in main() : %s, %lu\n", res.txt, res.len);
	
	return 0;
}

my_str concat(my_str* p1, my_str* p2) {
	my_str res;

	strcpy(res.txt, strcat(p1->txt, p2->txt));
	res.len = strlen(res.txt);

	printf("address of p1, p2, res in concat() : p1 is %p, p2 is %p, res is %p\n", p1, p2, &res);
        printf("value of result in concat() : %s, %lu\n", res.txt, res.len);

	return res;
}



