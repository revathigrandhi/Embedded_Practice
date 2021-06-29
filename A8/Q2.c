/**
 * @brief program to implement memcopy with void pointers
 */
#include<stdio.h>


/**
 * @brief   Function to perform memcpy
 *
 * @param   dest: Where to copy to
 * @param   src: Where to copy from
 * @count   The size of the area.
 *
 */
void *myMemCpy(void *dest, const void *src, size_t count)
{
	char *tmp = dest;
	const char *s = src;

	while (count--)
		*tmp++ = *s++;
	return dest;
}

/**
 * @brief driver code to invoke memCpy */
int main ()
{
   int src[10] = { 1,2,3,4,5,6,7,8,9,10};
   int dst[10] = {0};

   myMemCpy( dst, src, sizeof ( src ));

   printf("The destination after memcpy..\n");

   for ( int i=0; i < ( sizeof ( dst )/sizeof (dst[0]));i++)
   {
       printf("%d ",dst[i]);
   }

   return 0;

}

/**
 output:
 =======
 The destination after memcpy..
1 2 3 4 5 6 7 8 9 10
*/
