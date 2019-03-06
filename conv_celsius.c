#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
	float c;
	int f = 50, count;
	for (count = 0; count <= 100; count++) {
		c = 5 * (f - 32) / 9.0; 
		printf("Contador: %d   Farenheit: %d   Celsius: %f\n", count, f, c);
		f = f + 1;
	}
	return 0;
}
