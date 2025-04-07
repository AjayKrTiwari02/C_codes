#include <stdio.h>

int main()
{
   int r, c, i, j, first[10][10], second[10][10], sum[10][10];
   
 
	printf("Enter the number of rows and columns of matrix:\n");
   
   scanf("%d",&r);   
   scanf("%d",&c);
   
   
   printf("Enter the elements of first matrix:\n");
 
   for (i = 0; i < r; i++)
   {
   	    for (j = 0; j < c; j++)
   	    {
          scanf("%d",&first[i][j]);
     	}
   }
  
  printf("Enter the elements of second matrix\n");
  
   for (i = 0;  i< r; i++)
   {
      for (j = 0 ; j < c; j++)
      {
         scanf("%d",&second[i][j]);
		}
		
	}
   printf("Sum of entered matrices:-\n");
  
   
   for (i = 0; i < r; i++) 
   {
      for (j = 0 ; j < c; j++)
	   {
         sum[i][j] = first[i][j] + second[i][j];// use "-" sign for subtraction..
         printf(" %d ", sum[i][j]);
      }
      printf("\n\n");
   } 
   return 0;
}




