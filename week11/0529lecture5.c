#include <stdio.h>

struct point {
	int x;
	int y;
};

struct my_str1 {
	char txt[16];
	int len;
};

struct my_str2 {
	char* txt;
	int len;
};

int main (void) {

	struct point a = {1, 2};
	struct point b = {0, 0};

	printf("a : %p (%d, %d), b : %p (%d, %d)\n", &a, a.x, a.y, &b, b.x, b.y);

	b = a;

	printf("a : %p (%d, %d), b : %p (%d, %d)\n", &a, a.x, a.y, &b, b.x, b.y);

	struct my_str1 txt0 = {"hello", 5};
	struct my_str1 txt1;

	printf("txt0 : %p (%s, %d), txt1 : %p (%s, %d)\n", &txt0, txt0.txt, txt0.len, &txt1, txt1.txt, txt1.len);

	txt1 = txt0;

	printf("txt0 : %p (%s, %d), txt1 : %p (%s, %d)\n", &txt0, txt0.txt, txt0.len, &txt1, txt1.txt, txt1.len);

	struct my_str2 c = {txt0.txt, 5};
	struct my_str2 d;

	printf("c : %p (%p, %d), d : %p (%p, %d)\n", &c, c.txt, c.len, &d, d.txt, d.len);

	d = c;

	printf("c : %p (%p, %d), d : %p (%p, %d)\n", &c, c.txt, c.len, &d, d.txt, d.len);

	return 0;
}
