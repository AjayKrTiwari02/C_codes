#include<stdio.h>

int main()
{
	int num[5],i;
	int sum=0;
	
	printf("Enter the  array values:\n");
	for(i=0;i<6;i++)
	  scanf("%d",&num[i]);
	

	printf("Your entered values are :\n");
		for(i=0;i<6;i++)
			printf("\nyou Entered ->%d at index[%d] \t ",num[i],i);
		
	printf("\nThe summation of the arrays digits:\n");
		for(i=0;i<6;i++)
		{
		sum+=num[i];
		}
	printf("%d",sum);	
		
	return 0;
}
