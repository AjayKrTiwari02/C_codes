#include<stdio.h>

typedef struct {
    char *name;
    int age, ht;
} human;

void hfn(human *A) {  // Pass by reference
    A->name[0] += 'A' - 'a';  // Modify the first character to uppercase
    A->age += 3;  // Increase age
    A->ht += 5;   // Increase height
}

int main() {
    char A[20] = "computer";
    human H = {A, 20, 180};
    hfn(&H);  // Pass the address of H
    printf("%s, %d, %d", H.name, H.age, H.ht);  // Print updated values
    return 0;
}
