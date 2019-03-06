#include<stdio.h>

int main (void) {
	int m, n, i, j;

	scanf("%d %d", &m, &n);
	for(i = 1; i <= m; i++) {
		for(j = 1; j <= n; j++) {
			printf("%d ", i*j);
		}
		printf("\n");
	}
	return 0;
}
