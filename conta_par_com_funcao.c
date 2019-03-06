#include<stdio.h>
//Funcao le vetor
void ler_vetor(int v[]) {
	int i;
	
	printf("Digite os numeros do vetor: ");
	for(i = 0; i < 5; i++)
		scanf("%i", &v[i]);
}
//Funcao conta par
int conta_par(int v[]) {
	int i, cnt_par;
	cnt_par = 0;
	for (i = 0; i < 5; i++) {
		if(v[i] % 2 == 0)
			cnt_par++; 
	}	
	return cnt_par;
}

int main (void) {
	int i, vetor[5], par;
	void ler_vetor(int v[]);
	int conta_par(int v[]);
	ler_vetor(vetor);
//	par = conta_par(vetor);
	printf("A quantidade de pares no vetor e: %i\n", conta_par(vetor));
//Pode ser : printf("A quantidade de pares no vetor e: %i\n", par);
	return 0;
}
