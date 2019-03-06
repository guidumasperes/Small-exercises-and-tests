#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
	int dividendo;
	int divisor;
	int quociente; 
	int resto;
	scanf("%d %d", &dividendo, &divisor);
	quociente = dividendo / divisor; 
	resto = dividendo % divisor; 
	printf("Divisao: %d dividido por %d e %d, resto %d\n", dividendo, divisor, quociente, resto);
	system("pause");
	return 0;
}
