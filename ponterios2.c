#include<stdio.h>

int main (void) {
	int n, base, exp;
	void menor_valor(int var, int *b, int *k);
	
	scanf("%i %i %i", &base, &exp, &n);
	menor_valor(n, &base, &exp);
}

void menor_valor(int var, int *b, int *k) {
	int result;
	int calc_exp(int **x, int **y);
	
	result = calc_exp(&b, &k);

	
}

int calc_exp(int **x, int **y) {
	int i, resultado;
	resultado = *(*y);
	for(i = 1; i < *(*x); i++) {
		resultado = resultado * (*(*y));
	}
	return resultado;
}

