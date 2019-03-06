#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int m[4][4], x[4][4];
	int a, num_x_a;
	void cria_matriz(int matriz[][4]);
	int proc_num(int matriz[][4], int a); 
	void cria_x(int matriz[][4], int x[][4], int a);
	void mostra_x(int x[][4]);
	
	cria_matriz(m);
	printf("Digite um numero: ");
	scanf("%i", &a);
	num_x_a = proc_num(m, a);
	printf("O numero de vezes que 'a' aparece na matriz e: %i", num_x_a);
	cria_x(m, x, a);
	mostra_x(x);
	
	return 0;
}

void cria_matriz(int matriz[][4]) {
	int i, j;
	
	printf("Digite os numeros da matriz: \n");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("m[%i][%i] = ", i + 1, j + 1);
			scanf("%i", &matriz[i][j]);
		}
	}
}

int proc_num(int matriz[][4], int a) {
	int cnt_a, i, j;
	
	cnt_a = 0;
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(matriz[i][j] == a) {
				cnt_a = cnt_a + 1;
			}
		}
	}
	return cnt_a;
}

void cria_x(int matriz[][4], int x[][4], int a) {
	int i, j;
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(matriz[i][j] == a) {
				x[i][j] = 0;
			} else {
				x[i][j] = matriz[i][j];
			}
		}
	}
}

void mostra_x(int x[][4]) {
	int i, j;
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf(" %i ", x[i][j]);
		}
		printf("\n");
	}
}
