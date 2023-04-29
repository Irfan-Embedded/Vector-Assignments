/*
 *
 * 03. Find the grade of the makrs input through the user. (use nested if and else if ladder)
 *
 */

#include <stdio.h>

int main()
{
	float mrk_obt, total;

	printf("Enter the sum of marks obtained by the student : ");
	scanf("%f",&mrk_obt);

	printf("Enter the total marks of all the subjects : ");
	scanf("%f",&total);

	float temp = total / 100;

	if (mrk_obt > total)
		printf("Please enter valid marks\n\n");
	else if (mrk_obt >= (temp * 70))
		printf("You have scored 'A+' grade\n\n");
	else if (mrk_obt >= (temp * 60))
		printf("You have scored 'A' grade\n\n");
	else if (mrk_obt >= (temp * 50))
		printf("You have scored 'B' grade\n\n");
	else if (mrk_obt >= (temp * 40))
		printf("You have scored 'C' grade\n\n");
	else
		printf("Sorry you have Failed the exam\n\n");
}


/*
 * Pridiction :
 * ----------
 *
 */
