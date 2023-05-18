/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int i = 45, c;
	c = check(i);
	printf("c : %d\n",c);
}

check(int ch)
{
	if(ch>=45)
		return(100);
	else
		return(20*10);
}


/*
 * Pridiction :
 * ----------
 *  output
 *  	c : 100
 *
 */
