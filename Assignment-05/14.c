/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10}, i, x = 10, tmp;

	for(i=0; i<x; i++)
	{
		tmp = a[i];
		a[i] = a[x-i-1];
		a[x-i-1] = tmp;
	}

	for(i=0;i<10; i++)
		printf("%3d",a[i]);
	printf("\n\n");
}


/*
 * Pridiction :
 * ----------
 *
 */
