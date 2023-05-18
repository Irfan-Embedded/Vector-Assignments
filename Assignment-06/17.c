/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int i = 5, j = 2;

	junk(&i, &j);
	printf("i : %d\tj : %d\n",i, j);
}

junk(int *i, int *j)
{
	*i = *i * *i;
	*j = *j * *j;
}

/*
 * Pridiction :
 * ----------
 *
 */
