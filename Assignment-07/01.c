/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	char s[] = {'a','b','c','\n','c','\0'};

	char *p, *str, *str1;

	p = &s[3];
	str = p;
	str1 = s;

	printf("*p : %d\n %c\n",*p,*p);
	printf("*str1 : %d\n%c\n",*str1,*str1);

	printf("%d", ++*p + ++*str1-32);
}


/*
 * Pridiction :
 * ----------
 *
 */
