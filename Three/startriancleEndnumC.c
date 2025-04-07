#include<stdio.h>	

int main()
{	
	
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i>j)
			{
				printf(" * ");
			}
			else
			{
				printf(" %d ",j,"");    // or i
			}
		}
		printf("\n\n");
	}
		
	return 0;
}




