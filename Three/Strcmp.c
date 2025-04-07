#include<stdio.h>
#include<string.h>

int main()
{
	char str[50]="Welcome  to  Aptech";
	char str2[50]="Welcome  to  Aptech";
	
	int s;
	
	s=strcmp(str,str2);  //0 1 -1
	
	if(s==0)
	{
		printf("Equal :%d",s);
	}
	else
	{
		printf("Not Equal: %d",s);
	}
	
	return 0;
	
}




