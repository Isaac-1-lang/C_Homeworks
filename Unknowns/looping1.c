#include <stdio.h>

// Function to calculate the average of six numbers
int average(int numbers[], int size) {
    int sum = 0;
    for (int index = 0; index < size; index++) {
        sum += numbers[index];
    }
    return sum / size;
}

int main() {
    int numbers[6];
    int avg;

    // Input: Reading six numbers
    printf("Enter six numbers:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate average
    avg = average(numbers, 6);

    // Output: Display the average
    printf("The average of the numbers is: %d\n", avg);

    return 0;
}
