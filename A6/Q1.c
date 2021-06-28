#include<stdio.h>
/**
 * @brief Program to find the second largest number in an array
 */
int main ( )
{
    /** declaring array */
    int arr[20]={0};

    int largest=0, secLargest = 0;
    int n; //No of elemnts for input
    printf ("Enter the no of elements\n");
    scanf("%d",&n );

    if ( n > 20 )
    {
	//This limits can be takeoff with dynamic mem alloc
        printf("Enter value less than 20");
        return 0;
    }

    for ( int i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
	 if ( arr[i] > largest )
         {
	     secLargest = largest;
	     largest = arr[i];
	 }
    }

    printf("The second largest in an array is = %d\n",secLargest );

}


/**
 * output:
 * =======
 * Enter the no of elements
 * 5
 * 1 2 5 7 7
 * The second largest in an array is = 5
 */

