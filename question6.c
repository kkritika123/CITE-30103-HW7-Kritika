#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum = 0;
    float avg;

    printf("Enter how many numbers (max 100): ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

