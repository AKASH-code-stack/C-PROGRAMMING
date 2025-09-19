#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find and display the smallest number
    if (num1 < num2) {
        printf("%d is the smallest number.\n", num1);
    } else {
        printf("%d is the smallest number.\n", num2);
    }

    return 0;
}