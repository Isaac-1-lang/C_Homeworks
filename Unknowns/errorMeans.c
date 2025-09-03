#include <stdio.h>

// Corrected function with proper return type and parameter declaration
void multiply3(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        *(ptr + i) = *(ptr + i) * 3;
    }
}

int main() {
    int numbers[5] = {12, 34, 50, 78, 80};

    // Call the function
    multiply3(numbers, 5);

    // Print the modified array
    for (int i = 0; i < 5; i++) {
        printf("%d\t\t", numbers[i]);
    }

    return 0;
}
