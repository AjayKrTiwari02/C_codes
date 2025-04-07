
//file read
#include<stdio.h>

int main()
{
	int num;
	char ln;
	FILE *fp;
	fp=fopen("C:\\FileHandling\\abc.txt","r");
	
	if(fp==NULL)
	{
	printf("Error occured");
	exit(1);
	}

	fscanf(fp,"%c",&ln);
	

	printf("%c",ln);
	
	fclose(fp);
	
	return 0;
}



