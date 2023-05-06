/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int a[20];
	for(int i=0; i<20; i++)
	{
		a[i] = i;
	}
	for(int i=0; i<20; i++)
        {
                a[i] = a[20-i];
        }
	for(int i =0; i<20; i++)
		printf("%3d",a[i]);
	printf("\n\n");
}


/*
 * Pridiction :
 * ----------
 *
 */
