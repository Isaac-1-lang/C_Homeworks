#include <stdio.h>

// Function to calculate the factorial
int factorialOf(int num) {
    if (num == 1 || num == 0) {
        return 1;
    } else {
        return num * factorialOf(num - 1);
    }
}

int main() {
    int num;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and print the factorial
        printf("The factorial of %d is: %d\n", num, factorialOf(num));
    }

    return 0;
}
