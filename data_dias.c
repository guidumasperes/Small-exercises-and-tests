#include<stdio.h>

int main(void) {
	int d, m, a;

	printf("Digite o dia, mês e ano:");
	scanf("%d %d %d", &d, &m, &a);
	if(a < 1900) {
		printf("O ano deve ser maior que 1900!\n");
	} else {

	}
	return 0;
}
