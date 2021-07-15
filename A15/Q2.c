/**
 * Program to display the man page of given command
 */

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    system("man man");
    int section; char cmd[20] = {0};
    char buffer[20] = {0};
    printf("Enter the command in following format\n\
		 <section number> <command>\n ");

    printf ("\nEnter the command to display the man page\n");
    scanf("%d",&section);
    scanf("%s",cmd);
    sprintf( buffer,"man %d %s",section,cmd );

    system(buffer);
}
