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

    // Check if the triangle is equilateral, isosceles, or scalene
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is an equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is an isosceles triangle.\n");
    } else {
        printf("The triangle is a scalene triangle.\n");
    }

    return 0;
}
