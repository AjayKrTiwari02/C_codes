#include<stdio.h>


int main()
{
	int num;
	char ln;
	FILE *fp;
	
	fp=fopen("C:\\FileHandling\\niit.txt","r");

	
	if(fp==NULL)
	{
		printf("File not created");
		exit(1);
	}
	printf("File created succesfuly...\n");
	printf("Enter a Number & a text:\n");
	scanf("%d",&num);
	fprintf(fp,"%d",num);
	printf("Data input succesfully...\n");
	
	fclose(fp);
	
	return 0;
}
