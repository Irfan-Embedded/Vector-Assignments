/*
 *
 * 09. write a program to show the metrix multiplication of 2x3 and 3x2  metrics.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int res_mat[2][2], mat1[2][3], mat2[3][2];
	int i, j, k, r1, r2;

	printf("Given metrix are : \n\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			mat1[i][j] = rand() % 200 - 100;
			printf("%4d ", mat1[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	for(i=0; i<3; i++)
        {
                for(j=0; j<2; j++)
                {
                        mat2[i][j] = rand() % 201 - 100;
			printf("%4d ", mat2[i][j]);
		}
		printf("\n");
        }
	
	for(i=0; i<2; i++)
	{
		for(j=0;j<2;j++)
		{
			res_mat[i][j] = 0;
			for(k=0; k<3; k++)
			{
				res_mat[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}

	for(i=0; i<2; i++)
        {
                for(j=0; j<2; j++)
                {
                        printf("%4d ", res_mat[i][j]);
                }
                printf("\n");
        }
}


/*
 * Pridiction :
 * ----------
 *
 */
