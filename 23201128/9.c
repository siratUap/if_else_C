#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    // If the character is not an alphabet or a digit, it is considered a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
