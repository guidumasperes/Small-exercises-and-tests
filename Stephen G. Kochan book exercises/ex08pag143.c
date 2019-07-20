#include<stdio.h>
int main (void) {
	float i, next_multiple;
	int j;
	i = 12.258;
	j = 23;
	next_multiple = i + (float) j - (12.258 % 23);
	printf("%f", next_multiple);
	return 0;
}
