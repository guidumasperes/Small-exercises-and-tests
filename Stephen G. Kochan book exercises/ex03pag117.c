#include<stdio.h>

int main (void) {
	int ratingCounters[11], i, response, numRes;
	for(i = 1; i <= 10; ++i) {
		ratingCounters[i] = 0;
	}
	printf("How many responses do you want? ");
	scanf("%i", &numRes);
	printf("Enter your responses : \n");
	for(i = 1; i <=numRes; ++i) {
		scanf("%i", &response);
		if (response < 1 || response > 10) {
			printf("Bad response : %i\n", response);
		} else {
			++ratingCounters[response]; //ratingCounters[response] = ratingCounters[response] + 1;
		}
	}
	printf("\n\nRating   Number of Responses\n");
	printf("--------      -------------------\n");
	for(i = 1; i <=10; ++i) {
		printf("%4i%14i\n", i, ratingCounters[i]);
	}
	return 0;
}
