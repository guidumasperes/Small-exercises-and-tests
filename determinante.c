#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int a11, a12, a21, a22, det;
	printf("Entre com os elementos da matriz : \n");
	printf("a11 : ");
	scanf("%d", &a11);
	printf("a12 : ");
	scanf("%d", &a12);
	printf("a21 : ");
	scanf("%d", &a21);	
	printf("a22 : ");
	scanf("%d", &a22);
	det = a11 * a22 - a21 * a12;
	printf("O determinante e : %d", det);
	return 0;
}
