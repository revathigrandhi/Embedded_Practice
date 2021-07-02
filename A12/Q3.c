/**
 * @brief program to print the bit value in given position
 */

#include<stdio.h>

#define isBitset( num, pos )  ((num>>pos)&1)


int main()
{
    int num, position;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The number in hex is %02X\n",num );
    printf("Enter the position\n");
    scanf("%d",&position);
    printf ("The bit val at given position is: %d",isBitset(num,position));
    return 0;
}

/**
 * output:
 ========
 Enter the number
15
The number in hex is 0F
Enter the position
3
The bit val at given position is: 1
*/
