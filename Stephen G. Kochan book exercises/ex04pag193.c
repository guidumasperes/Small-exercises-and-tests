//Programa para calcular fatorial
#include <stdio.h>
int main (void) {
	int n, count, resultado;
	resultado = 1;
//Perguntar qual fatorial quer calcular
	scanf("%d", &n);
	for(count = n; count > 0; count--) {
		printf("%d", count);
		resultado = resultado * count; 
		if(count != 1) {
			printf(" * ");
		} else {
			printf(" = %i", resultado);
		}
	}
	return 0;
}
