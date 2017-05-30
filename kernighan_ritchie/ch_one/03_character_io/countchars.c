#include <stdio.h>

/* 
this program is similar to the character copy program, but it 
counts the characters in the input string that we give it
*/

main() 
{

	long nc;

	nc = 0;

	while (getchar() !=EOF)
	{
		// could also just do ++nc (increment by one)
		nc = nc + 1;
	}

	printf("%ld\n", nc);

}
