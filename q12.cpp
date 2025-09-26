#include <stdio.h>

int main() {
    int number, lastDigit;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Get the last digit (absolute value to handle negatives)
    lastDigit = number % 10;
    if (lastDigit < 0) {
        lastDigit = -lastDigit;  // Ensure the last digit is positive
    }

    // Check if the last digit is even or odd
    if (lastDigit % 2 == 0) {
        printf("The last digit %d is even.\n", lastDigit);
    } else {
        printf("The last digit %d is odd.\n", lastDigit);
    }

    return 0;
}