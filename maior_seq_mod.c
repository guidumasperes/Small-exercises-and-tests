#include<stdio.h>

int main (void) {
	int num = 0, ant = 0, max = 0, cnt = 1;
	
	scanf("%d", &ant);
	
	while(ant >= 0) {
		scanf("%d", &num);
		if(num > ant) {
			
			cnt++;
		} else {
			if(max < cnt) {
				max = cnt;
				cnt = 1;
			}
		}
		ant = num;
	}
	printf("A maior subsequencia e: %d\n", max);
	return 0;
}
