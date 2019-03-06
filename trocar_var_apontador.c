//Trocar variaveis usando apontadores
#include <stdio.h>

void swap(int *a, int *b) {  
	int t;
	t = *a;
	*a = *b;
	*b = t;
	printf("Depois de chamar a funcao: a = %i, b = %i e t = %i", a, b, t);
}

int main (void) {
	int a, b;
	a = 1;
	b = 2;
	i = *a;
	j = *b;
	printf("Antes de chamar a funcao: a = %i e b = %i\n", a, b);
	swap(&i, &j);
	return 0;
}
