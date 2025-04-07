#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE*fptr;
	char loc[200];
	char data[200];
	int opt=1;
	printf("Enter the Location:\n");
	scanf("%s",&loc);
	
	fptr=fopen(loc,"w");
	
	do
	{
		printf("Enter 1 to add line \n");
		printf("Enter 0  to stop scanning\n");
		scanf("%d",&opt);
		switch(opt)
		{
	
			case 1:
			{
				printf("Enter the data:\n");
				scanf("%s",&data);
				fputs(data,fptr);
				fputs("\n",fptr);
				break;
			
			}
			case 2:
			{
			printf("Data Loaded succesfully...!");
				close(fptr);
				break;
			}
			default:
			printf("You just entered a Wrong input..!");
		}
		
		
	}		
	while(opt==1)	;
		
	printf("File Writing Completed..");

	return 0;
}
