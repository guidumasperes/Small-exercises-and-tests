#include <stdio.h>

int main (void) {
	int a, b, c;
	do {
	scanf("%i %i %i", &a, &b, &c);
	if (a != b && a != c && b != c) {
		if(a < b && a < c && b < c) {
			printf("%d %d %d\n", a, b, c);
		} else if (a < c && a < b && c < b) {
			printf("%d %d %d\n", a, c, b);
		} else if (b < a && b < c && a < c) {
			printf("%d %d %d\n", b, a, c);
		} else if (b < c && b < a && c < a) {
			printf("%d %d %d\n", b, c, a);
		}	else if (c < a && c < b && a < b) {
			printf("%d %d %d\n", c, a, b);
		}	else if (c < b && c < a && b < a) {
			printf("%d %d %d\n", c, b, a);
		}
	} else {
		printf("Os numeros nao podem ser iguais, tente de novo\n");
	}
	} while(a == b || a == c || b == c);
	return 0;
}
