#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    // Prompt the user to enter the coefficients of the quadratic equation
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the value of the discriminant
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // Two real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", root1, root2);
    } else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
