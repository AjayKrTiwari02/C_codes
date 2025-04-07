#include<stdio.h>
#include<stdbool.h> 

bool isMagic(int n) 
{ 
	int sum = 0; 
	
	while (n > 0 || sum > 9) 
	{ 
		if (n == 0) 
		{ 
			n = sum; 
			sum = 0; 
		} 
		sum += n % 10; 
		n /= 10; 
	} 
	
	// Return true if sum becomes 1. 
	return (sum == 1); 
} 

// Driver code 
int main() 
{ 

	printf("Enter the  Number You want to check:\n");
	int n ;
	scanf("%d",&n); 
	
	
	if (isMagic(n)) 
		printf( "Magic Number\n"); 
	else
		printf( "Not a magic Number\n"); 
	return 0; 
} 

