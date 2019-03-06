// separando algarismos

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
	int num1, quociente1, resto1, quociente2, resto2, quociente3, resto3;
	scanf("%d", &num1);
	quociente1 = num1 / 10;
	resto1 = num1 % 10;
	quociente2 = quociente1 / 10;
	resto2 = quociente1 % 10;
	quociente3 = quociente2 / 10;
	resto3 = quociente2 % 10;
	printf("%d %d %d %d %d %d\n", quociente1, resto1, quociente2, resto2, quociente3, resto3);
	system("pause");
	return 0;
}

