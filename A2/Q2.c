#include<stdio.h>
/**
 * @brief program to understand logical operators
 *
 * @output: a= 4,b = 1, x=1;
 * @details:  event the second statement fails
 *            evaluates to zero,( 0 || ++a )returns 1
 */
int main ()
{
   int a=2,b=1,x;
   x = ( a++ && (!b) && b || ++a );
   printf ("a= %d, b = %d x=%d\n",a,b,x );
   return 0;
}
