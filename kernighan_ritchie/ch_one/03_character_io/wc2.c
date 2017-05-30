#include<stdio.h>

/* I really like the idea of these "state" variables. This
is why I like lower level languages so much. It forces you
to actually think, but once you find the solution, it seems
so incredibly obvious... Python makes me dumb
*/

#define IN 1   /* character inside a word */
#define OUT 0  /* character outside a word */


int main() {

	// declare integer variables
	int c, nl, nw, nc, state;

	// start "outside" of any words
	state = OUT;

	// initialize all of these to zero
	nl = nw = nc = 0;  

	// now loop
	while ((c = getchar()) != EOF) {
		// character incrementer
		++nc;
		if (c == '\n')
			// new line incrementer
			++nl;

		// if the current character we're looking at
		// is a blank, newline, or tab character, then
		// set the state equal to "OUT"
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		// otherwise, if c isn't one of those character 
		// types AND state is already equal to "OUT" value,
		// then that means we're in a new word, so increment
		// the word counter!
		else if (state == OUT) {
			state = IN;
			++nw;
		}

	}
	printf("%d %d %d\n", nl, nw, nc);
}
