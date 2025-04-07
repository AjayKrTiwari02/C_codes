#include<stdio.h>

typedef struct {
  char *name;
  int age, ht;
   
} human;

void hfn (human A) {
A.name [0] += 'A' - 'a';
A.age += 3; A.ht += 5;
}

int main(){
char A[20] = "computer";
human H = {A, 20, 180};
hfn (H);
printf("%s,%d, %d",H.name,H.age,H.ht);
return 0;
}
