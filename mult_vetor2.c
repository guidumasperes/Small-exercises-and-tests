#include<stdio.h>

int main (void) {
	int v1[10], v2[10], v3[10], cnt, num;
	printf("    ************************************************   \n");
	printf("    **Esse programa calcula multiplicao de vetores**   \n");
	printf("    ************************************************   \n\n");
	printf("Digite os valores a guardar no vetor 1:  ");
	for(cnt = 0; cnt < 10; cnt++) {
		scanf("%i", &num);
		v1[cnt] = num;
	}
	printf("\n");
	printf("Digite os valores a guardar no vetor 2:  ");
	for(cnt = 0; cnt < 10; cnt++) {
		scanf("%i", &num);
		v2[cnt] = num;
	}
	printf("\n");
	printf("Os valores resultantes da multiplicacao sao:  ");
	for(cnt = 0; cnt < 10; cnt++) {
		v3[cnt] = v1[cnt] * v2[cnt];
		printf("%i ", v3[cnt]);
	}
	printf("\n");
	return 0;
}
