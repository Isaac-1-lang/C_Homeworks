#include <stdio.h>

int factorial(int n) {
    if (n == 0) {        // Base Case
        return 1;
    } else {             // Recursive Case
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
