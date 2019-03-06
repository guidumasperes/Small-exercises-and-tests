#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
	float custo_fab, custo_con;
	printf("Digite o custo de fabrica:");
	scanf("%f", &custo_fab);
	custo_con = 0.12 * custo_fab + 0.3 * custo_fab + custo_fab;
	printf("O custo ao consumidor e %f\n", custo_con);
	return 0;
}  
