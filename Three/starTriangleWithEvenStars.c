#include<stdio.h>	

int main()
{
		
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i%2==0)
				{
					printf(" * ");
				}
			else
				{
					printf(" # ");
					//printf(" %d ",i);  ////for numbers (i or j)
				}

		}
		printf("\n\n");
	}
		
	return 0;
}
