/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int x = 3, y, z;

	y = x = 10;

	z = x < 10;

	printf("x : %d\ny : %d\nz : %d\n",x, y, z);
}


/*
 * Pridiction :
 * ----------
 *  In the first expression "=" is a assignment operater which assigns the value 10 to x and value of x is assigned to y
 *  	i,e y = 10
 *
 *  In the second expression "<" is a relational operator which gives 1(true) or 0(false) when relating the two values.
 *  	i,e z = 10 < 10; (false) ==> z = 0
 *
 */
