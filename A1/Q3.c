#include<stdio.h>
/**
 * @brief Program to demonstrate format specifiers
 *
 * @details:
 * the output is:
 * ch1 = A
 * ch2 = b
 * ch3 = 3
 * ch1 = 65
 * ch1 = 98
 * ch1 = 51
 */
int main ( )
{
    char ch1,ch2,ch3;
    ch1=65;
    ch2='b';
    ch3 = '3';
    printf("ch1 = %c\n",ch1);
    printf("ch2 = %c\n",ch2);
    printf("ch3 = %c\n",ch3);
    printf("ch1 = %d\n",ch1);
    printf("ch1 = %d\n",ch2);
    printf("ch1 = %d\n",ch3);

}
