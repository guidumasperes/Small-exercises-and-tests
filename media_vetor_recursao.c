#include<stdio.h>
#include<stdlib.h>

float calc_media(int n, int v[], int soma) {
	if (n >= 0) {
		soma = soma + v[n];
		return calc_media(n-1, v, soma);
	} else {
		return soma / 5;
	}
}

int main (void) {
	int n, v[n], i, soma;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &n);
	for(i = 0; i < n; i++) {
		printf("v[%i] = ", i);
		scanf("%i", &v[i]);
	}
	printf("%f", calc_media(n, v, soma));
	return 0;
}
