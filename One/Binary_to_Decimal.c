#include <stdio.h> 

int binaryToDecimal(int n) 
{ 
	int num = n; 
	int dec_value = 0; 
	int base = 1; 
	int temp = num; 

	while (temp)
	 { 
		int last_digit = temp % 10; 
 
		temp = temp / 10; 

		dec_value += last_digit * base; 
		base = base * 2; 
	} 
	return dec_value; 
}

void decToBinary(int n) 
{ 
	int binaryNum[1000]; 
	int i = 0; 
	int j;
	while (n > 0) 
	{ 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 
	 
	for ( j = i - 1; j >= 0; j--) 
		printf("%d", binaryNum[j]); 
} 


int main() 
{ 
	int num ;     /// ex:10101001 
	printf("Enter the Binary number :");
	scanf("%d",&num);
	printf("%d\n", binaryToDecimal(num)); 
	
	int n ; //ex:17 
	printf("\nEnter the Decimal number :");
	scanf("%d",&n);
	decToBinary(n);
}

