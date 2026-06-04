#include <stdio.h>

int main(){
    int a = 10;
    int *b = &a;
    printf("Value of a is: %d\n", a);
    printf("Address of a is: %p\n", &a);
    printf("Value of b is: %p\n", b);
    printf("Value at address stored in b is: %d", *b);
    return 0;
}