/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

int sum(int);

int main()
{
	int a,b;
	a = sum(123);
	b = sum(123);

	printf("a : %d\tb : %d\n",a,b);
}

int sum(int n) {
	static int s = 0;
	printf("s : %d\n",s);
	int d;

	if(n!=0)
	{
		d = n % 10;
		n = (n-d)/10;
		s = s + d;

		sum(n);
	}
	else
		return (s);
}


/*
 * Pridiction :
 * ----------
 *
 */
