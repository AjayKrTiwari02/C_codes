#include<stdio.h>

int main()
{
	int password;
	
	printf("Enter the Password:");
	scanf("%d",&password);
	if(password==1234)
	{
		printf("Welcome To Block A\n");
	}
	else if(password==4567)
	{
		printf("welcome to block B\n");
		
	}
	else if(password==8901)
	{
		printf("welcome to block c\n");
		
	}
	else
	{
		printf("Get Out\n");
		
	}
	
	return 0;
	
}









