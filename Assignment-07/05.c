/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int a[5] = {5, 1, 15, 20, 25};

	int i, j, k = 1, m;

	i = ++a[k];
	j = a[i]++;
	m = a[i++];

	printf("i : %d\tj : %d\tm : %d\n",i, j, m);
}


/*
 * Pridiction :
 * ----------
 *
 */
