#include <stdio.h>
int main (void) { 
	int x;
	scanf("%i", &x);
	if (x % 5 == 0 && x % 3 == 0) {
		printf("O numero %i e divisivel por 3 e 5", x);
	} else {
		printf("O numero %i nao e divisivel por 3 e 5", x);
	}
	return 0;
}
