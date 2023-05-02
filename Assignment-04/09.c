/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int i = 1, j = 1;

	for(;;)
	{
		if(i>5)
			break;
		else
			j += i;
		printf("%d\n",j);
		i += j;
	}
}


/*
 * Pridiction :
 * ----------
 *
 *  output:
 *  	2
 *  	5
 *
 */
