#include<stdio.h>

union info
{
	int roll;
	char name[20];  ///20byte
	double marks;       
	
};

int main()
{
	union info st;
	
	printf ("Enter Student record:");
	scanf("%d %s %f",&st.roll,&st.name,&st.marks);
	printf("%d %s %f",st.roll,st.name,st.marks);
	
	///////or we can do
	
//	scanf("%d  %f",&st.roll,&st.marks);
//	printf("%d  %f",st.roll,st.marks);
	return 0;
}




