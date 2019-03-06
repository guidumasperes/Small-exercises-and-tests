// Esse programa lê duas datas e determina qual ocorreu primeiro e qual ocorreu depois

#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
//Declarando as variáveis
	int dia1, dia2, mes1, mes2, ano1, ano2;
//Explicando ao usuário o que o programa faz
	printf("\n");
	printf("****Este programa lê duas datas e determina qual ocorreu primeiro****");
	printf("\n");
	printf("\n");
//Lendos as datas e orientando o usuário a digitá-las
	printf("Digite a primeira data no formato dia/mes/ano:");
	scanf("%d/%d/%d",&dia1, &mes1, &ano1);
	printf("Digite a segunda data no formato dia/mes/ano:");
	scanf("%d/%d/%d",&dia2, &mes2, &ano2);
//Estabelecendo as condições
	if (ano1 > ano2) 
	{
		printf("A segunda data ocorreu anteriormente a primeira\n"); 
	} 
	if (ano1 < ano2) 
	{
		printf("A primeira data ocorreu anteriormente a segunda\n");
	} 
	if (ano1 == ano2 && mes1 > mes2) 
	{
		printf("A segunda data ocorreu anteriormente a primeira\n");
	} 
	if (ano1 == ano2 && mes1 < mes2) 
	{
		printf("A primeira data ocorreu anteriormente a segunda\n");
	} 
	if (ano1 == ano2 && mes1 == mes2 && dia1 > dia2) 
	{
		printf("A segunda data ocorreu anteriormente a primeira\n");
	} 
	if (ano1 == ano2 && mes1 == mes2 && dia1 < dia2) 
	{
		printf("A primeira data ocorreu anteriormente a segunda\n");
	} 
	if (ano1 == ano2 && mes1 == mes2 && dia1 == dia2) 
	{
		printf("As datas são iguais\n");
	}
	return 0;
}
						
		
	


