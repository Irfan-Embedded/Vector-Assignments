/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int r;

	r = f1(11,12);
	printf("r : %d\n",r);
}

int f1(int a, int b)
{
	return(f2(20));
}

int f2(int a)
{
	return(a*a);
}

/*
 * Pridiction :
 * ----------
 *
 */
