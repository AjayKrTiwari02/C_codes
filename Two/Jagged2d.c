#include <stdio.h>

int main()
{	
	int i,j;
	int a[3][3]={{2,3,4},{5,6},{8,7,5}};

	

	printf("The folling  Jagged mattix is:\n");
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
		 } 
		 	 	 	printf("\n");
	}	
	return 0;
}
