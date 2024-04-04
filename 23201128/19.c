#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float totalMarks, percentage;
    char grade;

    // Prompt the user to enter marks of five subjects
    printf("Enter marks of Physics: ");
    scanf("%f", &physics);
    printf("Enter marks of Chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks of Biology: ");
    scanf("%f", &biology);
    printf("Enter marks of Mathematics: ");
    scanf("%f", &mathematics);
    printf("Enter marks of Computer: ");
    scanf("%f", &computer);

    // Calculate total marks and percentage
    totalMarks = physics + chemistry + biology + mathematics + computer;
    percentage = (totalMarks / 500) * 100;

    // Determine the grade based on the percentage
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Display the percentage and grade
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
