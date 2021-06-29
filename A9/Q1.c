/**
 * @brief program to understand valgrind debugging
 */
#include<stdlib.h>
int main ()
{
   int arr[100];  //expected mem leak

   int *ptr;
   ptr = malloc ( 200 ); //expected mem leak
   return 0;
}


/**
valgrind memcheck output:
========================
==16184== Memcheck, a memory error detector
==16184== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16184== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==16184== Command: ./a.out
==16184==
==16184==
==16184== HEAP SUMMARY:
==16184==     in use at exit: 200 bytes in 1 blocks
==16184==   total heap usage: 1 allocs, 0 frees, 200 bytes allocated
==16184==
==16184== LEAK SUMMARY:
==16184==    definitely lost: 200 bytes in 1 blocks
==16184==    indirectly lost: 0 bytes in 0 blocks
==16184==      possibly lost: 0 bytes in 0 blocks
==16184==    still reachable: 0 bytes in 0 blocks
==16184==         suppressed: 0 bytes in 0 blocks
==16184== Rerun with --leak-check=full to see details of leaked memory
==16184==
==16184== For counts of detected and suppressed errors, rerun with: -v
==16184== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/
