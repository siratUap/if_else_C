#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss;

    // Prompt the user to enter the cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    profitOrLoss = sellingPrice - costPrice;

    // Check if it's a profit or a loss
    if (profitOrLoss > 0) {
        printf("Profit: $%.2f\n", profitOrLoss);
    } else if (profitOrLoss < 0) {
        printf("Loss: $%.2f\n", -profitOrLoss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
