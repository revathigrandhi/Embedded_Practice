/**
 * @brief Program to left rotate an array by users choice
 */
#include<stdio.h>

/**
 * @brief rotate array by 1 rotation
 *
 * @params arr : pointer to array
 * @params   n : no of elements in array
 */
void leftRotateArrByOne ( int *arr, int n )
{
   int temp,i;
   temp = arr[0];
   for ( i=1; i<n; i++ )
   {
       arr[i-1] = arr[i];
   }
       arr[n-1] = temp;
   return;
}


/**
 * @brief rotate array by r rotations
 *
 * @params arr : pointer to array
 * @params   r : no of rotations to be made
 * @params   n : no of elements in array
 */
void leftRotateArray ( int *arr, int r, int n )
{
   for ( int i=0; i<r; i++ ) 
       leftRotateArrByOne( arr, n );
   return;
}

/**
 * @brief driver function to invoke leftrotateArray
 */
int main ( )
{

   int a[10] = {0};
   int r,n;

   printf("Enter the number of elements\n");
   scanf("%d",&n);

   for ( int i = 0; i<n; i++)
	   scanf("%d",a+i);

   printf("Enter No of rotations to be made ");
   scanf("%d",&r);

   leftRotateArray(a, r, n );
   printf("Array afer %d rotations\n", r );
   for ( int i = 0; i<n; i++)
	   printf("%d\t",a[i]);
   printf("\n");
}


/**
 * OUTPUT:
 * =======
 * Enter the number of elements
 * 6
 * 1 2 3 4 5 6
 * Enter No of rotations to be made 3
 * Array afer 3 rotations
 * 4       5       6       1       2       3
 */

