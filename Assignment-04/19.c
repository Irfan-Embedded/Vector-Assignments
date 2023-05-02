/*
 *
 * 19. write a program to find the status of a perticular bit.
 * 		(weather it is set or clear)
 *
 */

#include <stdio.h>

int main()
{
	int num,pos;

	printf("Enter any number to print it in binary form : ");
	scanf("%d",&num);

	for(int i = 31; i>=0; i--)
	{
		if(((num >> i) & 1) == 1)
			printf(" 1");
		else
			printf(" 0");
	}

	printf("\n\n\n");

	printf("Enter the position you want to check\nthe bit is set / clear : ");
	scanf("%d",&pos);

	if(((num >> pos) & 1) == 1)
		printf("Bit is Set\n\n");
	else
		printf("Bit is Clear\n\n");
}


/*
 * Pridiction :
 * ----------
 *
 */
