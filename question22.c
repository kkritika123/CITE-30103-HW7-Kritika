#include <stdio.h>

int main() {
    int arr[5];
    int *p = arr;  // pointer to first element
    int i;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", (p + i));   // using pointer arithmetic instead of arr[i]
    }

    printf("Array elements printed using pointer arithmetic:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(p + i));  // dereferencing pointer to print values
    }
    printf("\n");

    return 0;
}

