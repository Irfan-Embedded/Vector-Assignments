/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int i = 0;

	do {
		printf("i = %d\n",i);
	}while(i++ < 10);

	printf("out side i = %d\n",i);
}


/*
 * Pridiction :
 * ----------
 *  	output :
 *  		i = 0
 *  		i = 1
 *  		i = 2
 *  		i = 3
 *		.
 *		.
 *		i = 10
 *
 *		out side i = 11
 */
