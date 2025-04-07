#include<stdio.h>

int main()
{

    int a=10;               //whole number ->%d-> format specifier/ 4bytes
    long e=123456;           //long int-> %d    / 8 bytes
    float b=12.44;          // fraction decimal-> %f  /4 bytes
    char c='A';             //charector-> %c     / 1 byte
    double d=12345.5667;    //long fraction-> %f  / 8 byte
    char s[20]="Jaydeep";    // char Array / String  /1*20= 20 bytes


    printf("The Integer : %d\n",a);
    printf("The long int: %d\n",e);
    printf("The float value is :%f",b);
    printf("\nThe char value is :%c",c);
    printf("\nThe Double value is :%f",d);
    printf("\n hello...!,%s",s);


    return 0;
}
