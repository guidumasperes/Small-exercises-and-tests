#include<stdio.h>
#include<math.h>

int main (void) {
	int tipo_media, nota1, nota2, nota3, media;
	printf("Digite as notas separadas por espaco :");
	scanf("%i %i %i", &nota1, &nota2, &nota3);
	printf("\n\n");
	printf("Escolha o tipo de media que voce quer calcular : \n\n");
	printf("1 - Aritmetica\n");
	printf("2 - Ponderada(3, 3, 4)\n");
	printf("3 - Harmonica\n");
	printf("4 - Geometrica\n");
	scanf("%i", &tipo_media);
	if (tipo_media == 1) {
		media = (nota1 + nota2 + nota3) / 3;
		printf("A media e : %i", media);
	} else if (tipo_media == 2) {
		media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / (3 + 3 + 4);
		printf("A media e : %i", media); 
	} else if (tipo_media == 3) {
		media = (1.0 / nota1 + 1.0 / nota2 + 1.0 / nota3) / 3.0;
		printf("A media e : %f", media);
	} else if (tipo_media == 4) {
		media = cbrt(nota1 * nota2 * nota3);
		printf("A media e : %f", media);
	}
	return 0;
}
