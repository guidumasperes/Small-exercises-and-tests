#include<stdio.h>

int main (void) {
	int lin, col, result1, result2, result3, result4, result5;
	int m[5][5];
	int somaLinha(int m[][5]);
	
	printf("Entre com os valores da matriz: \n");
	for(lin = 0; lin < 5; lin++) {
		for(col = 0; col < 5; col++) {
			printf("m[%i][%i] = ", lin + 1, col + 1);
			scanf("%i", &m[lin][col]);
		}
	}
	result1 = somaLinha(m);
	result2 = somaColuna(m); 
	result3 = somaDiag(m);
	result4 = somaDiagSec(m);
	result5 = somaTdsElem(m);
	printf("A soma da linha 4 da matriz e: %i\n", result1);
	printf("A soma da coluna 2 da matriz e: %i\n", result2);
	printf("A soma da diagonal principal da matriz e: %i\n", result3);
	printf("A soma da diagonal secundaria da matriz e : %i\n", result4);
	printf("A soma de todos os elementos da matriz e : %i\n", result5);
	return 0;
}

int somaLinha(int matriz[][5]) {
	int i, j, soma = 0;
	
	for(i = 3; i <= 3; i++) {
		for(j = 0; j < 5; j++) {
			soma = soma + matriz[i][j];
		}
	}
	return soma;
}

int somaColuna(int matriz[][5]) {
	int i, j, soma = 0;
	
	for(j = 1; j <= 1; j++) {
		for(i = 0; i < 5; i++) {
			soma = soma + matriz[i][j];
		}
	}
	return soma;
}

int somaDiag(int matriz[][5]) {
	int i, j, soma = 0;
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			if(i + 1 == j + 1) {
				soma = soma + matriz[i][j];
			}
		}
	}
	return soma;
}

int somaDiagSec(int matriz[][5]) {
	int i, j, soma = 0;
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			if(i + j == 4) {
				soma = soma + matriz[i][j];
			}
		}
	}
	return soma - 4;
}

int somaTdsElem(int matriz[][5]) {
	int i, j, soma = 0;
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			soma = soma + matriz[i][j];
		}
	}
	return soma;
}
