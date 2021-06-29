/**
 * @brief program to understand perror behaviour
 */

#include<stdio.h>

int main ()
{
   FILE *fp = NULL;

   fp = fopen ( "nonExistingFile.txt","r");
   perror("fopen");

   return 0;

}

/**
output:
======
fopen: No such file or directory
*/

