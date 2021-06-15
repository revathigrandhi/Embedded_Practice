#include<stdio.h>
/**
 * @brief To calculate sum of given digits into a single digit
 *
 */


int getTheSum ( int num )
{
    int sum = 0;
    while ( num )
    {
      sum = sum + ( num%10);
      num/=10;
    }
    if ( sum > 9 )
    {
       sum = getTheSum ( sum );
    }
    return sum;
}

int main ()
{
    int num,sum=0;
    printf("Enter the number\n");
    scanf("%d", &num );

    sum = getTheSum  ( num );
    printf("the sum is : %d\n",sum );

}
