/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

void change(int *j, int h);

int main()
{
	int a[] = {2, 4, 6, 8, 10};
	int i;
	change(a, 5);

	for(i=0; i<=4; i++)
	{
		printf("a[%d] : %d\n",i, a[i]);
	}
}

change(int *b, int n)
{
	int i;
	for(i=0; i<n; i++)
		*(b+i) = *(b+i)+5;
}

/*
 * Pridiction :
 * ----------
 *
 */
