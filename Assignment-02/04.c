/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int x = 7, y = 10, z;

	z = x || y;
	printf("z : %d\n",z);

	z = x | y;
	printf("z : %d\n",z);
}


/*
 * Pridiction :
 * ----------
 *  In the first expression '||' is a logical AND operater checks if the x and y values are non-zero (true) or zero (false)
 *
 *  In the second expression '|' is a bitwise operater which is used to compare the bits of x and y values.
 *
 *  	x : 0 0 0 0 0 1 1 1
 *  	y : 0 0 0 0 1 0 1 0
 *  	 |  ---------------
 *  	z : 0 0 0 0 1 1 1 1  ==> z = 15
 *
 */
