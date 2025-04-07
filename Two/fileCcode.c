//file write+ open
//File write & Create          
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE*fptr;
	fptr=fopen("C:\\FileHandling\\ClassC.c","w");	
	fputs("#include<stdio.h>\n",fptr);
	fputs("\nint main()\n{",fptr);
	fputs("\n\tprintf(\"C code with c file handling\");\n",fptr);
	fputs("\nreturn(0);\n}",fptr);


	printf("File Writing Completed..");
	fclose(fptr);
	return 0;
}
