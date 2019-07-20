#include <stdio.h>

int main (void) {
	int n, triangularNumber, cnt, cnt1;
	cnt = 1;
	while (cnt <= 5) {
		printf("What triangular number do you want ? : ");
		scanf("%i", &n);
		triangularNumber = 0;
		cnt1 = 1;
		while (cnt1 <= n) {
			triangularNumber = triangularNumber + n;
		}
	printf("The triangularNumber %i is : %i", n, triangularNumber);	
	}
	return 0;
}
