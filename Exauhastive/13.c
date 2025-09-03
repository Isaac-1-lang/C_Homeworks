#include <stdio.h>

int main() {
    int n, value, pos = 0;

    // Input: Size of the array
    printf("Input the size of array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Extra space for the new element

    // Input: Array elements in ascending order
    printf("Input %d elements in the array in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Input: New value to insert
    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    // Find the correct position to insert the new value
    while (pos < n && arr[pos] < value) {
        pos++;
    }

    // Shift elements to make space for the new value
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[pos] = value;

    // Output: Array before and after insertion
    printf("The existing array list is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nAfter insertion, the list is:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
