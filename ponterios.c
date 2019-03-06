#include<stdio.h>

int main (void) {
	int x = 10, y = 20;
	int *p1, *p2;
	p1 = &x;
	p2 = &y;
	(*p1)++;
	
	printf("x = %i\n", x);
	printf("y = %i\n", y);
	printf("&x = %i\n", &x);
	printf("&y = %i\n", &y);
	printf("p1 = %i\n", p1);
	printf("p2 = %i\n", p2);
	printf("*p1 + *p2 = %i\n", *p1 + *p2);
	printf("*(&x) = %i\n", *(&x));
	printf("&(*p2) = %i\n", &(*p2));
	
	return 0;
}
