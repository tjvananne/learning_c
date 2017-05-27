#include <stdio.h>

main() 
{

	long nc;

	nc = 0;

	while (getchar() !=EOF)
	{
		nc = nc + 1;
	}

	printf("%ld\n", nc);

}
