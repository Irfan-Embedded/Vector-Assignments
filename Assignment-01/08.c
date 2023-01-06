
/*
 * 08. Write the following program to evaluate the following expressions.
 *
 * 	a)	 3( x + y )        x - y		b)	     2x - y
 * 		------------  -  ---------			----------------
 * 		  9x + 2y         2x + 3y			(3x+y)(x-2)(y+3)
 *
 *
 * 	c)	    (3x + 4y)(2x - 3)
 * 		--------------------------
 * 		((x-y) / (x+y)) + (2x + 3)
 *
 */

#include <stdio.h>

int main()
{
	float x, y;
	char choice;

	printf("\nEvaluate any of the following expression by substituting x and y values in it\n");
	printf("\n*************** Expressions ***************\n\n");
	printf("a)\t 3( x + y )        x - y  \n\t------------  -  ---------\n\t  9x + 2y         2x + 3y \n\n\n");
	printf("b)\t     2x - y\n\t----------------\n\t(3x+y)(x-2)(y+3)\n\n\n");
	printf("c)\t    (3x + 4y)(2x - 3)\n\t--------------------------\n\t((x-y) / (x+y)) + (2x + 3)\n\n\n");

	printf("\n---------------------------------------------------------------\n\n");

	printf("Enter your choice : ");
	scanf("%c",&choice);

	printf("Enter the value of x : ");
	scanf("%f",&x);
	printf("Enter the value of y : ");
	scanf("%f",&y);

	switch(choice)
	{
		case 'a':
			printf("Solution for the given choice is : %f\n",(( ((3)*(x+y)) / ((9*x)+(2*y)) ) - ( (x-y)/((2*x)+(3*y)) )));
			break;
		case 'b':
			printf("Solution for the given choice is : %f\n",( ((2*x)-y) / ( ((3*x)+y)*(x-2)*(y+3) ) ));
			break;
		case 'c':
			printf("Solution for the given choice is : %f\n", ((((3*x)+(4*y))*((2*x)-3)) / (((x-y)/(x+y))+((2*x)+3))) );
			break;
		default:
			printf("Error : Entered incorrect choice\n");
	}
}


/*
 * Pridiction :
 * ----------
 *
 */
