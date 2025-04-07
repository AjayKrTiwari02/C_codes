#include<stdio.h>
#include<string.h>

int main()
{
	
	char str[50];
	char str2[55];
	int i,j;
	
	puts("Enter any stirng:");
	gets(str);

	puts("Enter any stirng2:");
	gets(str2);

	
   i=strlen(str);  /// strlen ==>String length or number of characters used inside the string.
   printf("%d\n",i);
	j=strlen(str2);
	printf("%d",j);
	
	return 0;
}
