#include<stdio.h>

void first()
{
	int a=1;
	printf("This is the First Function which is Void ,non-returntype:%d\n",a);
}
void second(int a,int b)
{
	int c=a+b;
	printf("\nThis is Void type parametrized Function,The Answer:%d\n",c);
}
float third()
{
	printf("\nThis is return type non param. function..\n");
	float a =12.11f;
	float b=6.2f;
	float c=a/b;
	return c;
}
double fourth(double d,double e)
{
	printf("\nthis is Parametrised , return type function.\n");
	double f=d-e;
	return f;
}


int main()
{
	printf("\n_____________1stFunction_________________\n\n");
	first();
	printf("\n_____________2ndFunction_________________\n\n");
	second(6,8);
	printf("\n_____________3rdFunction_________________\n\n");
	printf("\nThe Answer:%f\n",third());//or   (third()*3))
	printf("\n_____________4thFunction_________________\n\n");
	printf("\nThe last Answer:%lf\n",fourth(13.11,6.3));
	
	
	return 0;
}
