#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base cases: F(0) = 0, F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

int main() {
	// limits for the fibonacci terms
    int terms;

    // Input: number of Fibonacci terms to print
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Number of terms must be greater than 0.\n");
        return 1;
    }

    printf("Fibonacci series:\n");

    // Print the Fibonacci series
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
