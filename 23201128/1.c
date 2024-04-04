#include <stdio.h>

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check which number is greater
    if (num1 > num2) {
        printf("Maximum number is: %d\n", num1);
    } else {
        printf("Maximum number is: %d\n", num2);
    }

    return 0;
}
