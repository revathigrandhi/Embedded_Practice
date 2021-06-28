/**
 * @brief  C program to multiply 2D arrays
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int **arr1 = NULL ,**arr2 = NULL;
	int r1,c1;
	int r2,c2;
	int i, j, k;

	int **res = NULL;
        printf("Enter no of rows in mat1\n");
	scanf("%d",&r1);
        printf("Enter no of cols in mat1\n");
	scanf("%d",&c1);
        printf("Enter no of rows in mat2\n");
	scanf("%d",&r2);
        printf("Enter no of rows in mat1\n");
	scanf("%d",&c2);

	if ( c1 != r2 )
	{
	   printf("Matrix multiplication condition not satisified!!\n");
	   return 0;  
	}

	/** memory allocations to the arrays */
	arr1 = malloc ( r1 *  sizeof ( int *) );
        for ( int i= 0; i<r1; i++)
		arr1[i] = calloc( c1, sizeof ( int ) );
	arr2 = malloc ( r2 *  sizeof ( int *) );
        for ( int i= 0; i<r2; i++)
		arr2[i] = calloc( c2, sizeof ( int ) );
	res = malloc ( r1 *  sizeof ( int *) );
        for ( int i= 0; i<r1; i++)
		res[i] = calloc( c2, sizeof ( int ) );

        printf("Enter elements in mat1\n");
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c2; j++) {
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}

        printf("Enter elements in mat2\n");
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c2; j++) {
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
       
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c2; j++) {
			res[i][j] = 0;
			for (k = 0; k < c1; k++)
				res[i][j] += arr1[i][k] * arr2[k][j];
			printf("%d ", res[i][j]);
		}
	}

	printf("Result matrix is \n");
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c2; j++)
			printf("%d ", res[i][j]);
		printf("\n");
	}

	return 0;
}

