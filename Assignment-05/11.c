/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char s[20] = "hello world";
	s[5] = '\0';

	printf("%ld\n",strlen(s));
}


/*
 * Pridiction :
 * ----------
 *
 *  output : 5
 *
 */
