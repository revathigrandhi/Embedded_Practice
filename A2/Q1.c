#include<stdio.h>
#include <string.h>
/**
 * @brief Program to receive password by hiding the input
 *
 * @output:
 * Undefined Reference to getch()... in ubuntu
 */ 
int main ()
{
    char ch;
    printf("Enter the Password.." );
    while ( getch() != '\n' )
    {
       printf("*");
    
    }
    return 0;

}


