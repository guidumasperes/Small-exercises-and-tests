#include<stdio.h>

int main(int argc, char* argv[]) {
	int vetor1[10];
	int vetor2[10];
	int vetor3[10];
	int count1, count2, count3;
	
//atribuindo valores ao vetor1
	for(count1 = 0; count1 < 10; count1++) {
		vetor1[count1] = count1;
	}
	printf("mostrando os valores atribuidos ao vetor1:\n");
	for(count1 = 0; count1 < 10; count1++) {
		printf("%d\n", vetor1[count1]);
	}
//atribuindo valores ao vetor2
	for(count2 = 0; count2 < 10; count2++) {
		vetor2[count2] = count2;
	}
	printf("mostrando os valores atribuidos ao vetor2:\n");
	for(count2 = 0; count2 < 10; count2++) {
		printf("%d\n", vetor2[count2]);
	}
	for(count3 = 0; count3 < 10; count3++) {
		vetor3[count3] = vetor1[count3] * vetor2[count3];
	}
	printf("mostrando o resultado da multiplicacao dos vetores:\n");
	for(count3 = 0; count3 < 10; count3++) {
		printf("%d\n", vetor3[count3]);
	}
	return 0;	
}
