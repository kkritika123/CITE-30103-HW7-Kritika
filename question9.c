#include <stdio.h>

int main() {
    int arr[5];
    int i, temp;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse in place
    for (i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[5 - 1 - i];
        arr[5 - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

