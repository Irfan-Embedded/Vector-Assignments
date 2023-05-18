/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int main()
{
	char str[]="geneius";

	print(str);

	printf("\n");
}

print(char *s)
{
	if(*s)
		print(++s);
	printf("%c",*s);

}

/*
 * Pridiction :
 * ----------
 *
 *  output
 *  	suiene
 *
 */
