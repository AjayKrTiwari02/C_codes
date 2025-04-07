#include<stdio.h>

char add()
{
	int a , b ,Sum;
	a=20.45;
	b=30.89;	
	
	Sum=a+b;
	return Sum;
}

int main()
{
	char e=add();
	printf("The summatio is:%c",e);
	
	return 0;
}
