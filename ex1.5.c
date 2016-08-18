#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 300 - 0; floating-point version */

int main(int argc, char *argv[]){
	
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = upper;

	printf("\n");
	printf("Fahrenheit  Celsius\n");
	printf("--------------------\n");

	while(fahr >= 0){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("  %3.0f      %6.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
	
	return -1;

}
