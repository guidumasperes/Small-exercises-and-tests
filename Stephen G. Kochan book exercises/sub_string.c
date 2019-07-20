#include<stdio.h>

int main (void) {
	char str[81], final[81];
	int start_index, number_char;
	void substring(char source[], int start, int count, char result[]);
	
	printf("Escreva a palavra: ");
	gets(str);
	printf("Digite o indice onde quer comecar: ");
	scanf("%i", &start_index);
	printf("Digite quantos caracteres deseja extrair: ");
	scanf("%i", &number_char);
	substring(str, start_index, number_char, final);
	printf("O resultado e: %s\n", final);
	printf("O resultado e : %s\n", str);
	return 0;
}

void substring(char source[], int start, int count, char result[]) {
	int i;
	
	for(i = 0; i <= count - 1; i++) {
		if(source[i] == '\0') {
			break;	
		} else {
			result[i] = source[i + start];
			source[i + start] = ' ';
		}
	}
	result[i + 1] = '\0';	
}
