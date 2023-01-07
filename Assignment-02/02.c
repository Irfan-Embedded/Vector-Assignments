/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>
main()
{
	int i = 2, j = 3, k, l;

	float a, b;

	k = i/j*j;
	l = j/i*i;
	a = i/j*j;
	b = j/i*l;

	printf("k : %d\tl : %d\t\na : %f\tb : %f\n",k, l, a, b);
}


/*
 * Pridiction :
 * ----------
 *  k : 0	l : 2
 *  a : 0.000000	b: 2.000000
 *
 */
