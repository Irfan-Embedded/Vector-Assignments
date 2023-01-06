
/*
 * 4. The marks obtained by a sudent in five different subjects are input through the keyboard, find out the aaggregate marks that can be
 *    obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 50.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
        float sub1, sub2, sub3, sub4, sub5, aggr, per;

        printf("\n***** Enter the five subject marks *****\n\n");

        printf("Enter sub1 Marks : ");
        scanf("%f",&sub1);

        printf("Enter sub2 Marks : ");
        scanf("%f",&sub2);

        printf("Enter sub3 Marks : ");
        scanf("%f",&sub3);

        printf("Enter sub4 Marks : ");
        scanf("%f",&sub4);

        printf("Enter sub5 Marks : ");
        scanf("%f",&sub5);

        if( ( sub1 > 50) || ( sub2 > 50) || ( sub3 > 50) || ( sub4 > 50) || ( sub5 > 50) )
        {
                printf("\nMarks of each subject must be less than or equal to 50\n\n");
                printf("Please enter the valid marks next time\n");
                exit(0);
        }

        aggr = (sub1+sub2+sub3+sub4+sub5)/5;

        per = ((sub1+sub2+sub3+sub4+sub5)/250)*100;

	printf("\n---------------------------------------------------------------------\n");

	printf("Total marks obtained by the student out of 250 is : %.2f\n\n",(sub1+sub2+sub3+sub4+sub5));

        printf("Aggregate of the obtained marks by the student : %.2f\n\n", aggr);

        printf("Percentage of the obtained marks by the student : %.2f\n\n", per);
}


/*
 * Pridiction :
 * ----------
 *
 */
