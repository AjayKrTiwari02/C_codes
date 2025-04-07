#include<stdio.h>

int main()
{
		int age;
		
	printf("Enter Your age :\n");
	scanf("%d",& age);
	
	if(age>0 && age<=13) //age<=13-----age<14
		{
			printf("You are a child\n");
		}
	else if(age>13 && age<=18)
		{
			printf("You are a tenager\n");	
		}
	else if(age>18 && age<=30)
		{
			printf("You are a young adult\n");	
		}
	else if(age>30 && age<=60)
		{
			printf("You are  old adult\n");
		}	
	else if (age>60)
		{
			printf("Senior Citizen\n");	
		}
		else
		{
			printf("Worng input");
		}
	
	
	return 0;
}
