#include<stdio.h>

/* ex 1-6: verify that the expression

"getchar() != EOF" is zero or one

*/

int main() {
	
	int c, is_not_eof;

	c = getchar();
	is_not_eof = c != EOF;

	printf("is_not_eof: %d\n", is_not_eof);

}

