#include<stdio.h>

int d=60;// global

int main()
{
  printf("%d\n",d);
  
  if(1==1)
  { 
  int e=20;//local
   static int a=30;
  
  	printf("%d\n",d);
  	printf("%d\n",e);
  	printf("%d\n",a);
  	
	}	
	printf("%d\n",d);
//	printf("%d",e);
 // 	printf("%d\n",a);
	  
	  
	return 0;
}
