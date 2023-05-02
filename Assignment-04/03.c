/*
 *
 * 03. Write a program to find the factorial value of any number enterd through the key board.
 *
 */

#include <stdio.h>

int main()
{
	int num,fact = 1;
	int i = 1;

	printf("Enter any num : ");
	scanf("%d",&num);

	while(i <= num)
	{
		fact *= i;
		i++;
	}

	printf("Factorial value of a %d is : %d\n\n",num,fact);
}


/*
 * Pridiction :
 * ----------
 *
 */
