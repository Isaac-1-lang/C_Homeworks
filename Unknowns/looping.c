#include <stdio.h>

int main() {
    int largest, smallest, numbers[6], i;

    // Input: Reading 6 numbers into the array
    printf("Enter six numbers:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize largest and smallest with the first element
    largest = smallest = numbers[0];

    // Process: Find largest and smallest numbers
    for (i = 1; i < 6; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Output: Print the results
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
