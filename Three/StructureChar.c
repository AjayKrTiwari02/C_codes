#include <stdio.h>

struct name {
    char first[20];
    char last[20];
};

int main() {
    struct name sara;
    sara.first = "Sara";
    sara.last = "Black";
    printf("struct direct: %x\n",sara);

    printf("struct deref: %x\t%s\n", *sara, *sara);


}
