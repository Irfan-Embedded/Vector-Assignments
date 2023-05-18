/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

//int f(int);

int main()
{
	int b;
	b = f(20);
	printf("b = %d\n",b);
}

int f(int a)
{
	a>20? return(10): return(20);
}

/*
 * Pridiction :
 * ----------
 *  	The code you provided has a syntax error. 
 *  	You cannot use the return statement directly within the ternary operator. 
 *  	Instead, you can assign the result of the ternary operator to a variable and then return that variable. 
 *
 */
