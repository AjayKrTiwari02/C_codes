#include <stdio.h>

void pattern1()
{
	int i,j;
	
	for (i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	
}
void pattern2(int a )
{
	int i,j;
	
	for (i=0;i<a;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	
	
}
void pattern3()
{
	int i,j;
	for (i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i%2==0)
				printf("%d",i);
			else
				printf("#");
			
		}
		printf("\n");
	}
	
}


int main()
{
	pattern1();
	
	printf("\n------------------------------\n");
	pattern2(10);
	printf("\n------------------------------\n");
	pattern3();
	return 0;
}
