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

	i = ++a[1];	// i : 2	a[1] : 2
	j = a[1]++;	// j : 2	a[1] : 3
	m = a[i++];	// m : 15	i : 3

	printf("i : %d\tj : %d\tm : %d\n",i,  j, m);
}


/*
 * Pridiction :
 * ----------
 *  output :
 *  	i : 3	j :  2	m : 15
 *
 */
