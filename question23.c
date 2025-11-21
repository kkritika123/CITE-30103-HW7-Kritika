#include <stdio.h>
#include <stdlib.h>   // for malloc and free

int main() {
    int n, i;
    int *arr;
    int sum = 0;
    float avg;

    printf("Enter how many integers: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {   // check if memory allocation failed
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Average = %.2f\n", avg);

    free(arr);   // release memory

    return 0;
}

