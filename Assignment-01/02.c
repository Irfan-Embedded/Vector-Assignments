/*
 * 02. Rajesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
 *     Write a program to calculate his gross salary.
 *
 */

#include <stdio.h>

int main()
{
        float total_sal, dearness, rent, gross;

        printf("Enter the Basic Salary : ");
        scanf("%f", &total_sal);

        dearness = (( total_sal / 10 ) * 4) ;

        rent = (( total_sal / 10 ) * 2) ;

        gross = ( total_sal - ( dearness + rent )) ;

        printf("Gross salary : %.2f\n", gross);
}


/*
 * Pridiction :
 * ----------
 *
 */
