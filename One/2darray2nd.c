#include <stdio.h>

int main()
{
	int a[3][3];
	int i,j;
	
	printf("Enter Array elements: ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		 } 
	}
	printf("The following mattrix is:\n");
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
		 } 
		printf("\n\n");
	}	
	return 0;
}




