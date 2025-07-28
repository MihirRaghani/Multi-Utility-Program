#include <stdio.h>

int main() {
    int num, lastDigit, firstDigit;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;  // Get the last digit

    // Find the first digit
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }

    int sum = firstDigit + lastDigit;

    printf("The sum of the first and the last digit: %d\n", sum);

    return 0;
}
