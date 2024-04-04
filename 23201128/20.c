#include <stdio.h>

int main() {
    float basicSalary, grossSalary;
    float hra, da;

    // Prompt the user to enter the basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on the basic salary
    if (basicSalary <= 10000) {
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
    } else {
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    // Display the gross salary
    printf("Gross salary: %.2f\n", grossSalary);

    return 0;
}
