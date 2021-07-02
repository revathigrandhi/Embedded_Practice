/**
 * @brief Program to implement interrupt vectoring using func pointer
 */

#include<stdio.h>
#include<stdlib.h>


void signal1 ( )
{
    printf("Raised signal..1\n");
}


void signal2 ( )
{
    printf("Raised signal..2\n");
}


void signal3 ( )
{
    printf("Raised signal..3\n");
}
void signal4 ( )
{
    printf("Raised signal..4\n");
}
void signal5 ( )
{
    printf("Raised signal..5\n");
}

int main ()
{
   /** Init interrupt vector */
    void (*signalPtr[5])( void ) = { signal1, signal2,signal3,signal4,signal5};
   /** Invoke IVT from here */

    while (1)
    {
       (*signalPtr[rand()%5])( );
    }

}


/**
output:
======
Raised signal..3
Raised signal..4
Raised signal..5
Raised signal..5
Raised signal..3
Raised signal..2
Raised signal..4
Raised signal..3
Raised signal..5
Raised signal..4
Raised signal..5
Raised signal..3
Raised signal..3
Raised signal..1
Raised signal..4
Raised signal..1
Raised signal..3
Raised signal..2
Raised signal..2
Raised signal..3
Raised signal..3
Raised signal..4
Raised signal..5
Raised signal..3
Raised signal..3
Raised signal..2
Raised signal..1
Raised signal..5
Raised signal..5
Raised signal..4
Raised signal..4
Raised signal..2
Raised signal..2
Raised signal..4
Raised signal..3
Raised signal..2
Raised signal..2
Raised signal..1
Raised signal..1
*/
