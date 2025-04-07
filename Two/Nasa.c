#include<stdio.h>

int main()
{
	int pass;
	int spass;
	int tpass;
	printf("**Enter the First Security code**:\n");
	scanf("%d",pass);
	printf("\n**Enter The Second Security code**:\n");
	scanf("%d",spass);
	printf("\n**Enter The Third Security code**:\n");
	scanf("%d",tpass);
	if(pass==76593)
	{
		if(spass==76592)
		{
			if(tpass==76591)
			{
				printf("\nYou Just Hacked Nasha Server ");
			}
			else
			{
				printf("Wrong Passcode:");
			}
		}
		else
		{
			printf("Wrong Passcode:");
		}
	}
	else
	{
		printf("Wrong Passcode:");
	}
	
	
}
