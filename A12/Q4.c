/**
 * program to set,clear and toggle the bits
 */
#include<stdio.h>

#define clearBit(num,pos)  ( num = num & ~(1 << pos))
#define setBit(num,pos) ( num = num | ( 1<<pos ))
#define toggleBit(num,pos) ( num = num ^ ( 1<<pos ))

int main ( )
{
    int num,pos;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the position\n");
    scanf("%d",&pos);
    printf("The number is %02x\n",num );
    printf("The number after clearing bit at %d pos is: %d\n",pos, clearBit(num,pos));
    printf("The number after setting bit at %d pos is: %d\n",pos,setBit(num,pos));
    printf("The number after clearing bit at %d pos is: %d\n",pos,toggleBit(num,pos));
    return 0;
}

/**
output:
=======
Enter the number
8
Enter the position
3
The number is 08
The number after clearing bit at 3 pos is: 0
The number after setting bit at 3 pos is: 8
The number after clearing bit at 3 pos is: 0
*/
