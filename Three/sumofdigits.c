#include <stdio.h>  

int main()
{
  int Number, Temp, Reminder, Sum = 0;
 
  printf("\nPlease Enter number to Check \n");
  scanf("%d", &Number);    
  

  Temp = Number;
  while( Temp > 0)
   {
     Reminder = Temp %10;  
     Sum = Sum+ Reminder;
     Temp = Temp /10;
   }
 
   printf("\nSum of the digits :%d.\n",Sum);
 
  return 0;
}
