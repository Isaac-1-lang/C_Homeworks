#include <stdio.h>

int main() {
    int n;

    // User input: Number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    // User input: Array elements
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min to the first element
    int max = arr[0];
    int min = arr[0];

    // Find the maximum and minimum elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Output the result
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}
