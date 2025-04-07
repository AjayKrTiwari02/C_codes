#include<stdio.h>

int main()
{
	int n;
	printf("Enter a number to test positive negative or zero\n");
	scanf("%d",&n);
	
	if(n>=0)
	{
		if(n==0)
		{
			printf("The number is Zero..!");
		}
		else
		{
			printf("The number is Positive Number..!");
		}
		
	}
	else
	{
		printf("Negative Number..!");
	}
	
	return 0;
}
