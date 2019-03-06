#inclue <stdio.h>

int main (void) {
	int c1, c2, c3, c4, c5, c6, c7, c8, c9;
	scanf("%i %i %i %i %i %i %i %i %i", &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9);
	if (c1 * c4 * c7 == 0 || c1 *c2 * c3 == 0 || c3 * c6 *c9 == 0 || c2 * c5 *c8 == 0 || c7 * c8 * c9 == 0 || c1 * c5 * c9 == 0 ||c3 * c5 * c7 == 0 || c4 * c5 * c6 == 0) {
		printf("O\n");
	} else if (c1 * c4 * c7 == 8 || c1 *c2 * c3 == 8 || c3 * c6 *c9 == 8 || c2 * c5 *c8 == 8 || c7 * c8 * c9 == 8 || c1 * c5 * c9 == 8 ||c3 * c5 * c7 == 8 || c4 * c5 * c6 == 8) {
		printf("X\n");
	} else {
		printf("Indefinido");
	} else if ((c1 * c4 * c7 == 0 && c2 * c5 * c8 == 8) || (c1 * c4 * c7 == 0 && c3 * c6 * c9 == 8) || (c1 * c2 * c3 == 0 && c4 * c5 * c6 == 8) || (c1 * c2 * c3 == 0 && c7 * c8 * c9 == 8) || ()
	return 0;
}
