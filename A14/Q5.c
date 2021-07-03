/**
 * Program to find the odd repeated number in a given array
 */
#include <stdio.h>


int main()
{
	int array[50] = {0};
	int n;
	
	printf("Enter the no of elements in array(<50)\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for ( int i=0; i<n;i++) scanf("%d",array+i);

	int res = 0;
	for (int i = 0; i < n; i++)	
		res = res ^ array[i];
	printf("The element with odd nr of occurence is: %d\n",res );
	return 0;
}

/**
output:
=====
Enter the no of elements in array(<50)
7
Enter the elements
1
1
2
2
3
3
3
The element with odd nr of occurence is: 3
*/

