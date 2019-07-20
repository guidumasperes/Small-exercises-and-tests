#include<stdio.h>

int main (void) {
	int base, exp, result;
	int x_to_the_n(int b, int e);
	printf("Escolha a base que voce quer: ");
	scanf("%i", &base);
	printf("Escolha o expoente que voce quer: ");
	scanf("%i", &exp);
	result = x_to_the_n(base, exp);
	printf("O resultado e: %i", result);
	return 0;
}

int x_to_the_n(int b, int e) {
	int result;
	if(e == 1) {
		return b;
	} else {
		result = b * x_to_the_n(b, e-1);
	}
	return result;
}
