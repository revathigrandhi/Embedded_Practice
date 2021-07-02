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
   uint8_t nib1:4;
   uint8_t nib2:4;
   } num;
   uint8_t number;
};

int main ()
{
    uint8_t tmp; union bitField n;

    printf("sizeof structure is : %ld\n",sizeof ( union bitField ));
    printf ("Enter the Hexadecimal character:\n");
    scanf ("%02hx",&tmp);
    n.number = tmp;
    printf("number before swap:%02hx\n",n.number);
    tmp = n.num.nib1;
    n.num.nib1 = n.num.nib2;
    n.num.nib2 = tmp;
    printf("number after swap:%02hx\n",n.number);
    return 0;
}

/**
output:
======
sizeof structure is : 1
Enter the Hexadecimal character:
cd
number before swap:cd
number after swap:dc

*/
