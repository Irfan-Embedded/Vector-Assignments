/*
 * 22. write a program to reverse the string using recursive function.
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * str_rev(char *str)
{
	printf("in function %s\n",str);
	int t;
	static int j = 0;
	static int n = 0;

	if(j<=n/2)
	{
		n = (strlen(str)-j-1);
		printf("str[%d] : %c\tstr[%d] : %c\n",j,str[j],n,str[n]);
		t = str[n];
		str[n] = str[j];
		str[j] = t;
		j++;
	}
	else
		return str;
	str_rev(str);
}

int main()
{
	char *str;

	str = (char *)malloc(sizeof(char)*100);

	printf("Enter any string : ");
	scanf("%s",str);

	str_rev(str);

	printf("reverse str : %s\n\n",str);
}


/*
 * Pridiction :
 * ----------
 *
 */
