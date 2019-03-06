#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
	int vetor[20];
	int count, minimo, count1, lugar_vetor;
	
	printf("***Guardando os valores do vetor***\n");
	for(count = 1; count <= 20; count++) {
	scanf("%d", &vetor[count]);
	}
	printf("***Escrevendo os valores do vetor***\n");
	for(count = 1; count <= 20; count++) {
	printf("%d\n", vetor[count]);	
	}
	minimo = vetor[0];
	for(count1 = 1; count1 <= 20; count1++) {
	if(vetor[count1] < minimo) {
		minimo = vetor[count1];
		lugar_vetor = count1;
	}
	}
	printf("O menor valor e %d que esta na %d posicao\n", minimo, lugar_vetor);	
	return 0;
}
