#include<stdio.h>

int main()
{
   int marks;
  
   
  
   printf("\nEnter The Marks Between 0 To 100:");
   
   printf("\nEnter The Mark: ");
   scanf("%d", &marks);
   
   if(marks>100)
   {
   
    printf("\nDon't Be Smart Enter your Marks Between Limit\n");
   }
   else
   {
   switch(marks/10)
   {
       case 10 :
       case 9 :
           
           printf("\n Your Grade is: O");
           break;
       case 8 :
            
           printf("\n Your Grade is: E" );
           break;
       case 7 :
           
           printf("\n Your Grade is: A" );
           break;
       case 6 :
           
           printf("\n Your Grade is: B" );
           break;
       case 5 :
            
           printf("\n Your Grade is: C" );
           break;
       case 4 :
          
           printf("\n Your Grade is: D");
           break;
       default :
           
           printf("\n You Grade is: F or Fail\n");
   }
 }

 
   return 0;
}
