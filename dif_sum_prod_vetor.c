#include<stdio.h>

int main (void) {
	int i, x[10], y[10], z[10];
	printf("Entre com os valores do vetor X: ");
	for(i = 0; i < 10; i++) {
		scanf("%i", &x[i]);
	}
	printf("Entre com os valores do vetor Y: ");
	for(i = 0; i < 10; i++) {
		scanf("%i", &y[i]);
	}
	printf("A diferenca entre X e Y e: ");
	for(i = 0; i < 10; i++) {
		z[i] = x[i] - y[i];
		printf("%i ", z[i]);
	}
	printf("\n");
	printf("A soma entre X e Y e: ");
	for(i = 0; i < 10; i++) {
		z[i] = x[i] + y[i];
		printf("%i ", z[i]);
	}
	printf("\n");
	printf("O produto entre X e Y e: ");
	for(i = 0; i < 10; i++) {
		z[i] = x[i] * y[i];
		printf("%i ", z[i]);
	}
	printf("\n");
	return 0;
}
