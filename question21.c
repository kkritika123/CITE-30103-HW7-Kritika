#include <stdio.h>

int main() {
    int x;
    int *p;

    printf("Enter an integer value: ");
    scanf("%d", &x);

    p = &x;  // pointer stores the address of x

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", (void*)p);  // print address with %p
    printf("Value through pointer = %d\n", *p);  // dereference pointer

    return 0;
}

