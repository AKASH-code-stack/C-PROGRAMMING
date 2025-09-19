#include <stdio.h>

int main() {
    int a, b, sum;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate sum
    sum = a + b;

    // Check odd or even
    if (sum % 2 == 0) {
        printf("The sum %d is Even.\n", sum);
    } else {
        printf("The sum %d is Odd.\n", sum);
    }

    return 0;
}