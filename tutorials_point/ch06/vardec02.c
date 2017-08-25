#include<<stdio.h>

/* This is failing, not sure what they were getting at here... */

int func();

int main() 
{
	// function call
	int i = func();
}

// function definition
int func()
{
	return 0;
}
