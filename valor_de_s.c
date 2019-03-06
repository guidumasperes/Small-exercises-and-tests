#include<stdio.h>

int main (void) {
	float i, mult, soma, count, soma1; 
	for(i = 1.0; i <= 50.0; i = i + 1.0) {
		soma = 0.0;
		mult = 1.0;
		for(count = 1.0; count <= i; count = count + 1.0) {
		mult = mult * 2.0;
		soma = soma + mult;	
		}
		soma1 = soma; 		
	}
	printf("%g", soma1);
	
	return 0;
}
