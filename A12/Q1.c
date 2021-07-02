/**
 * Function to prints bits in a character byte without using bitwise operator
 */
#include<stdio.h>
#include<string.h>
#include<stdint.h>
#pragma pack(1)
union bitField
{
   struct {
   uint8_t bit0:1;
   uint8_t bit1:1;
   uint8_t bit2:1;
   uint8_t bit3:1;
   uint8_t bit4:1;
   uint8_t bit5:1;
   uint8_t bit6:1;
   uint8_t bit7:1;
   } num;
   uint8_t number;
};

int main ()
{
    uint8_t x; union bitField n;

    printf("sizeof structure is : %ld\n",sizeof ( union bitField ));
    printf ("Enter the character to print the binary\n");
    scanf ("%d",&x);
    n.number = ( uint8_t )x;
    printf("The binary equivalent is:");
    printf("\n%d%d%d%d%d%d%d%d\n",n.num.bit7,n.num.bit6,n.num.bit5,n.num.bit4,n.num.bit3,n.num.bit2,n.num.bit1,n.num.bit0);
    return 0;
}

/**
output:
======
sizeof structure is : 1
Enter the character to print the binary
6
The binary equivalent is:
00000110
*** stack smashing detected ***: <unknown> terminated
Aborted (core dumped)
*/
