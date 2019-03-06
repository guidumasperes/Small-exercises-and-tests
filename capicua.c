#include<stdio.h>
int main (void) {
	int num, ult_dig, penul_dig, seg_dig, meio_dig, prim_dig; 
	printf("Entre com um numero de 5 digitos : ");
	scanf("%i", &num);
	ult_dig = num % 10;
	num = num / 10;
	penul_dig = num % 10;
	num = num / 10;
	meio_dig = num % 10;
	num = num / 10;
	seg_dig = num % 10;
	prim_dig = num / 10;
	if (ult_dig == prim_dig && penul_dig == seg_dig) {
		printf("O numero e capicua");
	} else {
		printf("O numero nao e capicua");
	}
	return 0;
}
