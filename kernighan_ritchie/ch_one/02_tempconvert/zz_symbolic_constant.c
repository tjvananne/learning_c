#include<stdio.h>

/* the point of this tiny script is to show how symbolic constants are defined. Basically, use these whenever you need to declare a value that you know will not need to be changed throughout the entire runtime / compilation of your program */

#define 	START 0
#define 	STOP 300
#define		STEP 20

int main() {
	
	int thisone;
	thisone = START;
	
	// cool, so the looping variable can already have its initial value
	// assigned at the time of starting the loop
	for (thisone; thisone <= STOP; thisone = thisone + STEP) {
		printf("thisone is %d\n", thisone);
	}

}
