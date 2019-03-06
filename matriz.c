#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
	int matriz[6][6];
	int count_lin, count_col, c, novo_elem, elem, count, vetor[36];
	
	printf("Digite os elementos da matriz : \n");
	printf("\n");
	for(count_lin = 0; count_lin < 6; count_lin++) {
		for(count_col = 0; count_col < 6; count_col++) {
			printf("Elemento [%d %d] : ", count_lin + 1, count_col + 1);
			scanf("%d", &matriz[count_lin][count_col]);
		}
	}
	printf("\n");
	printf("A matriz e:\n");
	printf("\n");
	for(count_lin = 0; count_lin < 6; count_lin++) {
		for(count_col = 0; count_col < 6; count_col++) {
			printf("%d ", matriz[count_lin][count_col]);
		}
	printf("\n");
	}
	printf("\n");
	printf("Digite uma constante : ");
	scanf("%d", &c);
	printf("\n");
	printf("A nova matriz e :\n");
	printf("\n");
	for(count_lin = 0; count_lin < 6; count_lin++) {
		for(count_col = 0; count_col < 6; count_col++) {
		elem = matriz[count_lin][count_col];
		novo_elem = elem * c;
		printf("%d ", novo_elem);
		}
	printf("\n");
	}
	printf("\n");
	printf("Colocando a matriz no vetor : \n");
	for(count = 0; count < 36; count++) {
		for(count_lin = 0; count_lin < 6; count_lin++) {
			for(count_col = 0; count_col < 6; count_col++) {
			vetor[count] = matriz[count_lin][count_col] * c;
			}	
		}
	}
	printf("\n");
	for(count = 0; count < 36; count++) {
		printf("%d", vetor[count]);
	}
	printf("\n");
	return 0;
}
