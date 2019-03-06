#include<stdio.h>

int main(void) {
	int qnt_dinheiro, notas_de_100, notas_de_50, notas_de_10, notas_de_5, notas_de_1, total_de_cedulas, notas_fixas_100, notas_fixas_50, notas_fixas_10, notas_fixas_5, notas_fixas_1;

	notas_de_100 = 0;
	notas_de_50 = 0;
	notas_de_5 = 0;
	notas_de_10 = 0;
	notas_de_1 = 0;
	printf("Digite, respectivamente, as notas de 100, 50, 10, 5 e 1 disponiveis: ");
	scanf("%d %d %d %d %d", &notas_fixas_100, &notas_fixas_50, &notas_fixas_10, &notas_fixas_5, &notas_fixas_1);
	printf("Digite quanto dinheiro deseja sacar: ");
	scanf("%d", &qnt_dinheiro);
	do {
		if(qnt_dinheiro >= 100) {
			notas_de_100 = qnt_dinheiro / 100;
			if(notas_de_100 > notas_fixas_100) {
				goto lin23;
			} else {
				qnt_dinheiro = qnt_dinheiro % 100;
			}
		}lin23: if(qnt_dinheiro >= 50 && qnt_dinheiro < 100) {
			notas_de_50 = qnt_dinheiro / 50;
			if(notas_de_50 > notas_fixas_50) {
				goto lin30;
			} else {
			qnt_dinheiro = qnt_dinheiro % 50;
			}
		}lin30: if(qnt_dinheiro >= 10 && qnt_dinheiro < 50) {
			notas_de_10 = qnt_dinheiro / 10;
			if(notas_de_10 > notas_fixas_10) {
				goto lin37;
			} else {
				qnt_dinheiro = qnt_dinheiro % 10;
			}
		}lin37: if(qnt_dinheiro >= 5 && qnt_dinheiro < 10) {
			notas_de_5 = qnt_dinheiro / 5;
			if(notas_de_5 > notas_fixas_5) {
				goto lin44;
			} else {
				qnt_dinheiro = qnt_dinheiro % 5;
			}
		}lin44: if(qnt_dinheiro >= 1 && qnt_dinheiro < 5) {
			notas_de_1 = qnt_dinheiro / 1;
			if(notas_de_1 > notas_fixas_1) {
				goto lin51;
			} else {
				qnt_dinheiro = qnt_dinheiro % 1;
			}
			lin51:
			printf("Nao ha dinheiro suficiente para o saque");
			goto final;
		}
	} while (qnt_dinheiro != 0);
	total_de_cedulas = notas_de_100 + notas_de_50 + notas_de_10 + notas_de_5 + notas_de_1;
	printf("Foi emitido um total de %d cedulas, em %d notas de 100, %d notas de 50, %d notas de 10, %d notas de 5 e %d notas de 1\n", total_de_cedulas, notas_de_100, notas_de_50, notas_de_10, notas_de_5, notas_de_1);
	final: 
	return 0;
}

