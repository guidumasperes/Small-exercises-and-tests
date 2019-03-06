//Esse programa le uma matriz, multiplica-a por um numero a e coloca-a num vetor de tamanho apropriado
#include<stdio.h>

int main (void) {
	int m[6][6];
	int v[36];
	int a, cnt_col, cnt_lin, num;
	for(cnt_lin = 0; cnt_lin < 6; cnt_lin++) {
		for(cnt_col = 0; cnt_col < 6; cnt_col++) {	
			printf("Insira o elemento m[%i][%i]: ", cnt_lin + 1, cnt_col + 1);
			scanf("%i", &num);
			m[cnt_lin][cnt_col] = num;
		}
	}
	for(cnt_lin = 0; cnt_lin < 6; cnt_lin++) {
		for(cnt_col = 0; cnt_col < 6; cnt_col++) {
		printf("  %i  ", m[cnt_lin][cnt_col]);
		}
		printf("\n");
	}
	return 0;
}
