#include<stdio.h>

int main (void) {
	char g[5], r[5]; 
	int i, j, nota;
	printf("Digite o gabarito da prova: ");
	for(i = 0; i <= 5; i++) {
		scanf("%c", &g[i]);
	}
	for(i = 1; i <= 2; i++) {
		nota = 0;
		printf("Digite as respostas do #%i aluno: ", i);
		for(j = 0; j < 5; j++) {
			scanf("%c", &r[j]);
		}
		for(j = 0; j < 5; j++) {
			if(r[j] == g[j]) {
				nota++;
			}
		}
		if(nota >= 6) {
			printf("O aluno #%i teve nota %i, portanto, esta aprovado\n", i, nota);
		} else {
			printf("O aluno #%i teve nota %i, portanto, esta reprovado\n", i, nota);
		}
	}
	return 0;
}
