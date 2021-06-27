#include <stdio.h>

/**
 * To understand why inline requires static storage class
 */

static inline void display ()
{
    printf("\nin inline function\n");
    return;

}

int main ()
{
    display();
    return 0;
}

/**
 * output without static:
 * =====================
 * revathi@revathi-OptiPlex-3060:~/Rev_WSP/Embedded_Practice/A4$ cc Q2.c
 * /tmp/ccp2ML0b.o: In function `main':
 * Q2.c:(.text+0xa): undefined reference to `display'
 * collect2: error: ld returned 1 exit status
 *
 * output with static:
 * ==================
 * in inline function
 */

