#include <stdio.h>

/* print Celsius-Fahrenheit table 
	for celsius = 0 - 300; floating-point version */  

int main(int argc, char *argv[]){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("\n");
	printf("Celsius  Fahrenheit\n");
	printf("-------------------\n");

	celsius = lower;
	while (celsius <= upper){
		fahr = ((9.0/5.0) * celsius) + 32.0;
		printf(" %3.0f      %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return -1;
}
