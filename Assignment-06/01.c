/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int zap(int n)
{
	if(n<=1) return(1);
	else return(zap(n-3)+zap(n-1));
}

int main()
{
	int i;
	
	i = zap(6);

	printf("%d\n",i);
}


/*
 * Pridiction :
 * ----------
 *
 *  	output: 9
 *
 */
