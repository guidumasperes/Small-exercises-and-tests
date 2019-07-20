//Program to transpose a matrix
#include<stdio.h>

int main (void) {
	int i, j, m[i][j], qnt_lin, qnt_col;
	printf("Entre com o numero de linhas e o numero de colunas da matriz: ");
	scanf("%i %i", &qnt_lin, &qnt_col);
	printf("Entre com os elementos da matriz:\n");
	for(i = 1; i <= qnt_lin; i++) {
		for(j = 1; j <= qnt_col; j++) {
			printf("m[%i][%i] = ", i, j);
			scanf("%i", &m[i][j]);
		}
	}
	tras_matrix(m[i][j], mtransp[j][i], qnt_lin, qnt_col);
	return 0;
}

void trans_matrix(int m[i][j], int mtrasp[j][i], int qnt_lin, int qnt_col) {
	
	mtransp[j][i] = m[i]][j];
}
