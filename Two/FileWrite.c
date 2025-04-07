//file write+ open
//File write & Create          
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	
//	fptr=fopen("C:\\FileHandling\\abc.txt","w");		//w=write mode , r= read mode
//	fputs("1600\n",fptr);
//	fputs("I love C programing\n",fptr);	
//	fputs("C programing By Aptech\n",fptr);
// 	fputs("India is great...! ,\n I love my India..!",fptr);

//////##2nd:

	fptr=fopen("C:\\FileHandling\\new.py","w");	
	fputs("print(",fptr);
	fputs("'Python File By c , Hellow codders' )",fptr);


	printf("File Writing Completed..");
	fclose(fptr);
	
	return 0;
}
