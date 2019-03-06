#include<stdbool.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct inserir {
	char nome_ins[101];
	int dia[2];
	int mes[2];
	int ano[4];
	char cod_doenca[4];
	int cod_medico[6];
};

struct remover {
	char nome_rem[101];
};

struct muda_diag {
	char nome_diag[101];
	char doenca_diag[101];
};

struct muda_data {
	char nome_data[101];
	int dia[2];
	int mes[2];
	int ano[4];
};

struct altera_medico {
	char nome_pessoa[101];
	char nome_medico[101];
};

int main (void) {
	char ref[200];
	int cnt_add = 0, cnt_rm = 0, cnt_altdiag = 0, cnt_altdata = 0, cnt_altmed = 0;
	struct inserir vAdd[100]; 
	struct remover vRm[100]; 
	struct muda_diag vAltdiag[100];
	struct muda_data vAltdata[100];
	struct altera_medico vAltmed[100]; 
	void inserirPessoa(char vetor1[200], struct inserir vetor2[200], int cnt);
	void removerPessoa(char vetor1[200], struct remover vetor2[200], int cnt);
	void alteraDiag(char vetor1[200], struct muda_diag vetor2[200], int cnt);
	void alteraData(char vetor1[200], struct muda_data vetor2[200], int cnt);
	void alteraMedico(char vetor1[200], struct altera_medico vetor2[200], int cnt);
	
	do {
		gets(ref);
		if(ref[0] == 'a' && ref[1] == 'd' && ref[2] == 'd') {
			inserirPessoa(ref, vAdd, cnt_add);
			cnt_add++;
		} else if(ref[0] == 'r' && ref[1] == 'm') {
			removerPessoa(ref, vRm, cnt_rm);
			cnt_rm++;
		} else if(ref[0] == 'a' && ref[1] == 'l' && ref[2] == 't' && ref[3] == 'd' && ref[4] == 'i' && ref[5] == 'a' && ref[6] == 'g') {
			alteraDiag(ref, vAltdiag, cnt_altdiag);
			cnt_altdiag++;
		} else if(ref[0] == 'a' && ref[1] == 'l' && ref[2] == 't' && ref[3] == 'd' && ref[4] == 'a' && ref[5] == 't' && ref[6] == 'a') {
			alteraData(ref, vAltdata, cnt_altdata);
			cnt_altdata++;
		} else if(ref[0] == 'a' && ref[1] == 'l' && ref[2] == 't' && ref[3] == 'm' && ref[4] == 'e' && ref[5] == 'd') {
			alteraMedico(ref, vAltmed, cnt_altmed);
			cnt_altmed++;
		}
	} while (ref[0] != 'O');
}

