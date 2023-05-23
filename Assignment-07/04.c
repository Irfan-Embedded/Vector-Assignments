/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int arr[] = {10,20,32,27,54,34};

	int *j, *k;

	j = &arr[4];
	k = (arr+4);

	if(j==k)
		printf("Same\n");
	else
		printf("not same\n");
}


/*
 * Pridiction :
 * ----------
 *
 */
