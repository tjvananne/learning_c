#include <stdio.h>

main()
{
	int c;
	
	// this is just a more concise way of writing the same code
	// you can make assignments inside of the while loop
	while ((c = getchar()) != EOF)
		putchar(c);
}
