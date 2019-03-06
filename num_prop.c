#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]) {
	int num, resto, divisao, soma;
	scanf("%d", &num);
	divisao = num / 100;
	resto = num % 100;
	soma = divisao + resto;
	if (soma * soma == num) {
	printf("Ele possui a caracteristica do exercicio\n");
	} else {
	printf("Ele nao possui a caractestica\n");
	}
	return 0;
}
