#include<stdio.h>

int fun(int a=5 , int b=1 )    // default value of param...
{
	int c=a/b;
	return c;
}

int main()
{
	int e=fun(10,12);
	printf("The answer is :%d",e);	
	return 0;
}
