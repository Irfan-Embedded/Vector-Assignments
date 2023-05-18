/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int i = 45, c;
	c = multiply(i*1000);
	printf("%d\n",c);
}

check(int ch)
{
	if(ch >= 40000)
		return(ch/10);
	else
		return(10);
}


/*
 * Pridiction :
 * ----------
 *  	Compilation error saying multiply is undifined
 *
 */
