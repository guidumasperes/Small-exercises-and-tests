#include<stdio.h>

int main (void) {
	int num, num1, s;
	char op;
	inicio:
	do {
		scanf("%i %c", &num, &op);
		switch (op) {
			case 's':
				num1 = num;
				printf("Accumulator set to : %i\n", num1);
				break;
			case '+':
				num1 = num1 + num;
				printf("Result is : %i\n", num1);
				break;
			case '-':
				num1 = num1 - num;
				printf("Result is : %i\n", num1);
				break;
			case '/':
				if (num == 0) {
					printf("Division by 0 ! stupid bitch !\n");
				} else {
				num1 = num1 / num;
				printf("Result is : %i\n", num1);
				}
				break;
			case '*':
				num1 = num1 * num;
				printf("Result is : %i", num1);
				break;
		}
	} while(op == '+' || op == '-' || op == '/' || op == '*' || op == 's');
	if (op == 'e') {
		printf("The final result is : %i\n", num1);
		printf("Task ended bitch !\n");
	} else {
		printf("Incorrect format ! motherfucker !\n");
		goto inicio;
	}
	return 0;
}
