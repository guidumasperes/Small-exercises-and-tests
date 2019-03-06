#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]) {
	int dias, meses, anos, ano_dia, mes_dia, total_dias;
	printf("Digite sua idade expressa em anos, meses e dias:");
	scanf("%d %d %d", &anos, &meses, &dias);
	ano_dia = anos * 365;
	mes_dia = meses * 30;
	total_dias = ano_dia + mes_dia + dias;
	printf("Voce tem %d dias considerando os meses iguais a 30 dias e o ano igual a 365 dias\n", total_dias);
}	
	
	
	
	
	
	
