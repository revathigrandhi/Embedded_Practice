/**
 * program to find num is power of 2 or not
 */

#include<stdio.h>

int main ()
{
    int num;
    printf("Enter the number..\n");
    scanf( "%d",&num );

    if ( num&(num-1))
    {
        printf("\n%d is not power of 2\n",num);
    }
    else
    {
        printf("\n%d is power of 2\n",num);
    
    }
    return 0;
}

/**
 * output:
 ========

 Enter the number..
15

15 is not power of 2
revathi@revathi-OptiPlex-3060:~/Rev_WSP/Embedded_Practice/A14$ ./a.out
Enter the number..
16

16 is power of 2
*/
