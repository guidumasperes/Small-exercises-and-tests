//Linked list
#include<stdio.h>
#include<stdlib.h>

int main (void) {
	struct entry {
		int value;
		struct entry *next;
	};
	struct entry n1, n2, n3;
	struct entry *list_pointer;
	
	list_pointer = &n1; // Recebe toda a estrutura
	n1.value = 100;
	n1.next = &n2;
	n2.value = 200;
	n2.next = &n3;
	n3.value = 300;
	n3.next = NULL;
	while (list_pointer != NULL) {
		printf("%i\n", (*list_pointer).value);
		list_pointer = (*list_pointer).next;
	}
	return 0;
}
