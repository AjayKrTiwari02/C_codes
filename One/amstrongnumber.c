 #include <stdio.h>  

int main()
{
  int Number, Temp, Reminder, Times =0, Sum = 0;
 
  printf("\nPlease Enter number to Check \n");
  scanf("%d", &Number);    //153
  
  //Helps to prevent altering the original value
  Temp = Number;  //153
  while (Temp != 0) 
   {
      Times = Times + 1;//3
      Temp = Temp / 10; 
   }
   
  Temp = Number;
  while( Temp > 0)
   {
     Reminder = Temp %10;  
     Sum = Sum+pow(Reminder, Times);//add only  Reminder to get sum  digits..
     Temp = Temp /10;
   }
 
  printf("%d",Sum);
  if ( Number == Sum )
      printf("\n %d is Armstrong Number.\n", Number);
  else
      printf("\n %d is not an Armstrong Number.\n", Number);
 
  return 0;
}
