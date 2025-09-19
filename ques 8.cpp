#include <stdio.h>

int main() {
    int num, lastDigit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the last digit
    lastDigit = num % 10;

    // Check divisibility by 3
    if (lastDigit % 3 == 0) {
        printf("The last digit %d is divisible by 3.\n", lastDigit);
    } else {
        printf("The last digit %d is NOT divisible by 3.\n", lastDigit);
    }

    return 0;
}