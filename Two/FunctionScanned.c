#include<stdio.h>

int sum()
{
	int a; int b;
	
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	int c=a+b;
	return c;
}
int main()
{
	
	int store=sum();//Function calling..
	
	printf("%d\n",store);
	printf("The 2nd Answer is :%d\n",sum());
	printf("The 3rd Answer is :%d",sum());
	return 0;
}
