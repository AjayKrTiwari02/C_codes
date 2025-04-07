#include<stdio.h>

int main()
{
	int age ;
	
	printf("Enter your age :");
	
	scanf("%d",& age);
	
	if(age>=18)
	{
		printf("You are eligible for voting\n");
	}
	else
	{
		printf("You are  not eligible for voting\n");
	}

	printf("Thank You...!");
	
	
	return 0;
}
