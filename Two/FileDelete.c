#include<stdio.h>

int main()
{
			
	int c;
	
	c=remove("C:\\FileHandling\\xyz.txt");
	
	printf("%d",c);   /// not important
	
	if(c==0)
	{
		printf("\nFile Deleted succesfully..");
	}
	else
	{
		printf("\nFile Not Found....!");
	}
	return 0;
}
