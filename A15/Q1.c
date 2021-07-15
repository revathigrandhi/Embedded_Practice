/**
 * Program to convert 
 * 1. Hex to binary
 * 2. Binary to Hex
 * 3. Hex to ASCII
 * 4. Text to binary
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void convertHex2Bin ( int num )
{
    if( num )
    {
       convertHex2Bin( num/2 );
       printf("%d ", num%2 );
    }
    else
        return;
}

void HexToBin()
{
    int num;
    printf("Enter the Hex number to covert into binary\n");
    scanf( "%x",&num );
    printf ("The binary equivalent of %x is :\n",num);
    convertHex2Bin ( num );

}

void convertBin2Hex ( unsigned long num )
{
    static int hex = 0,i=0;
    if( num )
    {
	hex = hex + ( ( num & 1) * pow(2,i++) );
        convertBin2Hex ( num/10 );
    }
    else
    {
        printf("%x",hex );
        return;
    }
}


void BinToHex()
{
    unsigned long num;
    printf("Enter the binary number to covert into HEX\n");
    scanf( "%lu",&num );
    printf ("The HEX equivalent of %lu is :\n",num);
    convertBin2Hex ( num );
}


void HexToAscii( )
{
    int num;
    printf("Enter the HEX ( 0x00 to 0x7f )to covert into ascii\n");
    scanf( "%x",&num );
    if ( num < 0x00 || num > 0x7f )
    {
       printf("\n not valid HEX to convert into ascii\n");
       return;
    }
    printf ( "The ascii equivalent of %x is %c:\n",num,num);
}

void TextToBin()
{
    char str[10] = {0};
    printf("Enter text to convert to bin\n");
    for ( int i=0; i <10; i++ )
    {
        scanf( "%c",str+i );
    }
    for ( int i=0; i <10; i++ )
    {
        convertHex2Bin( str[i] );
    }
    return;
}


int main ( )
{
    int choice;
display:
    printf ( "\n\
	OPTIONS:\n\
	========\n\
	1. Hex to Binary conversion\n\
	2. Binary to Hex conversion\n\
	3. Hex  to ASCII  conversion\n\
	4. Text to Binary conversion\n\
	5. QUIT\n" );
    printf("Enter the choice from the given menu\n");
    scanf( "%d",&choice );
    
    switch ( choice )
    {
        case 1: HexToBin();
		break;
	case 2: BinToHex();
		break;
	case 3: HexToAscii();
		break;
	case 4: TextToBin();
		break;
	case 5: printf("Exiting...");exit(0);
    }
    goto display;

}
