#include<stdio.h>

int main()
{
	int age,height,weight;
	
	printf("Enter Your Age ,Height, Weight : ");
		scanf("%d",&age);
		scanf("%d",&height);
		scanf("%d",&weight);
	
	if(age>=18 && age<=26)
	{
			if(height>=170)	
			{
					if(weight>=50 &&weight<=80)
					{
					printf("Eligible");
					}	
					else
					{
					printf("Weight Default");
		
					} 
			}
			else
			{
					printf("Height Default");
		
			}
	}	
	else
	{
		printf("Age Default");
	}	
}
	

