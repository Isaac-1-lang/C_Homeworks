#include <stdio.h>

// Recursive factorial function
int factorial(int n) {
    if (n == 0 || n == 1) { // Base case
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number = 5;
    int Factorial = factorial(number);
    printf("Factorial of %d is %d\n", number, Factorial);
    return 0;
}
