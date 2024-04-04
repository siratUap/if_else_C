#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // Prompt the user to enter the angles of the triangle
    printf("Enter the first angle: ");
    scanf("%d", &angle1);
    printf("Enter the second angle: ");
    scanf("%d", &angle2);
    printf("Enter the third angle: ");
    scanf("%d", &angle3);

    // Check if the sum of the angles is equal to 180
    if (angle1 + angle2 + angle3 == 180) {
        printf("The triangle with angles %d, %d, and %d is valid.\n", angle1, angle2, angle3);
    } else {
        printf("The triangle with angles %d, %d, and %d is not valid.\n", angle1, angle2, angle3);
    }

    return 0;
}
