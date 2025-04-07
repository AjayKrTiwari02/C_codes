#include<stdio.h>
#define money 100  //macro value(simple macro..)......
#define money2 200

int main()
{
	char name1[20]="ankit";
	char name2[20]=" avilash";
	char name3[20]="binod";
	char name4[20]="raju";
	char name5[20]="mohit";
	
	printf("%s got %d rupees \n",name1, money*3);
	printf("%s got %d rupees \n",name2, money2);
	printf("%s got %d rupees \n",name3, money);
	printf("%s got %d rupees \n",name4, money2);
	printf("%s got %d rupees \n",name5, money+5);

	return 0;
}


