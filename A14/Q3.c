/**
 * function to find given number is even or odd using macro
 */
#include <stdio.h>

//0 in case of even number and 1 incase of odd
#define isEvenOrOdd(num) (num&1)

int main()
{
   int num;
   printf("Enter the number\n");
   scanf("%d",&num);
   if ( isEvenOrOdd(num) )
   {
       printf("The entered num is odd\n");
       return 0;  
   }
   printf("The entered number is even\n");
   return 0;
}

/**
 * output:
 ========
 Enter the number
9
The entered num is odd
revathi@revathi-OptiPlex-3060:~/Rev_WSP/Embedded_Practice$ ./a.out
Enter the number
6
The entered number is even
*/


