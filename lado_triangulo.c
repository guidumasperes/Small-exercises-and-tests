#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
	int la, lb, lc, t, area;
	printf("Digite os lados dos triangulos : \n");
	printf("Lado A : ");
	scanf("%d", &la);
	printf("Lado B : ");
	scanf("%d", &lb);
	printf("Lado C : ");
	scanf("%d", &lc);
	t = (la + lb + lc)/2;
	area = sqrt(t * ( t - la ) * ( t - lb ) * (t - lc));
	printf("A area do triangulo e : %d", area);
	return 0; 
}
