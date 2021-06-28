/**
 * @brief Program to verify the array sorted in ascending order
 */


#include<stdio.h>

/**
 * @brief function to verify the sorting
 *
 * @param   arr : array to be verified
 * @param     n : size of the array
 *
 * @returns  1 if array is sorted
 *          -1 if array is not sorted
 */
int verifySorting( int *arr , int size )
{
    if ( NULL == arr )
    {
        printf("The array address is invalid\n");
	return -1;
    }
    for ( int i=0; i<size-1;i++)
    {
        if ( arr[i] > arr[i+1] )
        {
	    return -1;
	}
    }
    return 1;
}


/**
 * @brief driver function to invoke the verify function
 */
int main()
{
    int arr[20] = {0}; 
    int n,ret;  
    printf("\n enter the number of elements : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
	 scanf("%d",&arr[i]);
    }

    ret = verifySorting(arr,n);
    if ( ret == -1)
	    printf("array is not sorted in ascending order \n");
    else
	    printf("array is sorted in ascending order \n");
}
