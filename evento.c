#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int seg_rec, hora, seg, min;
//Receber os segundos
	scanf("%d", &seg_rec);
//Transformacao em hora
	hora = seg_rec / 3600;
//Transformacao em minutos
	min = seg_rec % 3600;
//Transformacao em segundos
	seg = min * 60;
//Mostrar o resultado
	printf("%d horas, %d minutos e %d segundos", hora, min, seg);
	return 0;	
}
