
#include<stdio.h>  

int main()    
{    
	int n,r,temp; 
	int sum=0;   
	printf("Enter the number="); 
	   
	scanf("%d",&n); //n=121
	   
	temp=n;//temp=121
	    
	while(n>0)    
	{    
		r=n%10;  //  1---> 2 ----->1
		sum=(sum*10)+r;//1----> 12--->  121
		n=n/10; //12 -->1 
	}    
	if(temp==sum)    
	printf("palindrome number ");    
	else    
	printf("not palindrome : %d",sum);   //reverse of a number
	return 0;  
}   




