#include<stdio.h>

int main()
{
    int a[20];
    int r,sum=0;
    
    printf("Enter the number of terms:\n");
    scanf("%d",&r);
    
    int i;
    
    double avg;
    
    printf("\nEnter the Values\n");
    for( i=0;i<r;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe values are:\n");
	
	for( i=0;i<r;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\nThe sum of the values are:");
	for( i=0;i<r;i++)
	{
		sum+=a[i];
	}
	printf("%d",sum);   ////the sum of the array data
	
	printf("\nThe Avg. of the values are:\n ");
	
	avg=(double)sum/(double)r;   
	
	printf("%lf",avg);
	
	return 0;
}
