#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Prompt the user to enter the lengths of the sides
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);
    printf("Enter the length of side 2: ");
    scanf("%f", &side2);
    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    // Check if the triangle is valid
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("The triangle with side lengths %.2f, %.2f, and %.2f is valid.\n", side1, side2, side3);
    } else {
        printf("The triangle with side lengths %.2f, %.2f, and %.2f is not valid.\n", side1, side2, side3);
    }

    return 0;
}
