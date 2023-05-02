/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int x, y = 1, z;
	if(x = z = y)
		x = 3;
	printf("x = %d, y = %d, z = %d\n",x,y,z);

	while(y < 4)
		x += ++y;
	printf("x = %d, y = %d\n",x, y);
}


/*
 * Pridiction :
 * ----------
 *  	output:
 *  		x = 3, y = 1, z = 1
 *  		x = 12, y = 4
 *
 */
