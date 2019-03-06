#include<stdio.h>

int main (void) {
	int num = 0, ant = 0, max = 0, cnt = 0;
	
	while(num >= 0) {
		scanf("%d", &num);
		if(num >= ant) {
			ant = num;
			cnt++;
		} else if(num < ant && num >= 0) {
			if(max < cnt) {
				max = cnt;
			}
			cnt = 0;
			ant = 0;
		} else {
			if(max > cnt) {
				goto final;
			} else {
				max = cnt;
				goto final;
			} 
		}
	}
	final:
	printf("A maior subsequencia e: %d\n", max);
	return 0;
}

