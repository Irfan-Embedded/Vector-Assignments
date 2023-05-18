/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, choice;
	while(1)
	{
		printf("******************** CALCULATER MENU **********************\n");
		printf("\t1. ADDITION\n\t2. SUBSTRACTION\n\t3. MUTIPLICATION\n\t4. DIVISION\n\t5. Exit\n\n");
		printf("Enter you choice : ");
		scanf("%d",&choice);

		if(choice == 5)
			goto Lable;

		printf("\nEnter 'A' value : ");
		scanf("%d",&a);

		printf("\nEnter 'B' value : ");
                scanf("%d",&b);

		switch(choice)
		{
			case 1:
				add(a, b);
				break;
			case 2:
				sub(a, b);
				break;
			case 3:
				mul(a, b);
				break;
			case 4:
				divi(a, b);
				break;
Lable:			case 5:
				exit(0);
			default:
				printf("You have entered wrong choice\n*** Please try again\n\n");
		}
	}
}

add(int a, int b)
{
	printf("\nAddition : %d\n\n",a+b);
}

sub(int a, int b)
{
	printf("\nSubstraction : %d\n\n",a-b);
}

mul(int a, int b)
{
	printf("\nMultiplication : %d\n\n",a*b);
}

divi(int a, int b)
{
	printf("\nDivision : %d\n\n",a/b);
}

/*
 * Pridiction :
 * ----------
 *
 */
