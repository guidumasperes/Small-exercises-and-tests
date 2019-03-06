#include<stdio.h>

int main (void) {
	int j, m, n, i, aux;
	int v[n];
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &n);
	printf("Digite os numeros do vetor: ");
	for(i = 0; i < n; i++) {
		scanf("%i", &v[i]);
	}
	printf("Digite quanto o vetor deve deslocar-se: ");
	scanf("%i", &m);
//Fazer o deslocamento do vetor m vezes
	for(j = 0; j < m; j++) {
		for(i = 0; i < (n - 1); i++) {
			aux = v[i + 1];
			v[i + 1] = v[i];
			v[i] = aux;
		}
	}
	printf("O vetor deslocado e: ");
	for(i = 0; i < n; i++) {
		printf("%i ", v[i]);
	}
	return 0;
}
