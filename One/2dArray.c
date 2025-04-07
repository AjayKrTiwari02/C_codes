#include <stdio.h>

int main()
{
	int i,j,r,c,n;
	int a[3][3]={{2,3,7},{4,5,8},{1,6,9}};
	
	
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("arr[%d] [%d] = %d \n",i,j,a[i][j]);///for printing positions
		 } 
		 	
	}
	printf("\n\n Your Matrix is :\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);///for printing positions
		 } 
		printf("\n\n");
	}
	

	printf("\n---------------------------------------\n");
	printf("\nTell me which row you want to print:\n");
	scanf("%d",&n);
	r=n-1;
	for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[r][j]);// for printing matrix...
		 } 
		printf("\n");
	}
	

	printf("\n------------------------------------\n");
	printf("\nTell me which column you want to print:\n");
	scanf("%d",&n);
	c=n-1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			printf(" %d ",a[i][c]);// for printing matrix...
		 } 
		printf("\n\n");
	}
		
	return 0;
}








