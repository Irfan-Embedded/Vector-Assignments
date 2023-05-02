/*
 *
 * 05. Write a program to print ASCII equivalents in tabular format.
 *
 */

#include <stdio.h>

int main()
{
	int i = 0;

	printf("\t************** ASCII TABLE ***************\n");
	printf("|\t  Dec No  \t|    ASCII Value  \t|\n");
	printf(" ----------------------------------------\n");
	while(i <= 150){
		printf("|\t  %d  \t\t|\t  %c  \t|\n",i,i);
		printf(" ---------------------------------------\n");
		i++;
	}
}


/*
 * Pridiction :
 * ----------
 *
 */
