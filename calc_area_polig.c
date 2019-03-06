#include <stdio.h>
#include <stdlib.h>

int main (void) {
//Declarar as variáveis
	int num_ilhas, count, area = 0;
	double x1, y1, x2, y2, x3, y3, x4, y4;
//Ler o número de ilhas
	scanf("%d", &num_ilhas);	
//Ler as coordenadas	
	for (count = 1; count <= num_ilhas; count++) {	
	scanf("%e %e", &x1, &y1);	
	scanf("%e %e", &x2, &y2);
	scanf("%e %e", &x3, &y3);
	scanf("%e %e", &x4, &y4);
	area = area + (x1 * y2) - (y1 * x2) + (x3 * y4) - (y3 * x4);
	}
	printf("%d\n", -area);
	return 0;
}
