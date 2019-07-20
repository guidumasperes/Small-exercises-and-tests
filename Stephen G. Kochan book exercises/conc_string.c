#include<stdio.h>

int main (void) {
	char str1[] = {"Hello "};
	char str2[] = {"Word!"};
	char str3[20];
	void conc(char string1[], char string2[], char string3[]);
	
	conc(str1, str2, str3);
	printf("%s", str3);
	return 0;
}

void conc(char string1[], char string2[], char string3[]) {
	int i, j;
	
	for(i = 0; string1[i] != '\0'; i++) {
		string3[i] = string1[i];
	}
	for(j = 0; string2[j] != '\0'; j++) {
		string3[i + j] = string2[j];
	}
	string3[i + j] = '\0';
}


