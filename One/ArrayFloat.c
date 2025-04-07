#include<stdio.h>

int main()
{
	float f[6];
	int i;
	
	printf("Enter the values of array:\n");
	for(i=0;i<6;i++)
		scanf("%f",&f[i]);
		
	printf("\n----------The values are----------\n");	
	for(i=0;i<6;i++)
		printf("The value at index [%d]:%f\n",i,f[i]);
	
	
	return 0;
}
