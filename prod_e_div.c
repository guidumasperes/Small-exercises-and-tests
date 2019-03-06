#include<stdio.h>

int main (void) {
	int a, b, i, op, soma = 0, sub, cnt = 0;

	printf("Digite 'a' e 'b':\n");
	scanf("%d %d", &a, &b);
	printf("Qual operacao deseja realizar ?\n");
	printf("1 - produto\n");
	printf("2 - divisao\n");
	scanf("%d", &op);
	printf("op = %d", op);
	if(op == 1) {
		if(a == 0 || b == 0) {
			printf("O produto e: 0\n");	
		} else {
			for(i = 0; i < a; i++)
				soma = soma + b;
		}
		printf("O produto e: %d\n", soma);
	} else if(op == 2) {
			printf("Entrou!");
			sub = 0;
			do {
				sub = a - b;
				cnt++;
			} while(sub != 0 || sub != 1);
			printf("A divisao e: %d", cnt);
	}
	return 0;
}
