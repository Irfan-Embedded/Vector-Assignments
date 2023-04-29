/*
 *
 * 04. Write a program to find out a given number is a power of 2 or not.
 *
 */

#include <stdio.h>

int main()
{
	int num, i = 1, j = 1;

	printf("program to find out a given number is a power of 2 or not\n\n");
	printf("Enter any num : ");
	scanf("%d",&num);

	if ((num % 2) == 0) {
		while ((2 * i) < num)
		{
			if((2 * i) < num)
			{
				i *= 2;
				j++;
			}
		}
		if ((2 * i) == num)
			printf("Given number is a power of 2 i.e, 2^%d = %d\n",j,num);
		else
                	printf("Given number is not a power of 2\n");
	}
	else {
		printf("Given number is not a power of 2\n");
	}
}


/*
 * Pridiction :
 * ----------
 *
 */
