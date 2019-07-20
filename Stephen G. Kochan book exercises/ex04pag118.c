#include<stdio.h>

int main (void) {
	float array_grade[10], average, grade, sum_grades = 0;
	int i;
	for(i = 0; i < 10; i++) {
		printf("Enter grade #%i: ", i + 1);
		scanf("%f", &grade);
		array_grade[i] = grade;
		sum_grades = sum_grades + array_grade[i];
	}
	average = sum_grades / 10.0;
	printf("%.2f", average);
	return 0;
}
