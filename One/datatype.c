#include<stdio.h>
#include<stdbool.h>// library

int main()
{
	int a=10;
	char b='A';
	float c=23.45;
	long d=234567899;
	double e=12345.778899;
	bool f=true;
	
	printf("%d\n",a);// for integer also %i can be used
	printf("%c\n",b);
	printf("%f\n",c);
	printf("%d\n",d);// for long also %ld can be used
	printf("%f\n",e);// for long also %lf can be used
	
	if(f=false)
	{
	  printf("the value is false\n")	;
		
	}
	else
	{
	  printf("the value is true")	;
		
	}
	
	
			return 0;		
}
