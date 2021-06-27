#include<stdio.h>
/**
 *
 * @brief To understand how function arguments passed and collected
 */
void data_acq ( int x, int y, int z )
{
    printf("x=%d y=%d z=%d\n",x,y,z);
    return;
}

int main()
{
   int a=5, b=6, c=7;
   while(1)
   {
       sleep(1);
       printf( "a=%d b=%d c=%d\n",a,b,c);
       data_acq( a, b, c );
   }

}

/**
 * output:
 * ======
 *a=5 b=6 c=7
 *x=5 y=6 z=7
 *a=5 b=6 c=7
 *x=5 y=6 z=7
 *a=5 b=6 c=7
 *x=5 y=6 z=7
 *a=5 b=6 c=7
 *x=5 y=6 z=7
 *a=5 b=6 c=7
 *x=5 y=6 z=7
 *
 *
 */
