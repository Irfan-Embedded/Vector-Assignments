/*
 *
 * 02. Write a c program to find out if the given input number is +ve or -ve,
 * 		
 * 	1. Implimenting individually conditional execution operator.
 * 	2. Decision controle statement.
 * 	3. Bitwise operation.
 *
 */

# include <stdio.h>

int main()
{
	int num, choice;
	
	printf("Program to find out if the given input number is +ve or -ve\n\n");
	printf("using any of the below method\n\n");

	printf("*************************** MENU ***************************\n\n");
	printf("\t1. Conditional operator ( (... )?'... ':'... ' )\n");   
	printf("\t2. Decision controle statement (if..else)\n");
	printf("\t3. Bitwise Operator (num << pos or num >> pos)\n\n");

	printf("Enter your choice : ");
	scanf("%d",&choice);

	printf("--------------------------------------------------------------------\n\n");

	printf("Enter any number : ");
	if (scanf("%d",&num) == 1) {
		
	}
	else
	{
		printf("Please enter the correct integer value\n\n");
		return 0;
	}
	switch (choice)
	{
		case 1:
			(num >= 0)?printf("Given number is Positive\n"):printf("Given number is Negetive\n\n");
			break;
		case 2:
			if (num >= 0)
				printf("Given number is Positive\n\n");
			else
				printf("Given number is Negetive\n\n");
			break;
		case 3:
			if ((num >> 31) && 1)
                                printf("Given number is Negetive\n\n");
                        else
				printf("Given number is Positive\n\n");
                        break;
	}
}


/*
 * Pridiction :
 * ----------
 *
 */
