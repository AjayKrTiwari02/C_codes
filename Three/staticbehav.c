
#include <stdio.h>

void demo()
{

	 static int stat = 0;
	 		int norm=0;
		printf("static variable [static]:%d\n",stat); ///prinf
		printf(" normal variable[normal]:%d\n\n\n",norm);

	stat++;    //count=count+1
	norm++;
}

int main()
{
	
	demo();
	demo();
	demo();
	demo();
	demo();
				
	return 0;
}

