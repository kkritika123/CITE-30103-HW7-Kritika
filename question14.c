#include <stdio.h>

int main() {
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Enter first string (no spaces): ");
    scanf("%s", str1);

    printf("Enter second string (no spaces): ");
    scanf("%s", str2);

    // Move i to the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Copy str2 into str1 manually
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0'; // end the new combined string

    printf("Concatenated string: %s\n", str1);

    return 0;
}

