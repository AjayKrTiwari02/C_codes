# include<stdio.h>

void menu()
{
	int a , b, c;
	
	printf("Enter the 1st value\n");
	scanf("%d",&a);
	printf("Enter the 2nd value\n");
	scanf("%d",&b);
	c=a+b;
	printf("The Answer is :%d\n",c);
	printf("\n\n----------------------------------------\n\n");
	
}

int main()
{

	int ch = 1;
	while(ch!=0)
	{
		printf("Enter 1 to Start  : \n");
		printf("Enter 0 to Stop  : \n");
				
		printf("Enter Your Choice : \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				menu();
				break;
				
			case 0:
				printf("Thank You for Using Calculator.\n");
				break;
				
			default:
				printf("Invalid Input.\n");
				break;
		}
	
	}
		while(ch==1);
}

