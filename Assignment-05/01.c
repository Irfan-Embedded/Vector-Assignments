/*
 *
 * 01. What would be the output of following program segment.
 *
 */

# include <stdio.h>

int main()
{
	int sub[50];

//	int i;

	for(i=0; i<=48; i++);
	{
		sub[i] = i;
		printf("%d\n",sub[i]);
	}
}


/*
 * Pridiction :
 * ----------
 *
 *  output : syntax error i is not declared.
 *
 *  if declared : 49
 *
 */
