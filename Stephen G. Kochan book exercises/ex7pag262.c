//Este programa melhora o programa prime
#include<stdio.h>

int main (void) {
	int p, d;
	_Bool isPrime;
	for (p = 2; p <= 50 ; ++p) {
		isPrime = 1;
		if (p % 2 == 0 && p != 2){
			isPrime = 0;
		} else {
		for (d = 2; d < p; ++d)
			if (p % d == 0)
				isPrime = 0;
			if (isPrime != 0)
				printf("%i ", p);
		}
	}
	printf("\n");
	return 0;
}
