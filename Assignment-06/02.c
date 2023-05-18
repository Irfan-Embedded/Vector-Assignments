/*
 *
 * 	Pridict the output of the following code.
 *
 */

#include <stdio.h>

void func(void);

int main()
{
	int i = 1;
	while(i <= 5)
	{
		printf("%d\n",++i);
		if(i>2)
			goto here;
	}
here:
	func();
}

void func() {
	printf("all the best\n");
}


/*
 * Pridiction :
 * ----------
 *
 */
