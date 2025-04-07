#include<stdio.h>

int main()
{
	float c[8];
	int i;
	
	printf("Enter the float values of the array:\n");
	
	for(i=0;i<8;i++)
	{
		scanf("%f",&c[i]);
	}
	
	printf("\n\n----------------------------------------\n\n");
	for(i=0;i<8;i++)
	{
		printf("The value at index c[%d]:%f\n",i,c[i]);
	}
	
	
	
	return 0;
}
