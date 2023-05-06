/*
 *
 * 08. write a program to eliminate consecutive blank spaces from a string.
 *
 */

#include<stdio.h>
#include <stdlib.h>

int main()
{
	char *str;

	str = (char *)malloc(200*sizeof(char));

	int i, j;

	printf("Enter the string : ");
	fgets(str, 200, stdin);

	for(i=0, j=0; *(str+j) != '\0'; i++, j++)
	{
		while(*(str+j) == ' ' && *(str+j+1) == ' ')
			j++;
		*(str+i) = *(str+j);
	}

	*(str+i) = '\0';

	printf("\n %s \n",str);

}


/*
 * Pridiction :
 * ----------
 *
 */
