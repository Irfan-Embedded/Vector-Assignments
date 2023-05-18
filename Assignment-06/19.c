/*
 * 19. write a program to print the factorial of an integer input using recursive function.
 *
 */

#include <stdio.h>

int main()
{
	int num;

	printf("Enter any number to find factorial : ");
	scanf("%d",&num);

	factorial(num);
}

factorial(int num)
{
	static int fact = 1;

	if(num>0)
	{
		fact *= num--;
		factorial(num);
	}
	else
		printf("fantorial of given number is : %d\n",fact);
}


/*
 * Pridiction :
 * ----------
 *
 */
