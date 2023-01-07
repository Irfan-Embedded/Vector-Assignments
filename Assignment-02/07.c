/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int x, y;

	scanf("%d",&x);

	y = (x < 0)? -x : x;

	printf("absolute value of x : %d\ty : %d\n",x,y);
}


/*
 * Pridiction :
 * ----------
 *  Here (x < 0) is a conditional operator and alway returns the value according to the condition (true : false)
 *  If the condition is true then it sends the true value, and if the condition is false then it sends the false value
 *
 *  Here let x = 1
 *  		y = (1 < 0)? -1 : 1
 *
 *  		Here condition is false so executes and returns the right expression of the colon(:)
 *
 */
