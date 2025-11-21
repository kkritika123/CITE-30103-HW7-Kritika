#include <stdio.h>

int main() {
    char str[100];
    int i = 0, words = 0;

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);  // read full line

    // Count words
    while (str[i] != '\0') {
        // Check if current char is not a space AND next char is space or end
        if (str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0')) {
            words++;
        }
        i++;
    }

    printf("Word count = %d\n", words);

    return 0;
}

