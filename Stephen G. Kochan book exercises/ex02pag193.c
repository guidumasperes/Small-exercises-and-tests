#include<stdio.h>
//Esse programa calcula o n e o n^2 dos numeros e os printam na tela
int main (void) {
	int n, count;
	n = 1;
	printf("n      n * n\n");
	printf("---    ------\n");
	for (count = 0; count < 10; count++) {
//Aqui e colocada a precisao do printf
		printf("%i        %#4i\n", n, n*n);
		n++;	
	}
	return 0;
}


