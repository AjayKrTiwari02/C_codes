#include <stdio.h>

int main() 
{
//int a[4];
		char b[10];
  		int i;      // index value
  		printf("Enter the Array:\n");
		for(i=0;i<10;i++)
		{
			scanf("%c",&b[i]);	
		}
		for(i=0;i<10;i++)
		{
			printf("%c",b[i]);	
		}


  return 0;
}
