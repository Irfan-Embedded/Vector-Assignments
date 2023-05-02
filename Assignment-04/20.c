/*
 *
 * 20. wite a program to set or clear perticular bit of a number.
 *
 */

#include <stdio.h>

int main()
{
	int num, pos;

	printf("Enter any num : ");
	scanf("%d",&num);

	printf("Bainary form of a given  number is : \n");

	for (int i=31; i >= 0; i--)
	{
		if((num >> i & 1) == 1)
			printf(" 1");
		else
			printf(" 0");
	}

	printf("\n");

	printf("\n Enter the position you want to change the bit : ");
	scanf("%d",&pos);

	if((num >> pos & 1) == 1)
		num = ((~(1<<pos)) & num);
	else
		num = (num | (1 << pos));

	printf("num after changing the bit : %d\n",num);
	printf("And its binary is : \n");
	
	for (int i=31; i >= 0; i--)
        {
                if((num >> i & 1) == 1)
                        printf(" 1");
                else
                        printf(" 0");
        }
	printf("\n");
}


/*
 * Pridiction :
 * ----------
 *
 */
