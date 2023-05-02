/*
 *
 * 19. write a program to reverse the bits of a number
 *
 */

#include <stdio.h>

int main()
{
	int num, limit = 1, count = 0;

	printf("Enter any number : ");
	scanf("%d",&num);

	printf("Binary form of given number is : \n");

	for(int i=31; i>=0; i--)
	{
		if((num >> i & 1) == 1)
			printf(" 1");
		else
			printf(" 0");
	}
	printf("\n\n");

	while(num >= limit ) {
		limit = limit*2;
		count++;
	}
	printf("limit : %d\n",limit);

	for(int i = (count - 1); i >= 0; i--)
	{
		if((num>>i & 1) == 1)
			num = (num & (~(1 << i)));
		else
			num = (num | (1 << i));
	}

	for(int i=31; i>=0; i--)
        {
                if((num >> i & 1) == 1)
                        printf(" 1");
                else
                        printf(" 0");
        }
        printf("\n\n");
}


/*
 * Pridiction :
 * ----------
 *
 */
