#include<stdio.h>

int main (void) {
	int n, v1[n], v2[n], i;
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &n);
	printf("Digite a sequencia de numeros: ");
	for(i = 0; i < n; i++) {
		scanf("%i", &v1[i]);
	}
	for(i = 0; i < n; i++) {
		if(v1[i] < v1[i + 1]) {
			printf("%i ", v1[i]);	
		}
	}
	return 0;
}
