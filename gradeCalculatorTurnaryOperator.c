#include <stdio.h>

int main() {
    float marks;
    char grade;

    // Input marks
    printf("Enter your marks (0-100): ");
    scanf("%f", &marks);

    // Validate input
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1;
    }

    // Determine grade using ternary operators
    grade = (marks >= 90) ? 'A' :
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' :
            (marks >= 60) ? 'D' :
            (marks >= 50) ? 'E' : 'F';

    // Output the result
    printf("Your grade is: %c\n", grade);

    return 0;
}
