#include<stdio.h>
 
 int main() 
 {
 	int Day;
 
 	
 	printf("Enter  The day:\n");
 	scanf ("%d",&Day);
 
	
 	
 	switch(Day)
 	{
 		case 1:
 			{
 			printf("The day is:\n");
 			printf(" SUNDAY\n");
 			break;
			 }
		 case 2:
 			{
 			printf("The day is:\n");
 			printf(" MONDAY\n");
 			break;
			 }
		 case 3:
 			{
 			printf("The day is:\n");
 			printf(" TUESDAY\n");
 			break;
		 	}
		 case 4:
		 	{
 			printf("The day is:\n");
 			printf(" WEDNESDAY\n");
 			break;
		 	}
		case 5:
		 	{
 			printf("The day is:\n");
 			printf(" THURSDAY\n");
 			break;
		 	}	
		case 6:
		 	{
 			printf("The day is:\n");
 			printf(" FRIDAY\n");
 			break;
		 	}
		case 7:
		 	{
 			printf("The day is:\n");
 			printf(" SATURDAY\n");
 			break;
 			
		 	}
		default:
		 	{
 		
 			printf(" invalid input");
 			
 			}	
	 }	
	 return 0;
}
 
 
 
 
