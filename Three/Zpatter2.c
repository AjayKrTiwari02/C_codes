#include<stdio.h>

int main()
{
	int i,j,a,b;
	printf("enter the rows\t");
	scanf("%d",&a);
	printf("enter the column\t"); 
	scanf("%d",&b);
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		if((i==0||((i+j)==b-1))||(i==b-1))
		//	if((i==0||(i==j))||(i==b-1))
			{
				printf("* ");
			}
				else
		{
			printf("  ");
		}
		}
	
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
	
	
}

