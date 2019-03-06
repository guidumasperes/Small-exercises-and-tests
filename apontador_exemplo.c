#include<stdio.h>

int main (void) {
	int count = 10, x;
	int *pointer_to_int;
	
	pointer_to_int = &count; //a variavel pointer_to_int recebe um apontador para variavel count, pointer_to_int aponta para count 
	x = *pointer_to_int; //a variavel x recebe o conteudo da variavel para qual pointer_to_int aponta
	printf("count = %i, x = %i\n", count, x);
	return 0;
} 
