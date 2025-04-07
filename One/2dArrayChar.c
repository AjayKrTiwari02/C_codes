#include <stdio.h>

int main() 
{
	//Direct assignment....
    char a[3][3]={{'A','B','C'},{'D','E','E'},{'F','G','H'}};
    int i,j;
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<=2;j++)
    	{
    		printf(" %c ",a[i][j]);
		}
		printf("\n\n");
	}
	


    
    
    return 0;
}
