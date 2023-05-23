/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	char *s[] = {"black", "white", "pink", "violet"};

	char **ptr[] = {s+3, s+2, s+1, s}, ***p;

	p = ptr;

	++p;

	printf("%s\n",**p+1);
}


/*
 * Pridiction :
 * ----------
 *
 */
