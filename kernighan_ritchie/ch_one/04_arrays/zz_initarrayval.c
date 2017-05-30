#include<stdio.h>

/*
Apparently arrays just hold a bunch of junk from your memory
as soon as you initialize them. You actually have to set each
objects value within the array to zero if you want a completely
blank array object. I'm here to test that right now to see how
that actually looks / works.
*/

int main() {

	int i, myarray[5];
	
	// interesting to note for for loops, it can be "++i" or "i++" and it
	// won't matter in that context
	for (i = 0; i < 5; ++i) {
		printf("the value of i is: %d\n", i);
		printf("the value of this item in myarray is: %d\n", myarray[i]);
	}
	

}
