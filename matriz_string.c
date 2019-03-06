//Matriz de string
#include<stdio.h>

int main (void) {
	char nome_func[6][30];
	int i;
	
	for(i = 0; i < 6; i++) {
		scanf("%s", nome_func[i]);
	}
	for(i = 0; i < 6; i++) {
		printf("%s o indice e : %i\n", nome_func[i], i);
	}
}
