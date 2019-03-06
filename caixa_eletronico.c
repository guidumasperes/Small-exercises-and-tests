#include<stdio.h>

int main(void) {
	int qnt_dinheiro, notas_de_100, notas_de_50, notas_de_10, notas_de_5, notas_de_1, total_de_cedulas;

	notas_de_100 = 0;
	notas_de_50 = 0;
	notas_de_5 = 0;
	notas_de_10 = 0;
	notas_de_1 = 0;
	printf("Digite quanto dinheiro deseja sacar: ");
	scanf("%d", &qnt_dinheiro);
	do {
		if(qnt_dinheiro >= 100) {
			notas_de_100 = qnt_dinheiro / 100;
			qnt_dinheiro = qnt_dinheiro % 100;
		} else if(qnt_dinheiro >= 50 && qnt_dinheiro < 100) {
			notas_de_50 = qnt_dinheiro / 50;
			qnt_dinheiro = qnt_dinheiro % 50;
		} else if(qnt_dinheiro >= 10 && qnt_dinheiro < 50) {
			notas_de_10 = qnt_dinheiro / 10;
			qnt_dinheiro = qnt_dinheiro % 10;
		} else if(qnt_dinheiro >= 5 && qnt_dinheiro < 10) {
			notas_de_5 = qnt_dinheiro / 5;
			qnt_dinheiro = qnt_dinheiro % 5;
		} else if(qnt_dinheiro >= 1 && qnt_dinheiro < 5) {
			notas_de_1 = qnt_dinheiro / 1;
			qnt_dinheiro = qnt_dinheiro % 1;
		} else {
			printf("Operacao invalida!\n");
			break;
		}
	} while (qnt_dinheiro != 0);
	total_de_cedulas = notas_de_100 + notas_de_50 + notas_de_10 + notas_de_5 + notas_de_1;
	printf("Foi emitido um total de %d cedulas, em %d notas de 100, %d notas de 50, %d notas de 10, %d notas de 5 e %d notas de 1\n", total_de_cedulas, notas_de_100, notas_de_50, notas_de_10, notas_de_5, notas_de_1);

	return 0;
}
