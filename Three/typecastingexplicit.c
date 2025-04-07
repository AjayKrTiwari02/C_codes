// C program to demonstrate explicit type casting
#include<stdio.h>
	
int main()
{
	double x = 1.2;
	int y=75;
	char z='A';
	
	// Explicit conversion from double to int
	int sum = (int)x + 1;
	int sum1 = (int)z + 1;
	char c=(char)y;
	
	printf("sum = %d , %c, %d", sum,c,sum1);
	
	return 0;
}

