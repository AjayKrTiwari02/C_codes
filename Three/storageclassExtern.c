
#include<stdio.h>

 extern int a=10;//global variable (Extern) ..

void fun()
{

	printf("Fun calling :%d\n",a);

}
int main()
{
	fun();
	printf("main method calling:%d\n",a);
	
	
	if(1==1)
	{
			
		printf("If block calling:%d",a);
		
	}
 
	return 0;
}
	//Extern Storage class is used to give a reference of a global-vairiable
	//that is visible to all program files....
