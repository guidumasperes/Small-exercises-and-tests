#include<stdio.h>

int main (void) {
	int lcm(int u, int v);
	int gcd(int u, int v);
	int u, v, result;
	printf("Entre com os numeros que voce quer calcular o minimo multiplo comum: ");
	scanf("%i %i", &u, &v);
	result = lcm(u, v);
	printf("O minimo multiplo comum e: %i", result);
	return 0;
}

int gcd(int u, int v) {
	int temp;
	while (v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}
	return u;
}

int lcm(int u, int v) {
	int result, denom;
	denom = gcd(u, v);
	result = (u * v) / denom;
	return result;
}
