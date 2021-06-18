#include <stdio.h>



/**
 * @brief Function to print number 1 to N recursively
 *
 * @param integer N
 * @returns void
 */
void printNum ( int num )
{
   if ( num < 1 )
   {
       return;
   }
   printNum( num-1 );

   printf ("%d\t", num );
}


int main ()
{
   int num;
label1:
   printf(" Enter the Natural Number\n");
   scanf("%d",&num);
   if ( num <= 0 )
   {
       printf("Entered num is not natural num\n");
       goto label1;
   }
   printNum( num );
   return 0;
}
