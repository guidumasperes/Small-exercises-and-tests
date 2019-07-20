#include<stdio.h>

int main (void) {
	char character[81], word[81];
	int index;
	int findString(char caractere[], char palavra[]);
	
	printf("Escreva a palavra: ");
	gets(word); //pode ser tambem: scanf("%s", word);
	printf("Escreva o caractere: ");
	scanf("%s", character);
	index = findString(character, word);
	if(index != -1) {
		printf("O indice em que comeca na string e: %i\n", index);	
	} else {
		printf("Nao existe resposta");
	}
	return 0;
}

int findString(char caractere[], char palavra[]) {
	int start_pos, i, j, cnt_caractere, qnt_letra;
	int cnt_letter(char c[]);
	
	for(i = 0; palavra[i] != '\0'; i++) {
		if(palavra[i] == caractere[0]) {
			j = 0;
			cnt_caractere = 0;
			start_pos = i;
			while(palavra[i] == caractere[j] && caractere[j] != '\0') {
				++j;
				++i;
				cnt_caractere++;
			}
			qnt_letra = cnt_letter(caractere);
			if(palavra[i - 1] == caractere[j - 1] && cnt_caractere == qnt_letra) {
				return start_pos;
			} else {
				i = start_pos;
			}
		}
	}
	return -1;
}

int cnt_letter(char c[]) {
	int i, letra;
	
	letra = 0;
	for(i = 0; c[i] != '\0'; i++) {
		letra++;
	}
	return letra;
}
