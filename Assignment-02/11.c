/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int a = 3, b = 4, c = 1, z;

	z = (a>b ? (a>c ? a : c) : (b>c ? b : c));

	printf("z : %d\n",z);

	int x;

	x = a>b?a<c?a:c:b>c?b:c;

	printf("x : %d\n",x);
}


/*
 * Pridiction :
 * ----------
 * 	Here output of z = 4 and y = 4
 *
 *
 */
