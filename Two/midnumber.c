#include<stdio.h>


int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
			
			///	printf("%d",j);
			printf("#");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
		
	return 0;
}






