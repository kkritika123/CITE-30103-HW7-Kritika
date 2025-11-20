#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;   // 0, 1, and negatives are not prime
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;   // not prime
        }
    }
    return 1;   // prime
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}

