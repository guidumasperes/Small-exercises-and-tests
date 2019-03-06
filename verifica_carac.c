#include<stdio.h>

int main (void) {
	int num, num1, num2, num3;
	scanf("%i", &num);
	num1 = num % 100;
	num2 = num / 100;
	num3 = num1 + num2;
	if (num3 * num3 == num) {
		printf("O numero possui a caracteristica\n");	
	} else {
		printf("O numero nao possui a caracterisca\n");
	}
	return 0;
}
