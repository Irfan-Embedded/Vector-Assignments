/*
 *
 * 17. write a program to print the sum of the digits.
 *
 */

#include <stdio.h>

int main()
{
	int num, sum = 0;

	printf("Enter any number to print sum of the Digits : ");
	scanf("%d",&num);

	while(num > 0)
	{
		sum += num%10;

		num = num/10;
	}
	printf("sum of digits is : %d\n",sum);
}


/*
 * Pridiction :
 * ----------
 *
 */
