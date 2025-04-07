#include<stdio.h>

int main()
{
	int m[2][2];

	printf("Enter the elements of the array:\n");
	
	int i,j;
	
	for (i=0;i<2;i++)						
	{
		for(j=0;j<2;j++)
			{
				scanf(" %d ",&m[i][j]);
			}	
	}
 printf("Your Matrix is:\n");

	for (i=0;i<2;i++)						
	{
		for(j=0;j<2;j++)
			{
				printf(" %d ",m[i][j]);
			}	
		printf("\n\n");

	}	
	return 0;
}




