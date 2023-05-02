/*
 *
 * 06. write a program to display these patterns.
 *
 * 	1.			2.			3.
 * 		   1		     * * *			5 5 5 5 5
 * 		  2 2		      * *			4 4 4 4
 * 		 3 3 3		       *			3 3 3
 * 		4 4 4 4		      * *			2 2
 * 	       5 5 5 5 5   	     * * *			1
 *
 */

#include <stdio.h>

int main()
{
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 5; j >= 1; j--)
		{
			if(j > i)
				printf(" ");
			else
				printf(" %d",i);
		}
		printf("\n");
	}

	printf("\n\n");

	for(int i = 1; i <= 3; i++)
        {
		for(int j = 1; j <= 3; j++)
		{
			if(j < i)
				printf(" ");
			else
				printf(" *");
		}
		printf("\n");
        }
	for(int i = 2; i <= 3; i++)
        {
                for(int j = 3; j >= 1; j--)
                {
                        if(j > i)
                                printf(" ");
                        else
                                printf(" *");
                }
                printf("\n");
        }

	printf("\n\n");

	for (int i = 5; i >= 1; i--)
	{
		for(int j = 1; j <= i; j++)
			printf(" %d",i);
		printf("\n");
	}
}


/*
 * Pridiction :
 * ----------
 *
 */