void inserirPessoa(char vetor1[200], struct inserir vetor2[200], int cnt) {
	int i;
	bool letra_alfabeto (char c);
	bool numerico (int numero);
	
	for(i = 4; vetor1[i] != '\0'; i++) {
		if (letra_alfabeto(vetor1[i]) && letra_alfabeto(vetor1[i + 1]))
			vetor2[cnt].nome_ins[i] = vetor1[i];
		if (numerico(vetor1[i]) && numerico(vetor1[i + 1]) && vetor1[i + 2] == '/' && numerico(vetor1[i + 3]) && numerico(vetor1[i + 4]) && vetor1[i + 5] == '/')
			vetor2[cnt].dia[i] = vetor1[i];	
		if (numerico(vetor1[i]) && vetor1[i + 1] == '/' && numerico(vetor1[i + 2]) && vetor1[i + 3] && vetor1[i + 4] == '/')
			vetor2[cnt].dia[i] = vetor1[i];	
		if (vetor1[i] == '/' && numerico(vetor1[i + 1]) && numerico(vetor1[i + 2]) && vetor1[i + 3] == '/' && numerico(vetor1[i + 4]))
			
		if (numerico(vetor1[i]) && numerico(vetor1[i + 1]) && vetor1[i + 2] == '/' && numerico(vetor1[i + 3]) && numerico(vetor1[i + 4]))
			vetor2[cnt].mes[i] = vetor1[i];	
		if (numerico(vetor1[i]) && vetor1[i + 1] == '/' && numerico(vetor1[i + 2]) && vetor1[i + 3] && vetor1[i + 4] == '/')
			vetor2[cnt].mes[i] = vetor1[i];
		if (vetor1[i] == '/' && numerico(vetor1[i + 1]) && numerico(vetor1[i + 2]) && numerico(vetor1[i + 3]) && numerico(vetor1[i + 4]))
		
		if (numerico(vetor1[i]) && numerico(vetor1[i + 1]) && numerico(vetor1[i + 2]) && numerico(vetor1[i + 3]) && vetor1[i + 4] == ' ')
			vetor2[cnt].ano[i] = vetor1[i];
		if (numerico(vetor1[i]) && numerico(vetor1[i + 1]) && numerico(vetor1[i + 2]) && vetor1[i + 3] == ' ')
			vetor2[cnt].ano[i] = vetor1[i];
		if (numerico(vetor1[i]) && numerico(vetor1[i + 1]) && vetor1[i + 2] == ' ')
			vetor2[cnt].ano[i] = vetor1[i];
		if (numerico(vetor1[i]) && vetor1[i + 1] == ' ')
			vetor2[cnt].ano[i] = vetor1[i];
		if (letra_alfabeto(vetor1[i]) && numerico(vetor1[i + 1]))
			vetor2[cnt].cod_doenca[i] = vetor1[i];
		if (numerico(vetor1[i]) && letra_alfabeto(vetor1[i - 1]))
			vetor2[cnt].cod_doenca[i] = vetor1[i];
		if (numerico(vetor1[i]) && numerico(vetor1[i - 1]) && letra_alfabeto(vetor1[i - 2]))
			vetor2[cnt].cod_doenca[i] = vetor1[i];
		if (numerico(vetor1[i]))
			vetor2[cnt].cod_medico[i] = vetor1[i];			
	}		
}

bool letra_alfabeto (char c) {
	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
		return true;
	}
	else {
		return false;
	}
}

bool numerico (int numero) {
	if ( (numero >= '0' && numero <= '9') ) {
		return true;
	}
	else {
		return false;
	}
}

void removerPessoa(char vetor1[200], struct remover vetor2[200], int cnt) {
	strcpy(vetor2[cnt].nome_rem, vetor1);
}

void alteraDiag(char vetor1[200], struct muda_diag vetor2[200], int cnt) {
	int i, j;
	bool palavra = true;
	bool letra_alfabeto (char c);
	
	
	for(i = 8; vetor1[i] != ' '; i++) {
		if(letra_alfabeto(vetor1[i])) {
			vetor2[cnt].nome_diag[i] = vetor1[i];	
		} else {
			break;
		}
	}	
	j = 1;
	for(j = j + i; vetor1[j] != '\0'; j++) {
		vetor2[cnt].doenca_diag[i] = vetor1[i];
	}
}

void alteraData(char vetor1[200], struct muda_data vetor2[200], int cnt) {
	int i = 0, j = 1, k = 1, l = 1;
	
	for(i = 8; vetor1[i] != ' '; i++) {
		vetor2[cnt].nome_data[i] = vetor1[i];
	}
	for(j = j + i; vetor1[j] != '/'; j++) {
		vetor2[cnt].dia[j] = vetor1[j];
	}
	for(k = k + i; vetor1[k] != '/'; k++) {
		vetor2[cnt].mes[k] = vetor1[k];
	}
	for(l = l + i; vetor1[l] != '\0'; l++) {
		vetor2[cnt].ano[l] = vetor1[l];
	}
}

void alteraMedico(char vetor1[200], struct altera_medico vetor2[200], int cnt) {
	int i, j;
	
	for(i = 8; vetor1[i] != ' '; i++) {
		vetor2[cnt].nome_pessoa[i] = vetor1[i];
	}	
}
