/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int arr[] = {0, 1, 2, 3, 4};

	int *ptr;

	ptr = arr+4;
	printf("%u\n",ptr);
	printf("%u\n",arr);
	printf("%u\n",ptr-arr);
	for(ptr = arr+4;ptr>=arr; ptr--)
		printf("%d",arr[ptr-arr]);
}


/*
 * Pridiction :
 * ----------
 *
 */
