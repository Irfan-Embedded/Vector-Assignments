
/*
 * 05. The length and breadth of a rectangle and radius of a circle are input through the keyboard.
 *     Write a program to calculate the area and perimeter of the rectngle, and the circle.
 *
 */

#include <stdio.h>

int main()
{
	int length, breadth, radius;

	printf("\nProrgam to calculate the area and perimeter of the rectngle, and the circle\n\n");

	printf("Enter the length of a rectangle : ");
	scanf("%d",&length);

	printf("Enter the breadth of a rectangle : ");
	scanf("%d",&breadth);

	printf("Enter the radius of a circle : ");
	scanf("%d",&radius);

	printf("\n-----------------------------------------------------------------\n");
	printf("Area of a rectangle is %d\n",( length * breadth ));
	printf("Perimeter of a rectangle is %d\n",( 2 * ( length + breadth )));

	printf("\n-----------------------------------------------------------------\n");
	printf("Area of a circle is %d\n",( (22/7)*( radius * radius ) ));
        printf("Perimeter of a circle is %d\n",( 2 * (22/7) * radius ));

}


/*
 * Pridiction :
 * ----------
 *
 */
