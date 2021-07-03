/**
 * program to count set bit in a given number
 */
#include<stdio.h>

int main()
{
    int num;
    int count = 0,i=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while ( num )
    {
        if ( num &1 )
	{
	    ++count;
	}
	i++;
	num = num>>1;
    }
    printf("The number of bits set is:%d\n",count);
    return 0;
}

/**
output:
======
Enter the number
7
The number of bits set is:3
revathi@revathi-OptiPlex-3060:~/Rev_WSP/Embedded_Practice$ ./a.out
Enter the number
15
The number of bits set is:4
*/
