#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a 3-digit number
    if (num >= 100 && num <= 999) {
        printf("The number %d is a 3-digit number.\n", num);
    } else if (num <= -100 && num >= -999) {
        // For negative 3-digit numbers
        printf("The number %d is a 3-digit number.\n", num);
    } else {
        printf("The number %d is not a 3-digit number.\n", num);
    }

    return 0;
}