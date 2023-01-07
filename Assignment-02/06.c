/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	int k = 35;
	printf("(k == 35 ) : %d\t(k = 50) : %d\t(k > 40) : %d\n",k == 35, k = 50, k > 40);

	k = - -2;
	printf("k : %d\n",k);
}


/*
 * Pridiction :
 * ----------
 *  In the first expression, printing 3 conversion expressions, while assigning the value to the conversion expression
 *  printf always assigns to the right most conversion charecter to left conversion charecter.
 *
 *  here output :
 *  	0	50	0
 *
 *  In the second expression k = - -2 ==> k = -(-2) ==> k = 2
 *
 */
