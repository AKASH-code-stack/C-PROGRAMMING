#include <stdio.h>

int main() {
    int num1, num2, difference;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the difference
    difference = num1 - num2;

    // Check if the difference is odd or even
    if (difference % 2 == 0) {
        printf("The difference (%d) is even.\n", difference);
    } else {
        printf("The difference (%d) is odd.\n", difference);
    }

    return 0;
}