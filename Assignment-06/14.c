/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include<stdio.h>

int main()
{
	float area;
	int radius = 1;
	area = circle(radius);
	printf("area : %f\n",area);
}

circle(int r)
{
	float a;
	a = 3.14 * r * r;
	return a;
}

/*
 * Pridiction :
 * ----------
 *  	output
 *  		area : 3.000000
 *  		(scence the function circle return type will be int by default so it returns only 3 as in return)
 *
 */
