#include <stdio.h>

long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    long result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        result = factorial(n);
        printf("Factorial of %d is %ld\n", n, result);
    }

    return 0;
}

