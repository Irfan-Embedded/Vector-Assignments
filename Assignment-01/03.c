
/*
 * 03. Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
 *
 *      * Using temporary variable.
 *      * Without using temporary Variable.
 *
 */

# include <stdio.h>

int main()
{
        int C,D,temp;

        printf("Enter the value of C : ");
        scanf("%d",&C);

        printf("Enter the value of D : ");
        scanf("%d",&D);

        // Using temporary variable.
        temp = C;
        C = D;
        D = temp;

        printf("------------------------------------------\n");
        printf(" Using temporary variable.\n");
        printf(" C = %d\tD = %d\n",C,D);

        // Without using temporary Variable.
        C = C + D;
        D = C - D;
        C = C - D;

        printf("------------------------------------------\n");
        printf(" Without using temporary Variable.\n");
        printf(" C = %d\tD = %d\n",C,D);
}


/*
 * Pridiction :
 * ----------
 *
 */
