#include<stdio.h>
#include<string.h>

struct myStructure 
{
  int myNum;  
  char myLetter;
  double value;
  char num[6];						//string 
};

int main()
 {
  		  											
  struct myStructure s1;// Create a structure variable of myStructure called s1

  s1.myNum = 13;	// Assign values to members of s1
  s1.myLetter = 'B';
  s1.value=145.56;
	gets(s1.num);
	
	double p=s1.myNum+s1.value; //imp.type casting..
	
  	printf("My number: %d\n", s1.myNum);
  	printf("My letter: %c\n", s1.myLetter);
 	printf("My value: %f\n", s1.value);
	puts(s1.num);
	
	
	printf("The sum : %f\n",p);
	
	printf("--------------------------------------------\n");
	 struct myStructure s2;
	  s2.myNum = 22;	
	  s2.myLetter = 'A';
 	  s2.value=66.46;
 	  
 	printf("2nd number: %d\n", s2.myNum);
  	printf("2nd letter: %c\n", s2.myLetter);
 	printf("2nd value: %f\n", s2.value);
	
  return 0;
}
