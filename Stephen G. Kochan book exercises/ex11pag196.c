#include<stdio.h>

int main (void) {
	int number, sum, right_digit;
	sum = 0;
	printf("Type the number you want : ");
	scanf("%i", &number);
	while (number != 0) {
		right_digit = number % 10;
		sum = sum + right_digit;
		number = number / 10;
	}
	printf("The sum is : %i", sum);
	return 0;
}
