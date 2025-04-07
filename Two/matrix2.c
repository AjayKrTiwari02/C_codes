#include<stdio.h>
int main()
{
	int a,b,i,j,frist[10][10],second[10][10],sum[10][10];
	char ch;
	printf("enter the number of  rows and columns of mattrix\n");
	scanf("%d%d",&a,&b);

	printf("enter the operator\n");
	scanf("%c",&ch);


	printf("enter the element of 1st metrix\n");
  	for(i=0;i<a;i++)
    	{
	    	for(j=0;j<b;j++)
	        	{

		        	scanf("%d",&frist[i][j]);
	         	}
    	}
 	printf("the frist metrix is:\n");
	for(i=0;i<a;i++)
	    {
		    for(j=0;j<b;j++)
		       {
		         	printf("  %d ",frist[i][j]);
		       }
	            printf("\n");
	    }

    printf("enter the element of 2nd metrix\n");
   	for(i=0;i<a;i++)
	    {
		    for(j=0;j<b;j++)
		       {

			        scanf("%d",&second[i][j]);
			   }
	   	}

    printf("the second metrix is:\n");
	for(i=0;i<a;i++)
	    {
		    for(j=0;j<b;j++)
		       {
		         	printf("  %d ",second[i][j]);
		       }
	            printf("\n");
	    }


	switch(ch)
	{
	case'+':
   {

	printf("sum of entered matrices:-\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			sum[i][j]=frist[i][j]+second[i][j];
			printf("  %d ",sum[i][j]);
		}
		printf("\n");
	}
	break;


    }
	return 0;


}
