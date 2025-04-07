#include<stdio.h>

int main()
{
	int a[6],i;
	
	printf("Enter the values:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("your array is:");
	for (i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nRevers:");
	
	for (i=5;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

