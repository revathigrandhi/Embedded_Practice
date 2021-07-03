/**
 * program to set the bit and get the bit using macro
 *
 */
#include<stdio.h>

#define getBit(num,pos) ((num>>pos)&1)
#define setBit(num,pos) (num = num|(1<<pos))

int main ()
{
    int num,pos;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the position\n");
    scanf("%d",&pos);

    printf("The number in hex is :%02x\n",num);

    printf("The bit at pos: %d in %d  is :%d\n",pos,num,getBit(num,pos));
    setBit(num,pos);
    printf("The number after setting bit at pos: %d is :%d\n",pos,num);
    return 0;
}

/**
output:
======
Enter the number
20
Enter the position
4
The number in hex is :14
The bit at pos: 4 in 20  is :1
The number after setting bit at pos: 4 is :20

revathi@revathi-OptiPlex-3060:~/Rev_WSP/Embedded_Practice$ ./a.out
Enter the number
15
Enter the position
5
The number in hex is :0f
The bit at pos: 5 in 15  is :0
The number after setting bit at pos: 5 is :47
*/
