#include<stdio.h>	

int main()
{
		
	int i,j;


	for(i=0;i<=4;i++)
	{
		for(j=0;j<5;j++)
		{
			if((i==0||i==4)||(j==0||j==4))
			{	
			printf(" * ");
			}
			else
			{
				printf(" %d ",j);
//			printf("   ");
//			printf(" # ");			
			}

		}
		printf("\n\n");
	}
		
	return 0;
}
