#include<stdio.h>

int main (void) {
	int v[2] = {0536u, 0266u};
	
	printf("%o %o\n", v[0], v[1]);
	v[0] ^= v[1];
	v[1] ^= v[0];
	v[0] ^= v[1];
	printf("%o %o\n", v[0], v[1]);\
	return 0;
	}
