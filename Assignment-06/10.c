/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int i;
	printf("All the best\n");

	for(i=0; i<5; i++)
	{
		main();
	}
}


/*
 * Pridiction :
 * ----------
 *  	output:
 *  		The main function will go under infinite loop
 *
 */
