          
#include<stdio.h>

int main()
{
	FILE*fptr;
	
	fptr=fopen("C:\\FileHandling\\niit.py","w");//w=write mode , r= read mode

	fputs("print(",fptr);
	fputs("'Python File By c' )",fptr);
	printf("File Writing Completed..");
	
	fclose(fptr);
	return 0;
}
