/*
 *
 * 	Pridict the output of the following code.
 *
 */
#include <stdio.h>
int main()
{
	int a;
	a = --2;
	printf("a = %d\n",a);
}


/*
 * Pridiction :
 * ----------
 *  incriment or decriment operater cannot be used along with values or constants.
 *
 *  Output :
 *  	01.c: In function ‘main’:
 *	01.c:10:6: error: lvalue required as decrement operand
 * 	a = --2;
 *     	    ^~
 *
 */
