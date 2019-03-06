//Vetor com memoria dinamica
#include<stdio.h>

int main (void) {
	int i, *vetor;
	
	vetor = (int*)malloc(sizeof(int));
	if(vetor == NULL) {
		printf("nao ha memoria suficiente\n");
	} else {
		printf("alocado com sucesso\n");
	}
	*(vetor) = 1;
	*(vetor + 1) = 2;
	*(vetor + 2) = 3;
	for(i = 0; i < 3; i++) {
		printf("%i\n", vetor[i]);
	}
	vetor[0] = 4;
	vetor[1] = 5;
	vetor[2] = 6;
	for(i = 0; i < 3; i++) {
		printf("%i\n", vetor[i]);
	}
	return 0;
}
