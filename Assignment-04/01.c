/*
 *
 * 01. Write a program to find out weather the input number from the user is 'even' or 'odd'
 *
 */

#include <stdio.h>

int main()
{
	int num;

	printf("Program to find Even or Odd number\n\n");
	printf("Enter any num : ");
	if(scanf("%d",&num) == 1) {
		if(num%2 == 0)
			printf("\nGiven number is Even number\n\n");
		else
			printf("\nGiven number is Odd number\n\n");
	}
	else
		printf("ERROR : Incorect Input Please try again\n\n");
}


/*
 * Pridiction :
 * ----------
 *
 */
