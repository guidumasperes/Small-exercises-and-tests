#include <stdio.h>
#include <stdlib.h>

int main (void) { 
	int x, y;
	printf("Digite um numero para x : ");
	scanf("%d", &x);
	printf("Digite um número para y : ");
	scanf("%d", &y);
	x = x + 2;
	y = y + 2;
	printf("Trocando o conteudo de x e y temos : \n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	return 0;
}
