#include<stdio.h>

union info
{
	int roll;
	char name[20];
	float marks;
	
};

int main()
{
	union info st;
	
	printf ("Enter Student record:");
	scanf("%d",&st.roll);
	printf("%d",st.roll);
	
	scanf("%s",&st.name);
	printf(" %s ",st.name);
	
	scanf(" %f",&st.marks);
	printf("%f per",st.marks);
	
	return 0;
}
