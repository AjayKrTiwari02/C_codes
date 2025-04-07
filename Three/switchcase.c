#include<stdio.h>

int main()
{
	int a,b,c;
	
	int ch;
	
	 printf("Enter Two Numbers:\n");
	 scanf("%d",&a);
	 scanf("%d",&b);
	 
	 printf("Enter Your Choice :1 is for + \n 2 is for -  \n 3 is for /  \n 4 is for *\n");
	 scanf("%d",&ch);
	
	 switch(ch)
	 	{	 
	 	case 1:c=a+b;
	 		printf("%d",c);
	 		break;
	 	
	 	case 2:c=a-b;
	 		printf("%d",c);
	 		break;
	 		
		case 3:c=a/b;
	 		printf("%d",c);
	 		break;
	 		
		case 4:	c=a*b;
	 		printf("%d",c);
	 		break;
			 	
	 		default:
			  printf("Invalid Choice\n");
        }
	
		return 0;	
}





