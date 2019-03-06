# include<stdio.h>

void sort(int v[], int elem) {
	int i, j, aux;
	for(i = 0; i < elem - 1; i++) {
		for(j = i + 1; j < elem; j++) {
			if(v[i] > v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		} 
	}
}

int min_elem(int v[], int elem) {
	int i, min;
	min = v[0];
	for(i = 0; i < elem - 1; i++) {
		if(v[i] > v[i + 1])
		min = v[i + 1];
	}		
	return min;
}

int min_elem_index(int v[], int elem) {
	int i, min;
	min = 0;
	for(i = 0; i < elem - 1; i++) {
		if(v[i] > v[i + 1])
		min = i + 1;
	}		
	return min;
}

int main (void) {
	int vetor[4] = {3, 2, 4, 1}, i;
	void sort(int v[], int elem);
	int min_elem(int v[], int elem);
	
	printf("Array before de sort: ");
	for(i = 0; i < 4; i++) {
		printf("%i ", vetor[i]);
	}
	printf("\n");
	printf("Array minimum element is %i in %i index\n", min_elem(vetor, 4), min_elem_index(vetor, 4));
	printf("Array after sort: ");
	sort(vetor, 4);
	for(i = 0; i < 4; i++) {
		printf("%i ", vetor[i]);
	}
	printf("\n");
	printf("The minimum element is now index %i", min_elem_index(vetor, 4));
	return 0;
}
