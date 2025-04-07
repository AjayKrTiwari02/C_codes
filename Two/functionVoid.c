#include<stdio.h>

void name()
{
	int a=4,b=6,c;
	
	c=a*b;
	
	printf("Welcome to function concept\n");
	printf("The First Answer is : %d",c);
	
}
void param(int c, int d)
{
	int z=c+d;
	printf("The Second Answer: %d",z);
}


int main()
{
//	name();
	param(6,7);
 
return 0;
}




