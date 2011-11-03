/* K&R Exercise 1-4: Modify the temperature conversion program to print a
 * Celsius to Fahrenheit table. */

#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -40;
	upper = 200;
	step = 20;

	celsius = lower;
	printf("C F\n");
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%6.1f %3.0f\n",celsius, fahr);
		celsius = celsius + step;
	}
}
