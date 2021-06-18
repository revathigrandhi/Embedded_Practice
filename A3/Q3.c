#include <stdio.h>



/**
 * @brief Function to print binary equivalent of decimal using recursion
 *
 * @param integer N
 * @returns void
 */
void printBinary ( int num )
{
   if ( num <= 0 )
   {
       printf("\n The binary Equivalent is:\n");
       return;
   }
   printBinary( num/2 );

   printf ("%d\t", num%2 );
}


int main ()
{
   int num;
   printf(" Enter the Decimal Number\n");
   scanf("%d",&num);
   printBinary ( num );
   return 0;
}
