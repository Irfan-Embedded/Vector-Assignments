/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int x = 2, y = 6, z = 6;
	
	x = y == z;
	printf("x : %d\n",x);
}


/*
 * Pridiction :
 * ----------
 *
 *  output : 
 *  	x : 1
 *  	as we know '==' is a relational operater checks if the y is equal to z or not and 
 *  	returns 1 if true and 0 if false accordingly.
 *
 */
