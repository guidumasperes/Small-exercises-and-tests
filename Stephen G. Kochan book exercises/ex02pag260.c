#include <stdio.h>

int main (void) {
	int num1, num2; 
	scanf("%d", &num1);
	scanf("%d", &num2);
	if (num1 % num2 == 0) {
		printf("The numbers are evenly divisible");
	} else {
		printf("The numbers aren't evenly divisible");
	}
	return 0;
}
