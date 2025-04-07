#include<stdio.h>

int main()
{
	char arr[6]="Hello";
	
	int i;
	
	for(i=0;i<6;i++)
	{
		printf("%c\t",arr[i]);
	}
	printf("\n\n");
	
	for(i=0;i<6;i++)
	{
		int s=(int)arr[i];
		printf("%d\t",s);
	}
	
	
	return 0;
}
