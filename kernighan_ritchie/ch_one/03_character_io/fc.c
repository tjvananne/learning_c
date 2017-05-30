#include <stdio.h>

/* copy input to output; 1st version */

main()
{
	// this is an int so it is big enough to store the EOF object
	// EOF can fit in an int type, but not a char type
	int c;
	
	// initial get char call to get us started
	c = getchar();

	// and now we stream!
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
