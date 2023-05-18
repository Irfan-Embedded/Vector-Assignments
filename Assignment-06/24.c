/*
 * 24. write a program to print the febinacci series upto the given sequence using recursive function.
 *
 */

#include <stdio.h>

void febi(int num)
{
	static int i = 0;
       	static int j = 1;

	static int t = 0;

	if(t <= num)
	{
		printf(" %4d ",t);
		t = i + j;
		i = j;
		j = t;
		febi(num);
	}
}

int main()
{
	int num;

	printf("Enter the limit to print febinacci series : ");
	scanf("%d",&num);

	febi(num);
	printf("\n\n");
}


/*
 * Pridiction :
 * ----------
 *
 */
