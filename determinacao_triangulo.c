#include <stdio.h>

int main (void) {
	int x, y, z;
	scanf("%i %i %i", &x, &y, &z);
	if(x + y > z && y + z > x && x + z > y) {
		if(x == y &&  z != x || x == z && y != x || y == z && x != y) {
			printf("O triangulo e isoceles\n");
		} else if (x == y && x == z && y == z) {
			printf("o triangulo e equilatero\n");	
		} else {
			printf("O triangulo e escaleno\n");
		}
	} else {
		printf("Nao e um triangulo\n");
	}
	return 0;
}
