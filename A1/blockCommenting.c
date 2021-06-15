#include<stdio.h>

int main()
{
    /** 
     * Code to describe multi commenting
     * Can verify the output by giving: gcc -c <filename.c>
     */
    #if 0 
    //The code block under this directive will not be compiled
    int i;
    i = 3;
    #endif
    printf("%d",i);
    return 0;
}
