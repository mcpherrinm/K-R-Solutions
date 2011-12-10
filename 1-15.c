/* K&R Exercise 1.15. Rewrite the temperature conversion program to use a
 * function for conversion. */

float centigrade(float fahrenheit) { 
   return 5*(fahrenheit - 32)/9.0;
}

#include <stdio.h>

int main() {
	float fahr;
	int lower, upper, step;

	lower = -40;
	upper = 100;
	step = 20;

	fahr = lower;
	printf("C\tF\n");
	while(fahr <= upper) {
		printf("%3.0f %6.1f\n", fahr, centigrade(fahr));
		fahr = fahr + step;
	}
	return 0;
}

