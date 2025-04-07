#include<stdio.h>

int main()
{
	if(1==1)
	{
		static int c=30; 
		printf("if block calling:%d",c);
		
	}
//	printf("if block out side calling:%d",c);
		
	return 0;
}
