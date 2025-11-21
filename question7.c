#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int largest, smallest;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest value = %d\n", largest);
    printf("Smallest value = %d\n", smallest);

    return 0;
}

