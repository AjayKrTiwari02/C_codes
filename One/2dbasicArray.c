#include<stdio.h> 
 
int main()
{      
int i,j;    
int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{9,8,5}};     
  
for(i=0;i<4;i++)
{    
	 for(j=0;j<3;j++)
 	{    
   		printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);    
 	}   
}
printf("---------------------------\n");

for(i=0;i<4;i++)
	{    
 		for(j=0;j<3;j++)
 		{    
   		printf(" %d ",arr[i][j]);    
 		}  
 	printf("\n") ;
}

   
return 0;  
}
