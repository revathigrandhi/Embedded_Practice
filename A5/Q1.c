#include<stdio.h>

/**
 * @brief to demonstrate inline advantage over macro
 */

#define SQUARE(x)  x*x
#define SQUARE_1(x) ((x)*(x))

static inline int square ( int x )
{
    return x*x;
}


int main()
{

   int a = 5;
   printf("with inline function.....\n");
   printf("square of 6 is %d\n", square(++a) );
   a =5;
   printf("with macro SQUARE .....\n");
   printf("square of 6 is %d\n", SQUARE(++a) );
   a =5;
   printf("with macro SQUARE_1 .....\n");
   printf("square of 6 is %d\n", SQUARE_1(++a) );
   return 0;
}

/**
 *
 * output:
 * ======
 * with inline function.....
 * square of 6 is 36
 * with macro SQUARE .....
 * square of 6 is 49
 * with macro SQUARE_1 .....
 * square of 6 is 49
 *
 * conclusion:
 * ==========
 * so macros will not advatageous over inline to generate expected output
 */

