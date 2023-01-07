/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	printf("%ld\n", sizeof("42"));
	printf("(sizeof('4')) : %ld\n", sizeof('4'));
	printf("(sizeof(4)) : %ld\n", sizeof(4));
}


/*
 * Pridiction :
 * ----------
 * 	The sizeof function returns the size of the given expression.
 *
 *	sizeof("42") becomes sizeof string. Here the size of string is 2 byte + 1 null byte. i,e total = 3
 *
 *	sizeof('4') becomes sizeof(52). The size of int is 4 bytes.
 *	
 *	sizeof(4). The size of constant int is 4 bytes.
 *
 *	Hence the output of the program is 3, 4, 4
 *
 */
