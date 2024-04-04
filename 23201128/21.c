#include <stdio.h>

int main() {
    float units, totalBill;

    // Prompt the user to enter the electricity units consumed
    printf("Enter the electricity units consumed: ");
    scanf("%f", &units);

    // Calculate the total bill based on the given conditions
    if (units <= 50) {
        totalBill = units * 0.50;
    } else if (units <= 150) {
        totalBill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        totalBill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Add a surcharge of 20% to the total bill
    totalBill *= 1.20;

    // Display the total electricity bill
    printf("Total electricity bill: Rs. %.2f\n", totalBill);

    return 0;
}
