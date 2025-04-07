#include<stdio.h>

int area()
{
	int l=5;    // actual param
	
	int a=l*l;
	
	return a;
}
float bank(int p,int r,int t)
{
	int s=(p*r*t)/100; ///formal
	return s;
}


int main()
{
	int s=area();
	printf("The area is : %d\n",s);
	
	int sp=bank(1000,5,2);
	printf("The Simple Interest SBI: %d\n",sp);
	
	int sp1=bank(1000,6,4);
	printf("The Simple Interest UBI: %d",sp1);
	
	return 0;
}
