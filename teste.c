#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]) {
	int count, a, b;
	scanf("%d", &a);
	for (count = 1; count <= a; count++ ) {
	printf("Ler um numero:");	
	scanf("%d", &b);
	printf("imprimir um numero:");	
	printf("%d\n", b);
	} 
	return 0;
}
