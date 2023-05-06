/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str1 = "abcd";
	char str2[] = "abcd";
	char str3[10] = "abcd";

	char *str;

	printf("before DA str : %ld\n",sizeof(str));

	str = (char *)malloc(200 * sizeof(char));
	
	printf("After DA str : %ld\n",sizeof(str));

	str = "jdnkfjdhnfkuhfiourjhofjroijf";

	printf("After Data str : %ld\n",sizeof(str));

	printf("%s\n",str);

	printf("str1 : %ld\nstr2 : %ld\nabcd : %ld\nstr3  : %ld\n",sizeof(str1), sizeof(str2), sizeof("abcd"), sizeof(str3));
}


/*
 * Pridiction :
 * ----------
 *	output : 4 4 4 10
 */
