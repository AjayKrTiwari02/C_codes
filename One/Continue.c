#include<Stdio.h>

int main()
{
	
	int i;
	
	for(i=1;i<=10;i++)
	{
		if(i==7)
	//	continue;
	//	exit(0);
		break;
		
		printf("%d\n",i);
	}
	printf("Thank you...");
	return 0;
}
