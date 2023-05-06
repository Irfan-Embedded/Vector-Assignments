/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
	int i, n;
	char *x = "vector";
	n = strlen(x);
	for(i=0; i<n; i++)
	{
		printf("%s\n",x);
		x++;
	}
}


/*
 * Pridiction :
 * ----------
 *
 *  output:
 *	vector
 *	ector
 *	ctor
 *	tor
 *	or
 *	r
 */
