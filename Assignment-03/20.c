/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int a = 1;

	switch (a)
	{
		int b = 20;
		case 1:
			printf("b = %d\n",b);
			break;
		default:
			printf("b = %d\n",b);
			break;
	}
}


/*
 * Pridiction :
 * ----------
 *
 * 	Any Diclaration inside the switch statement will not be executed.
 * 	if we declare any variable inside the case block will through an Error.
 *
 * 	output b = garbage value
 *  
 */
