#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int horas, valor1, valor2, valor_total;
	scanf("%d", &horas);
	valor1 = (horas / 3) * 10;
	valor2 = (horas % 3) * 5;
	valor_total = valor1 + valor2;
	printf("O preco e : %d", valor_total);
	return 0;
}
