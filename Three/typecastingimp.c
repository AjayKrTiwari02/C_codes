// An example of implicit conversion
#include <stdio.h>

int main()
{
	int x = 10; 
	char y = 'a'; 

	// y implicitly converted to int. ASCII
	// value of 'a' is 97
	x = x + y;     //107

	// x is implicitly converted to float
	float z = x + 1.578654;

	printf("x = %d, z = %f", x, z);
	return 0;
}

