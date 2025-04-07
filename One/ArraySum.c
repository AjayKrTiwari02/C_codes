#include<stdio.h>

int main()
{
	int num[5],i;
	int num1[5];
	int sum[5];
	
	printf("Enter the 1st array values:\n");
	for(i=0;i<5;i++)
	  scanf("%d",&num[i]);
	
	printf("Enter the 2nd array values:\n");
			for(i=0;i<5;i++)
	  			scanf("%d",&num1[i]);
	printf("Your entered values are :\n");
		for(i=0;i<5;i++)
			printf("%d \t %d\n",num[i],num1[i]);
		
	printf("The summation of the arrays are:\n");
		for(i=0;i<5;i++)
		{
		sum[i]=num[i]+num1[i]; ///-,*,/
		printf("%d\n",sum[i]);
		}
			
		
	return 0;
}
