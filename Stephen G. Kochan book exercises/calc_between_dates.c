#include<stdio.h>
	struct date {
		int year;
		int month;
		int day;
	};
int main (void) {
	struct date date_to_calc[2];
	int n;
	float n1, n2;
	void read_calc_date(struct date dat[]);
	float calc_date(struct date dat[]);
	
//Chamar a funcao para ler a data 1
	read_calc_date(date_to_calc);
//Chamar a funcao para ler a data 2
	read_calc_date(date_to_calc);
//Calculando n1
	n1 = calc_date(date_to_calc);
//Calculando n2
	n2 = calc_date(date_to_calc);
	n = n2 - n1;
	printf("O numero de dias e: %i", n);
	return 0;
}

void read_calc_date(struct date dat[]) {
	static int count_func = 0;
	
	printf("Digite a #%i data: ", count_func + 1);
	scanf("%i %i %i", &dat[count_func].day, &dat[count_func].month, &dat[count_func].year);
	count_func++;
}

float calc_date(struct date dat[]) {
	static int count_func2 = 0;
	float result;
	
	if(dat[count_func2].month <= 2) {
		result = ((1461 * (dat[count_func2].year - 1)) / 4) + (153 * (dat[count_func2].month + 13) / 5) + dat[count_func2].day;
	} else {
		result = ((1461 * dat[count_func2].year) / 4) + ((153 * (dat[count_func2].month + 1)) / 5) + dat[count_func2].day;
	}
	count_func2++;
	return result;
}
