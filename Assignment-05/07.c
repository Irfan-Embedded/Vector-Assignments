/*
 *
 * 07. Input three strings as "vector" "training" and "Instituate". or any input strings.
 *     Write a program to join the tree strings and store in one array having one space separing two strings.
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char str[30], str1[10], str2[10], str3[10];

	int i;

	printf("Enter str1 : ");
	scanf("%s",str1);

	printf("Enter str2 : ");
        scanf("%s",str2);

	printf("Enter str3 : ");
        scanf("%s",str3);

	strcpy(str, str1);
	
	strcat(str, " ");
	strcat(str, str2);

	strcat(str, " ");
        strcat(str, str3);

	printf("joined array : %s\n",str);
}

/*
 * Pridiction :
 * ----------
 *
 */
