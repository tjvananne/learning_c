#include<stdio.h>

#define LENGTH 10;
#define WIDTH 5;
#define NEWLINE '\n';

// this is currently failing and I don't know why.. this is the answer?
// https://stackoverflow.com/questions/5455866/error-invalid-type-argument-of-unary-have-int

int main()
{

	int area;

	area = LENGTH * WIDTH;
	printf("value of area : %d", area);
	printf("%c", NEWLINE);

	return 0;

}
