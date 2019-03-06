//Trocar o conteudo de variaveis sem apontador, ou seja, se a = 1 e b = 2, entao, a = 2 e b = 1.

#include <stdio.h>

void swap (int a, int b) {
	int t;
	t = a;
	a = b;
	b = t;
	printf("Depois de chamar a funcao: a = %i, b = %i e t = %i", a, b, t);
}

int main (void) {
	int a, b;
	a = 1;
	b = 2;
	printf("Antes de chamar a funcao: a = %i e b = %i\n", a, b);
	swap(a, b);
	return 0;
}
