#include <stdio.h>
 
int main()
{
   int a, b, i, j, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   
   scanf("%d %d", &a, &b);
   
   printf("Enter the elements of first matrix\n");
 
   for (i = 0; i < a; i++)
   {
   	    for (j = 0; j < b; j++)
   	    {
         scanf("%d", &first[i][j]);
     	}
   }
  
  printf("Enter the elements of second matrix\n");
  
   for (i = 0;  i< a; i++)
   {
      for (j = 0 ; j < b; j++)
      {
         scanf("%d", &second[i][j]);
		}
		
	}
   printf("Sum of entered matrices:-\n");
   
   for (i = 0; i < a; i++) 
   {
      for (j = 0 ; j < b; j++)
	   {
         sum[i][j] = first[i][j] + second[i][j]; //sub (use '-')
         printf("  %d ", sum[i][j]);
      }
      printf("\n");
   } 
   return 0;
}





