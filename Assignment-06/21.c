/*
 * 21. write a program to implement the followig
 * 	a. strcmp()	b. strcpy()	c. strcat()	d. strchr()	e. strrev()
 *
 */

#include <stdio.h>
#include <stdlib.h>

int str_cmp(char *str1, char *str2)
{
	int i;

	for(i=0; (str1[i] != '\0') || (str2[i] != '\0'); i++)
	{
		if((str1[i] == '\0') && (str2[i] != '\0'))
		{
			return -1;
		}
		else if(str1[i] == str2[i])
		{
			if((str1[i] == '\0') && (str2[i] == '\0'))
			{
				printf("str1[%d] : %c\tstr2[%d] : %c\n", i, str1[i], i, str2[i]);
				return 0;
			}
			else
				continue;
		}
		else if((str1[i] != '\0') && (str2[i] == '\0'))
		{
			return 1;
		}
		else
			return -1;
	}
}

char * str_cpy(char str1[], char str2[])
{
	int i;
	for(i=0; str2[i]; i++)
		str1[i] = str2[i];
	str1[i] = '\0';

	return str1;
}

char * str_cat(char str1[], char str2[])
{
        int i,j;
        for(i=0; str1[i]; i++);
	for(j=0; str2[j]; j++)
	{
                str1[i] = str2[j];
		i++;
	}
        str1[i] = '\0';

        return str1;
}

char * str_chr(char str[], char ch)
{
	int i;

	for(i=0; str[i]; i++)
	{
		if(str[i] == ch)
			return (str+i);
	}
	if(str[i] == '\0')
		return  '\0';
}

char * str_rev(char *str)
{
	int i,t,n;

	for(i=0; str[i]; i++);
	n = i-1;

	for(i=0; i<=(n/2); i++)
	{
		t = str[i];
		str[i] = str[n-i];
		str[n-i] = t;
	}

	return str;
}

int main()
{
	int choice, r;
	char *str1;
	char *str2;
	char ch;

	str1 = (char *)malloc(sizeof(char)*100);
	str2 = (char *)malloc(sizeof(char)*100);

	for(int i=0; i<100; i++){
		str1[i] = 0;
		str2[i] = 0;
	}

	while(1)
	{
		printf("************* STRING FUNCTIONS ****************\n\n");

		printf("\t1. strcmp()\n\t2. strcpy()\n\t3. strcat()\n\t4. strchr()\n\t5. strrev()\n\t6. Exit\n\n");

		printf("Enter your choice to perform : ");
		scanf("%d",&choice);

	switch(choice)
	{
			case 1:
				printf("Enter string1 : ");
				scanf("%s",str1);

				printf("Enter string2 : ");
                		scanf("%s",str2);

				r = str_cmp(str1, str2);
				printf("%d\n\n",r);
				break;
			case 2:
				printf("Enter the string to copy : ");
				scanf("%s",str2);
				str_cpy(str1, str2);
				printf("str1 : %s\n",str1);
				break;
			case 3:
				printf("Enter string1 : ");
				scanf("%s",str1);

				printf("Enter string2 : ");
                		scanf("%s",str2);

				str_cat(str1, str2);
				printf("strcat : %s\n\n",str1);
				break;
			case 4:
				printf("Enter the string : ");
				scanf("%s",str1);
				printf("Enter a charecter : ");
				scanf(" %c",&ch);
				str2 = str_chr(str1, ch);
				printf("str2 : %s\n\n",str2);
				break;
			case 5:
				printf("Enter the string : ");
				scanf("%s",str1);
				str_rev(str1);

				printf("reverse string : %s\n\n",str1);
				break;
			case 6:
				exit(0);
			default:
				printf("ERROR : You have entered wrong choice\n\n");
		}
	}
}


/*
 * Pridiction :
 * ----------
 *
 */
