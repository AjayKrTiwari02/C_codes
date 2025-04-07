#include<stdio.h>

union info
{
	int roll;
	char name[20];
	int marks;
	
};

int main()
{
	union info st;
	
	printf ("Enter Student record:");

	
	scanf("%s",&st.name);
	printf(" the name is: %s ",st.name);
	
	scanf("%d",&st.roll);
	printf("the roll number is:%d",st.roll);
	
	scanf(" %d",&st.marks);
	printf("The marks is :%d per",st.marks);
	
	return 0;
}
