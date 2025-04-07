//file write+ open
//File write & Create
#include<stdio.h>

int main()
{
	FILE*fptr;
	
	fptr=fopen("C:\\FileHandling\\Cclass.c","w");//w=write mode , r= read mode

 	fputs("# include <stdio.h>\n\n int main()\n{\n",fptr);
 	fputs("\tprintf(\"",fptr);
 	fputs("This file is Created by file handling\");\n",fptr);
 	fputs("\treturn 0;\n}",fptr);
	
	printf("File Writing Completed..");
	
	fclose(fptr);
	return 0;
}
