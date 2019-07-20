//Programa para determinar o dia de amanha
#include<stdio.h>

int main (void) {
	struct date {
		int day;
		int month;
		int year;
	};
	struct date today, tomorrow;
	int days_in_month_1[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days_in_month_2[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	void tomorrow_date_leap(int v[], struct date now, struct date tom);
	void tomorrow_date_normal(int v[], struct date now, struct date tom);
	
	printf("Enter today's date: ");
	scanf("%i%i%i", &today.day, &today.month, &today.year);
//Conferindo se o ano e bissexto
	if((today.year % 4 == 0 && today.year % 100 != 0) || today.year % 400 == 0) {
		tomorrow_date_leap(days_in_month_2, today, tomorrow);
	} else {
		tomorrow_date_normal(days_in_month_2, today, tomorrow);
	}
	return 0;
}

void tomorrow_date_leap(int v[], struct date today, struct date tomorrow) {
	if(today.day != days_in_month_2[today.month - 1]) {
		tomorrow.day
	}
}
