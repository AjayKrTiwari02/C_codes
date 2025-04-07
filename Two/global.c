#include<stdio.h>

int a=10;			//global variable


void fun()
{
	printf("The value called in fun: %d\n",a);	
}

int main()
{
		fun();
	
	printf("main bllock\n");
	
	 int d=34;			//local in main block
	 

	if(1==1)
	{
		 int c=22;			//local variable
		printf("if bllock\n");
		printf("a value called in if: %d\n",a);
		printf("c value called in if: %d\n",c);
		printf("d value called in if: %d\n",d);
	}
	printf("Out side of the if block\n");
	
		printf("a value called in main block: %d\n",a);
//		printf("%d\n",c);
		printf("d value called in main block: %d\n",d);
		
	return 0;
}




