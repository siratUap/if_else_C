#include <stdio.h>

int main() {
    int weekNumber;

    // Prompt the user to enter the week number
    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);

    // Check the week number and print the corresponding day of the week
    switch (weekNumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid week number! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
