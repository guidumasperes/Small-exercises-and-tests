#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]) {
	int count1, a = 1,  b = 1, count2;
//Fazendo a mudança para "a"
	for (count1 = 1; count1 <= 99; count1 += 2) {
	printf("%d\n", a);
	a = a + 2;
	}
//Fazendo a mudança para "b"
	for (count2 = 1; count2 <= 29; count2++) {
		if ((b % 2 == 0 && (b+1) % 2 == 1) || (b % 2 == 1 && (b+1) % 2 == 0)) {
		b = b + 1;
		printf("%d\n", b);
		} else if ((b % 2 == 0 && (b+2) % 2 == 0) || (b % 2 == 1 && (b+2) % 2 == 1)) {
		b = b + 2;
		printf("%d\n", b);
		} else {
		b = b + 1;
		printf("%d\n", b);
		}
	}
	return 0;	
}
