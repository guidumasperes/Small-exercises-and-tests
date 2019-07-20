#include<stdio.h>

void calculatetriangularnumber(int n) {
	int i, triangularnumber = 0;
	for(i=1; i<=n; i++) 
		triangularnumber += i;
	printf("Triangular number %i is %i\n", n, triangularnumber);
}

int main(void) {
	calculatetriangularnumber(10);
	calculatetriangularnumber(20);
	calculatetriangularnumber(50);
	return 0;
}
