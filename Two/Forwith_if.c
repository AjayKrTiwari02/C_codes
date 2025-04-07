# include<stdio.h>

int main()
{
 int i;
 
 printf("Odd using If with for:\n");
 for(i=1;i<=100;i++)   //i=i+2--->>i+=2
 {
 	if(i%2!=0)
 	{
 		printf(" %d ",i);
	}
 		
 }
printf("\n\nEven using If with for:\n");
 for(i=1;i<=100;i++)   
 {
 	if(i%2==0)
 	{
 		printf(" %d ",i);
	}
 		
 }
 printf("\n\nDivisible by 3 using If with for:\n");
 for(i=1;i<=100;i++)   
 {
 	if(i%3==0)
 	{
 		printf(" %d ",i);
	}
 		
 }
 printf("\n\nDivisible by 5 using If with for:\n");
 for(i=1;i<=100;i++)   
 {
 	if(i%5==0)
 	{
 		printf(" %d ",i);
	}
 		
 }
		
   	
	return 0;
}
