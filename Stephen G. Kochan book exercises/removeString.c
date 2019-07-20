#include<stdio.h>

int main (void) {
	char palavra[30], word[30];
	int index, final_index;
	void removeString(char text[], char wordi[], int ini, int final);
	
	printf("Digite a palavra: ");
	gets(palavra);
	printf("Digite o indice que quer comecar: ");
	scanf("%i", &index);
	printf("Digite o indice que quer terminar: ");
	scanf("%i", &final_index);
	removeString(palavra, word, index, final_index);
	return 0;
}

void removeString(char text[], char wordi[], int ini, int final) {
	int i, cnt_i , j;
	
	cnt_i = 0;
	for(i = 0; text[i] != '\0'; i++) {
		if(i == ini) {
			while(i >= ini && i <= final) {
				i++;
				cnt_i++;
			}
		} else {
			wordi[i - cnt_i] = text[i];
		}
	}
	wordi[(i - cnt_i) + 1] = '\0';
	for(j = 0; j < (i - cnt_i); j++) {
		printf("%c", wordi[j]);
	}
}
