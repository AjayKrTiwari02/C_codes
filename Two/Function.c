#include<stdio.h>

int mul( int a, int b) //parameterized function
{
	int c=a*b;
	
	return c;          // or return a*b
}

int sub()
{
   	float d,e,f;
   	d=15.89;
   	e=10;
   	f=d-e;
//   	printf("%f",f);
   	return f;
}
void display(int g,char h )
{
	printf("Your Roll :%d\t",g);
	printf("Your Section :%c",h);		
}
int main()
{

	
	int store=mul(2,3)*5;//Function calling..(a,b)
	
	printf(" The multiplication: %d\n",store);
	
	printf(" The 2nd multiplication: %d\n",mul(5,5));
	

	printf("The Substraction :%d\n",sub());
	
	display(12,'A');
	
	
	return 0;
}
