#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int n;

    // function pointer declaration
    int (*ptr)(int);

    ptr = square;   // assign function to pointer

    printf("Enter a number: ");
    scanf("%d", &n);

    // call square using pointer
    int result = ptr(n);

    printf("Square = %d\n", result);

    return 0;
}

