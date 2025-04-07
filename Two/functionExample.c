#include<stdio.h>

float area(float len ,float br )
{
	float ar=len*br;
	return ar;
}
float volume(float len ,float br ,float he)
{
	float v=len*br*he;
	return v;
}

int main()
{
	printf ("Enter the length, breadth,height of the cube:\n\n");
	float l,b,h;
	scanf("%f %f %f",&l,&b,&h);
	
	//directly printed using function...
	printf("\nThe area of the Cube is:%f\n",area(l,b));

	
	///by storing the return value of a function in a variable
	float vol=volume(l,b,h);
	
	printf("\nThe Volume of the Cube is:%f\n",vol);
	
	printf("\n\n---------------------------------------------\n\n");

	scanf("%f %f %f",&l,&b,&h);
	
	//directly printed using function...
	printf("\nThe area of the Cube2 is:%f\n",area(l,b));

	
	///by storing the return value of a function in a variable
	 vol=volume(l,b,h);
	
	printf("\nThe Volume of the Cube2 is:%f\n",vol);
	
	
	
	return 0;
}
