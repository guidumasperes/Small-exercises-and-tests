//Este programa corrige o ex10pag196.c
#include<stdio.h>

int main (void) {
	int number, right_digit, number_compare;
	printf("Enter your number : \n");
	scanf("%i", &number);
	number_compare = number;
	while (number != 0) {
		right_digit = number % 10;
		if (right_digit < 0) {
			printf("%i",  -right_digit);
			number = number / 10;
		} else {
		printf("%i", right_digit);
		number = number / 10;
		}
	}
	if (number_compare < 0) {
		printf("-");
		printf("\n");
	} else {
		printf("\n");
	}
	return 0;
}
