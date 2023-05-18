/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	void slogan();
	int c = 5;
	c = slogan();
	printf("c: %d\n",c);
}

void slogan()
{
	printf("Only he men use C\n");
}


/*
 * Pridiction :
 * ----------
 *
 *  	syntax error while compilation saying function slogan has void return type
 *
 */
