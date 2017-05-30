#include<stdio.h>

/* 

This is exercise 1-11 in K&R C book page 21, chapter one:

1wpl stands for "one word per line".. that is the
challenge here. To write a program that prints its input
one word per line
*/

//#define IN 1  //inside a word
//#define OUT 0 //outside a word


int main() {
	
	int c, my_nl;
	my_nl = '\n';

	while ((c = getchar()) != EOF) {
		
		if(c == ' ' || c == '\n' || c == '\t') {
			putchar(my_nl);
		}
		else {
			putchar(c);
		}
	}
}
