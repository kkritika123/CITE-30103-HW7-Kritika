#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int even = 0, odd = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even count = %d\n", even);
    printf("Odd count = %d\n", odd);

    return 0;
}

