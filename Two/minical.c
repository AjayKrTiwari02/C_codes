#include<stdio.h>

int main()
{
	int a,b,c;
	
	char ch;
	
	 printf("Enter Your Choice : + ,-,*,/  \n");
	 
	scanf("%c",&ch);
	
	 printf("Enter Two Numbers:\n");
	
	 scanf(" %d \n %d ",&a,&b);
	 
	 switch(ch)
	 	{	 
	 	case '+':c=a+b;
	 		printf("%d",c);
	 		break;
	 	
	 	case '-':c=a-b;
	 		printf("%d",c);
	 		break;
	 		
		case '/':c=a/b;
	 		printf("%d",c);
	 		break;
	 		
		case '*':	c=a*b;
	 		printf("%d",c);
	 		break;
			 	
	 		default:
			  printf("Invalid Choice\n");
        }
	
		return 0;	
}





