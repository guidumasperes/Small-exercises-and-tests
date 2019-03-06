#include<stdio.h>

int main (void) {
	int pos_menor, menor_elem, cnt, num;
	int v[20];
//Fazer um for para preencher o vetor, assumindo que todos valores digitados pelo usuario sao diferentes
	for(cnt = 0; cnt < 20; cnt++) {
		scanf("%i", &num);
		v[cnt] = num;
	}
//Assumindo o primeiro elemento como o menor
	menor_elem = v[0];
//Verificando se o proximo pode ser menor que o menor e aplicando as condiçoes
	for(cnt = 0; cnt < 20; cnt++) {
		if(v[cnt] < menor_elem) {
			menor_elem = v[cnt];
			pos_menor = cnt;
		} else if (v[cnt] > menor_elem) {
			menor_elem = menor_elem;
		} else {
			menor_elem = v[cnt];
			pos_menor = cnt;
		}
	}
	printf("O menor elemento e %i e sua posicao e %i", menor_elem, pos_menor + 1);
	return 0;
}
