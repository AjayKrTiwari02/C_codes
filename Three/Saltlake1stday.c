#include<stdio.h>
#include<stdbool.h>

int main()
{
	int a=10456; //4bytes
	float b=37.67;//4 bytes
	short c=2;//2bytes
	long d=12345342;//8 bytes
	char e='e';//1 bytes
	double f=12345.99999;//8bytes
	 bool g= false;// 1 bytes
	
	
	
	printf("%d\n",a);
	printf("%f\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%c\n",e);
	printf("%d\n",f);
	
	//printf("\nEnter the number aagain\n");
	//scanf("%d",&a);
	
/*	printf("Welcome \t To NIIT \n");
	printf("Today is your 1st class ..!");*/
	if(g)
	printf("True");
	else
	printf("False");
	
	return 0;
}
