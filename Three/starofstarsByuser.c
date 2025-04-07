#include<stdio.h>	

int main()
{
		
	int i,j;
	int r,h;
	printf("Enter the any odd number of Rows:\n");
	scanf("%d",&r);
	h=(r-1);
	
	for(i=0;i<=h;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==h/2||j==h/2||(i+j)==h||(i==j))
			{	
				printf("*");	
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
		
	return 0;
}






