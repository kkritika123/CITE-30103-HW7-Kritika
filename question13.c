#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0, digits = 0;

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);  // read full line including spaces

    while (str[i] != '\0') {
        // Check for vowels (case-sensitive)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {

            vowels++;
        }
        // Check for digits
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        // Check for consonants (alphabet letters that are not vowels)
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}

