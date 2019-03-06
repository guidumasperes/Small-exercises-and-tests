#include<stdio.h>

int main (void) {
	int i, v[10], v1[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	printf("Digite um vetor: ");
	for(i = 0; i < 10; i++) {
		scanf("%i", &v[i]);
		if (v[i + 1] % 2 == 0 && v[i] % 2 != 0) {
			v1[i] = v[i + 1];
			v1[i + 1] = v[i];
		} else {
			v1[i] = v[i];
		}
		printf("%i", v1[i]);
	}
	return 0;
}
