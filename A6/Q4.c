/**
 * @brief program to find max sum of sub array in a given array
 */
#include<stdio.h>

int main()
{
    int arr[5] = {1,-2,3,-1,2};
    int sum = 0, max_sum = 0;
    int i,j;
    for(i=0;i<5;i++)
    {
        sum = 0;
        for(j=i;j<5;j++)
        {
           sum = sum + arr[j];
        }
        if ( sum > max_sum )
        {
	    max_sum = sum;
	
	}
    }

    printf("Max sum of a sub array in given array is :%d\n",max_sum);
    return 0;
}

/**
 * output:
 * ======
 *  Max sum of a sub array in given array is :4
 */

