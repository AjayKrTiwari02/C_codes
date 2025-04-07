#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(char *binary);

int main()
 {
    char binary[65];
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int decimal = binaryToDecimal(binary);
    printf("Decimal equivalent of %s is: %d\n", binary, decimal);
    return 0;
}

int binaryToDecimal(char *binary) 
{
    int decimal = 0;
    int length = strlen(binary);
    int i;

    for ( i = 0; i < length; i++) 
	{
        if (binary[length - i - 1] == '1')
		 {
            decimal += pow(2, i);
        }
    }

    return decimal;
}
