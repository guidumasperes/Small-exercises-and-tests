//Multiplicacao de um vetor por uma variavel
#include<stdio.h>

int main (void) {
	int s[5], var, i;
	printf("Escreva os valores do vetor: ");
	for(i = 1; i <= 5; i++) {
		scanf("%i", &s[i]);
	}
	printf("Digite a variavel: ");
	scanf("%i", &var);
	printf("O vetor multiplicado pela variavel e: ");
	for(i = 1; i <= 5; i++) {
		s[i] = s[i] * var;
		printf("%i ", s[i]);
	}
	return 0;
}
