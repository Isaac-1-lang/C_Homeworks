#include <stdio.h>

// Function to swap two integers using pointers
void swappingInts(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    int num1, num2;

    printf("Enter 2 numbers:\t");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("Before swapping: %d %d\n", num1, num2);

    // Call function correctly
    swappingInts(&num1, &num2);

    printf("After swapping: %d %d\n", num1, num2);

    return 0;
}
