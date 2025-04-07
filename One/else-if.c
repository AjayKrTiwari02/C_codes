#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter your age: \n");
	
	scanf("%d",&age);
	
	if(age>0 && age<=13)
		{
			printf("You are a child\n");
		}
	else if(age>13 && age<=18)
		{
			printf("You are a teen\n");	
		}
	else if(age>18 && age<=60)
		{
		printf("You are a Adult\n");	
		}
	else if(age>60)
		{
		printf("You are an Senior-Citizen\n");	
		}
	else
		{
			printf("wrong input");
		}	
	
return 0;
}




