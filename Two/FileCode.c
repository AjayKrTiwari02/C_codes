//file write+ open
//File write & Create          
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE*fptr;
	char loc[200];
	char data[200];
	int opt=1;
	printf("Enter the Location:\n");
	scanf("%s",&loc);
	
	fptr=fopen(loc,"w");
	
	while(opt!=0)
	{
		printf("Enter 1 to add line \n");
		printf("Enter 0  to stop scanning\n");
		scanf("%d",&opt);
			if(opt==1)
			{
				fputs(data,fptr);
			}
			else
			{
			printf("Data Loaded succesfully...!");
				close(fptr);
			}	
		
	}		

		
	printf("File Writing Completed..");
	fclose(fptr);
	return 0;
}
