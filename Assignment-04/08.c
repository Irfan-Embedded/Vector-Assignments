/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int i;

	for(i = 0; i<=5; printf("\n%d",i));

	i++;
}


/*
 * Pridiction :
 * ----------
 *
 *  output:
 *  	 i = 0 will be printed infinitely, since loop never ends due to ';'
 *
 */
