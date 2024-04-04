#include <stdio.h>

int main() {
    int month, year, days;

    // Prompt the user to enter the month and year
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    // Check the month and calculate the number of days accordingly
    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            days = 30;
            break;
        case 2: // February
            // Check if it's a leap year or not
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; // Leap year, February has 29 days
            } else {
                days = 28; // Not a leap year, February has 28 days
            }
            break;
        default:
            printf("Invalid month!\n");
            return 1; // Exit with error
    }

    printf("Number of days in month %d of year %d is: %d\n", month, year, days);

    return 0;
}
