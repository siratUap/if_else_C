#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is an uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    }
    // Check if the character is a lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    }
    // If the character is not a letter, print an appropriate message
    else {
        printf("%c is not a letter.\n", ch);
    }

    return 0;
}
