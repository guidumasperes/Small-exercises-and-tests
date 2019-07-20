//Programa para inverter os numeros
#include<stdio.h>

int main (void) {
	int number, right_digit;
	printf("Enter your number : \n");
	scanf("%i", &number);
	while (number != 0) {
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	}
	printf("\n");
	return 0;
}
//Quando digita um sinal negativo leva-se com ele as proximas operacoes
