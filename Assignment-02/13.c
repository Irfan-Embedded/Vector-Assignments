/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int x = 20, y = 35;

	x = y++ + x++;
	printf("x : %d\ty : %d\n",x, y);

	y = ++y + ++x;
	printf("x : %d\ty : %d\n",x, y);
}


/*
 * Pridiction :
 * ----------
 *
 *  	x = 35 + 20 ==> 55
 *  	y = 37 + 56 ==> 93
 *
 *  	x : 55	y : 36
 *
 *  	x : 56	y : 93
 *
 */
