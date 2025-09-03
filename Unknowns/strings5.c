#include <stdio.h>

int main() {
    // Bubble sorting
    int numbers[10] = {1, 3, 3, 3, 45, 67, 75, 89, 23, 15};
    int temp;
    int length = 10;

    // Bubble sort
    for (int i = 0; i < length - 1; i++) {         // Fixed outer loop
        for (int j = 0; j < length - i - 1; j++) { // Fixed inner loop
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("The ascending order of the array is:\n");
    for (int v = 0; v < length; v++) { // Fixed indexing
        printf("numbers[%d] = %d\n", v, numbers[v]);
    }

    return 0;
}
