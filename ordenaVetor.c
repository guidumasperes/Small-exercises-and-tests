#include<stdio.h>

int main (void) {
	int vetor1[5], vetor2[5], vetor3[5], vetor4[15];
	int i;
	void ordenaVetor(int v1[5], int v2[5], int v3[5], int v4[15], int tam);
	
	printf("vetor1: ");
	for(i = 0; i < 5; i++) {
		scanf("%i", &vetor1[i]);
	}
	printf("vetor2: ");
	for(i = 0; i < 5; i++) {
		scanf("%i", &vetor2[i]);
	}
	printf("vetor3: ");
	for(i = 0; i < 5; i++) {
		scanf("%i", &vetor3[i]);
	}	
	ordenaVetor(vetor1, vetor2, vetor3, vetor4, 5);
	for(i = 0; i < 15; i++) {
		printf("%i ", vetor4[i]);
	}
	return 0;
}

void ordenaVetor(int v1[5], int v2[5], int v3[5], int v4[15], int tam) {
	int i, j, k, l, m, troca, aux;
	static int fazer_uma_vez = 1;
	
	m = 0;
	troca = 0;
	if(fazer_uma_vez == 1) {
		for(i = 0; i < 5; i++) {
			v4[i] = v1[i];
		}
		i = 5;
		for(j = 0; j < 10; j++) {
			v4[j + i] = v2[j];
		}
		j = 10;
		for(k = 0; k < 15; k++) {
			v4[k + j] = v3[k];
		}
		for(l = 0; l < 15; l++) {
			printf("%i ", v4[l]);
		}
		fazer_uma_vez++;
	} else	{
		for(m = 0; m < tam - 1; m++) {
			if(v4[m] > v4[m + 1]) {
				aux = v4[m];
				v4[m] = v4[m +1];
				v4[m + 1] = aux;
				troca = 1;
			}
			if(troca != 0 && tam > 1) {
				ordenaVetor(v1, v2, v3, v4, tam-1);
			}
		}
	}
}
