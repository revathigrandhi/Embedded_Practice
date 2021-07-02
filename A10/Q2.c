#include<stdio.h>

/**
 * @brief program to implement strlen,strcpy,strcmp
 */
char *myStrCpy(char *dest, const char *src)
{
	char *tmp = dest;

	while ((*dest++ = *src++) != '\0')
		/* nothing */;
	return tmp;
}

int myStrCmp(const char *cs, const char *ct)
{
	unsigned char c1, c2;

	while (1) {
		c1 = *cs++;
		c2 = *ct++;
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		if (!c1)
			break;
	}
	return 0;
}

/**
 * @brief function to send strlen
 */
size_t myStrLen(const char *s)
{
	const char *sc;

	for (sc = s; *sc != '\0'; ++sc);
	return sc - s;
}


int main ()
{
    char str1[10]={'A','B','C','D','E','F'};
    char str2[10]={'1','2','3','4','5','6','7'};

    puts(str1);
    puts(str2);
    printf("Strlength of str1:%d\n",myStrLen(str1));
    printf("Strlength of str2:%d\n",myStrLen(str2));

    myStrCpy ( str1, str2 );
    puts(str1);
    puts(str2);
    if ( myStrCmp ( str1, str2 ) )
    {
       printf("Both strings are not equal\n");
    }
    else
    {
       printf("Both strings are equal");
    }



}


/**
output:
======
ABCDEF
1234567
Strlength of str1:6
Strlength of str2:7
1234567
1234567
Both strings are equal
*/
