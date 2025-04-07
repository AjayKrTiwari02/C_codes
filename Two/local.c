#include<stdio.h>

int a=11; //global variable

void fun ()
{
	int b=20;     //local value .....
	printf(" global value: %d\n",a);
	printf("local value :%d\n",b);
		
}

int main()
{
	fun();
	printf("%d\n",a);
//	printf("local value :%d\n",b);
	int c=33;
	
	if(1==1)
	{
	printf("%d\n",a);
	printf("value of c is: %d\n",c);	
	}
	
	 	
	return 0;
}






