
#include<stdio.h>

int main()
{

	int b[5]={10,20,30,40,50};
	int j;
	
	printf("Enter a Number to replace 1st digit of array:");
		scanf("%d",&b[0]);
		b[1]=222;
		
		printf("\nYour OutPut:\n");
		for(j=0;j<5;j++)
		{
			printf("%d\n",b[j]);
			
		}
		
	
	return 0;
}
