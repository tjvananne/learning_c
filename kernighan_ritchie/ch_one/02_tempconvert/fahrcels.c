#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ...
300 */

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		// note we can't multiply by 5/9 because
		// integer division would truncate it to zero
		celsius = 5 * (fahr-32) / 9;

		// this won't right-justify the printed numbers...
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;

	}
}
