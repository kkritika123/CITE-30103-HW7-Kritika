#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, isPalindrome = 1;

    printf("Enter a word (no spaces): ");
    scanf("%s", str);

    while (str[i] != '\0') {
        i++;
    }

    j = i - 1;  // last index

    for (int k = 0; k < i / 2; k++) {
        if (str[k] != str[j - k]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

