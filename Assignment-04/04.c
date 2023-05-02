/*
 *
 * 04. Write a program to print all the prime numbers from 1 to 300.
 *
 */

#include <stdio.h>

int main()
{
	int i = 1,j,count = 0;
	int num;

	while(i <= 300) {
		count = 0;
		j = 1;
		while (j <= i) {
			if((i % j) == 0)
				count++;
			j++;
		}
		if(count == 2)
			printf("%d is a Prime number\n",i);
		i++;
	}
}


/*
 * Pridiction :
 * ----------
 *
 */
