#include<stdio.h>

int main (void) {
	int cnt_par, i, v[10];
	printf("Escreva o vetor: ");
	cnt_par = 0;
	for(i = 0; i < 10; i++) {
		scanf("%i", &v[i]);
	}
	for(i = 0; i < 10; i++) {
		if (v[i] % 2 == 0 /*Entao o numero e par*/ ) {
			cnt_par++;
		}
	}
	printf("A quantidade de numeros pares nesse vetor e: %i", cnt_par);
	return 0;
}
