#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is divisible by both 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("%d is divisible by both 5 and 11.\n", num);
    } else {
        printf("%d is not divisible by both 5 and 11.\n", num);
    }

    return 0;
}
