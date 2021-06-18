#include <stdio.h>



/**
 * @brief Function to print number N to 1 recursively
 *
 * @param integer N
 * @returns void
 */
void printNum ( int num )
{
   printf ("%d\t", num );
   if ( num == 1 )
   {
       return;
   }
   printNum( --num );

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
