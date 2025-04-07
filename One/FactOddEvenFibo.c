#include<stdio.h>

int fact(int n)
{
	if(n <= 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n-1);
	}
}

void oddEven()
{
    int i, num, odd_sum = 0, even_sum = 0;
 
    printf("\nEnter the value of number:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}

void fibonacii()
{
	int first=0, second=1, i, n, sum=0;
	printf("\nEnter the number of terms: ");
	
			scanf("%d",&n);      ///n=8
									///accepting the terms
		printf("Fibonacci Series:");
		for(i=0 ; i<n ; i++)
		{
			if(i <= 1)
			{
				sum=i;       ///to print 0 and 1
			}
									
		else
			{
			sum=first + second; 
			first=second;  
			second=sum; 
										//to calculate the remaining terms							//value of first and second changes as new term is printed.
			}
			printf(" %d",sum); 
		}
}

int main()
{
	int ch ;
	
	printf("Enter your choice :\n");
	printf("1. To find factorial.\n");
	printf("2. To Find odd sum & even sum with a given limit.\n");
	printf("3. To find the Fibonacci series of a given number.\n\n");
	printf("Your Choice:");
	scanf("%d",& ch);
	
	switch(ch)
	{
		case 1:
			{
			 	int f;
			 	printf("Enter the number to calculate factorial:");
			 	scanf("%d",&f);
			 	int factorial=fact(f);
			 	printf("\nThe Factorial of %d is :%d",f,factorial);
				break;
			}
		case 2:
			{
				oddEven();
				break;
			}
		case 3:
			{
				fibonacii();
				break;
			}
		default:
			printf("Invalid input...! ");
	}
	
	return 0;
}
