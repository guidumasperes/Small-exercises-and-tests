#include<stdio.h>

int main (void) {
	int n, i, j;
	long int prod;

	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		prod = i; 
		for(j = 1; j < i; j++) {
			prod = prod * i;
		}
		printf("%ld\n", prod);
	}
	return 0;
}
