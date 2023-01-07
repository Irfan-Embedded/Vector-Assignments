/*
 *
 * 01. Write a program to check weather the input letter is a lower case or upper case.
 *
 */

#include <stdio.h>

int main()
{
	char ch;

	printf("\nProgram to check weather the input letter is a lower case or upper case\n\n");

	printf("Enter any letter : ");
	ch = getchar();

	if (ch >= 'A' && ch <='Z')
		printf("Given charecter is Upper case letter\n");
	else if (ch >= 'a' && ch <='z')
		printf("Given charecter is Lower case letter\n");
	else
		printf("Given charecter is not an alphabit\n");
}


/*
 * Pridiction :
 * ----------
 *
 */
