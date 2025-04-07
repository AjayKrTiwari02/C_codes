#include<stdio.h>

int main()
{
	int n,i,flag=0;
	printf("please enter number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag++;
		}
	}
	if(flag==1)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}

	
	return 0;
}
