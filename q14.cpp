#include <stdio.h>

int main() {
    int number;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if divisible by both 3 and 5
    if (number % 3 == 0 && number % 5 == 0) {
        printf("The number is divisible by both 3 and 5.\n");
    } else {
        printf("The number is NOT divisible by both 3 and 5.\n");
    }

    return 0;
}