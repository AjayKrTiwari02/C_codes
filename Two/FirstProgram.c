#include<stdio.h>

 void main()
{
	char f='R';
	float a=53.24;
	int b=50;
	short c=123;
	long d=23456789;
	double e=12334.999;
	char g[6]={'H','E','l','l','o'};
	char h[6]="Sayan";
	int i;
		
	printf("The float value is:%f\n",a);
	printf("The value of intiger is:%d\n",b);
	printf("The value of short is:%d\n",c);
	printf("The value of long is:%d\n",d);
	printf("The vlaue of Double is:%f\n",e);
	printf("-------------------------------------------------------------\n");
	for(i=0;i<6;i++)
	{
	printf(" %c",g[i]);
	
	}
	printf("\t");
	for(i=0;i<6;i++)
	{

	printf(" %c",h[i]);
	}

	return 0;	
}
