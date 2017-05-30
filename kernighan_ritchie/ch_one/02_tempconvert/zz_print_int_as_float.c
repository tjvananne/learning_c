#include<stdio.h>

int main() {
	
	int x;
	x = 8;

	//printf(x);  // this errors out
	printf("as integer %d \n", x);
	//printf("as float %f \n", x); this actually expects a float
	
	//make it into a float for next part?
	float y;
	y = 9.0;
	printf("as float at least 6 wide and 2 after decimal point %6.2f \n", y);

}
