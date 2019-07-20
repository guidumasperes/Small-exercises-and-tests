#include <stdio.h>
//Triangular number
int main (void) {
	int n, count;
	n = 5;
	printf(" n      triangular number\n");
	printf("---    -------------------\n");
	for(count = 5; count <= 50; count += 5) {
//Pegar duas colunas na tela, colaca-se o %2i
		printf("%2i             %i\n", n, n * (n + 1) / 2);
		n = n + 5;
	}
	return 0;
}
