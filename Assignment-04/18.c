/*
 *
 * 18. write a program to revers the digits of a number.
 *
 */

#include <stdio.h>

int main()
{
	int num, rev = 0;

	printf("Enter any number to revers the digits : ");
	scanf("%d",&num);

	while(num > 0)
	{
		int tmp;

		rev *= 10;
		rev += num % 10;

		num = num / 10;

	}

	printf("Reversed digits : %d\n",rev);
}


/*
 * Pridiction :
 * ----------
 *
 */
