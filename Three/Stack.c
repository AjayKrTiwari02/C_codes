#include<stdio.h>

void fun(int n)
{
	stack S;
	while(n>0)
	{
		push(&S,n%2);
		
		n=n/2;
		while(!isEmpty(&S))
		printf("%d",pop(&S));	
	}	
}
int main()
{	
	
int sus=fun(6);

printf("%d",sus);	
	
	return 0;
}
