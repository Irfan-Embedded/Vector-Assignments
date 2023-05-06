/*
 *
 * 06. Twenty five numbers are entered  from the keyboard into an array.
 *     Write a program to find out how many of them are positive, How many are negetive,
 *     How many are even and how many are odd.
 *
 */

#include <stdio.h>
#include <stdlib.h>

void num_check(int *num)
{
	if(*num >=  0)
		if((*num % 2) ==  0)
			printf("Given number %d is positive and Even number\n",*num);
		else
			printf("Given number %d is positive and Odd number\n",*num);
	else
		if((*num % 2) ==  0)
                        printf("Given number %d is Negetive and Even number\n",*num);
                else
                        printf("Given number %d is Negetive and Odd number\n",*num);
}

int main()
{
	int arr[25];
	int i;

	for(i=0; i<25; i++)
	{
		arr[i] = rand() % 201 - 100;
		num_check(&arr[i]);
	}
}


/*
 * Pridiction :
 * ----------
 *
 */
