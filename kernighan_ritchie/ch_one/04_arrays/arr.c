#include<stdio.h>

/* counts digits, white space, and others */

int main() {
	
	int c, i, nwhite, nother; //declare ints
	int ndigit[10];           //declare array

	// initialize these to zero
	nwhite = nother = 0;

	// I think this is to clear out any junk that might be
	// in the array from its creation...
	for (i = 0; i < 10; ++i) {
		ndigit[i] = 0;
	}


	/*
	c-'0' is so clever here below. So '0' is equal to the integer 39 just
	because that is the way the encoding works. So if the value of c is
	between '0' and '9', and then you subtract '0' (39) from c, you'll end
	up with the value of the index that you want to increment in the array...

	That is amazing.

	Also, one thing to note is that single quotes appear to work better
	whenever dealing with these characters

	https://stackoverflow.com/questions/3683602/single-quotes-vs-double-quotes-in-c-or-c

	Ok, that is good to know.. single quotes are for characters and double quotes 
	are for string literals. Thanks stack overflow! lol

	*/

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')  //these comparisons work for character values still
			++ndigit[c-'0'];       // this is so clever
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}

	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
	
}
