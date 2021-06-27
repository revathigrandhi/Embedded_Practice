#include<stdio.h>
#include <time.h>
/**
 * @brief Function to print current time 
 * in seconds,milli seconds and nano seconds
 *
 */
int main ()
{
    struct timespec time;
    clock_gettime( CLOCK_REALTIME , &time );
    printf("Time in seconds: %ld\n",time.tv_sec + (time.tv_nsec/1000000000)); 
    printf("Time in nano seconds: %ld\n",(time.tv_sec*1000000000)+time.tv_nsec); 
    printf("Time in milli seconds: %ld\n",(time.tv_sec*1000)+(time.tv_nsec/1000000)); 
    return 0;
}
