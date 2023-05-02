/*
 *
 * 02. Write a program to print out all the Armsrong numbers between 1 to 500.
 * 	
 * 	Armstrong number : a number that is equal to the sum of cubes of its digits.
 * 			   For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
 *		
 *		Ex : 153 = 1^3 + 5^3 + 3^3
 *
 */

#include <stdio.h>

int main()
{
	int i = 1, num;

	printf("Armstrong numbers\n");
	
	while(i <= 500)
	{
		int j = i, k = i;
		num = 0;
		while( j != 0 )
		{
			k = j % 10;
			num += k * k * k;
			j /= 10;
				
		}

		if(num == i)
			printf("%d\n", num);
		i++;
	}
}


/*
 * Pridiction :
 * ----------
 *
 */
