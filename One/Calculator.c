#include<stdio.h>
 
 int main() 
 {
 	int a,b,c;
 	float d;
 	char opt;
 	
 	printf("what do you want to do: +,-,/,* :");
 	scanf("%c",&opt);
 	printf("Enter the 1st  value:\n");
 	scanf ("%d",&a);
 	printf("Enter the 2nd  value:\n");
 	scanf("%d",&b);
 	
 	
 	switch(opt)
 	{
 		case '+':
 		
 			c=a+b;
 			printf(" The answer  is: %d",c);
 			break;
		 
		 case '-':
 		
 			c=a-b;
 			printf(" The answer is: %d",c);
 			break;
		 
		 case '*':
 		
 			c=a*b;
 			printf(" The answer is: %d",c);
 			break;
		 
		 case '/':
		 	
 			d=(float)a/(float)b;
 			printf(" The answer is :%f",d);
 			break;
		 
		 default:
		 
		 	printf("Invalid input...");
		 
 		
	}

		return 0;
 }
