#include<stdio.h>
int main (void) {
	int num1 ,num2;
	float div;
	scanf("%i", &num1);
	scanf("%i", &num2);
	div = (float)num1 / (float)num2; 
	if (num2 == 0) {
		printf("Division by zero !");
	} else if (num1 % num2 == 0) {
		printf("The first number are divisible by the second !  =>  %i / %i = %.3f", num1, num2, div);
	} else if (num1 % num2 != 0) {
	printf("The first number are not divisible by the second !  =>  %i / %i = %.3f", num1, num2, div);
	} else {                                     
		printf("Incorrect format !");
	}
	return 0;
}
