#include<stdio.h>


int main()
{
	int num1 , num2 , num3;
	printf("Please enter the number 1 : \n" );
	scanf( "%d",&num1);
	printf("Please enter the number 2 : \n");
	scanf("%d",&num2);
	printf("Please enter the number 3 : \n");
	scanf("%d",&num3);
	int temp;
	
	
	if(num1>num2)
	{
		if(num1>num3)
		{
			temp = num1;
		}
		else
		{
			temp = num3;
		}
	}
	else
	{
		if(num2>num3)
		{
			temp = num2;
		}
		else
		{
			temp = num3;
		}
	}
	
	printf("Biggest Number :  %d\n",temp);
	
	return 0;
}
