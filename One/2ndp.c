#include<stdio.h>
#include<string.h>


 int main()
 {

char c[50]="WELCOME TO NIIT";
char a[30];
puts(c);
puts("Write your name :");

gets(a);

puts(a);

puts(" Confirm Your name :");

puts(strupr(a));

 return 0;
 }
