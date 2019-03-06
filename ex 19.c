#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int op1, op2;
	scanf("%d %d", &op1, &op2);
	if (op1 + op2 == 42 || op1 * op2 == 42 || op1 / op2 == 42 || op1 - op2 == 42)
	{
		printf("essa e a pergunta fundamental\n");
	} 
	else 
	{
		printf("essa nao e a pergunta fundamental\n");
	}
	system ("pause");
	return 0;
}
