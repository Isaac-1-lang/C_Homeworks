#include <stdio.h>

int main() {
    int n;
    
    // User input: Number of elements
    printf("Input the number of elements to be stored in both arrays: ");
    scanf("%d", &n);

    int n1 = n * 2;
    int arr1[n], arr2[n], arr3[n1];

    // User input: Array elements for arr1
    printf("Input %d elements in the array 1:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // User input: Array elements for arr2
    printf("Input %d elements in the array 2:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr2[i]);
    }

    // Merging arr1 and arr2 into arr3
    for (int i = 0; i < n; i++) {
        arr3[i] = arr1[i];  // Copy arr1 to arr3
    }
    for (int i = n; i < n1; i++) {
        arr3[i] = arr2[i - n];  // Copy arr2 to arr3
    }

    // Insertion Sort in descending order
    for (int i = 1; i < n1; i++) {
        int key = arr3[i];
        int j = i - 1;
        
        // Move elements of arr3[0..i-1], that are smaller than key, to one position ahead
        // of their current position (descending order)
        while (j >= 0 && arr3[j] < key) {
            arr3[j + 1] = arr3[j];
            j = j - 1;
        }
        arr3[j + 1] = key;
    }

    // Printing the sorted array in descending order
    printf("All elements in descending order using Insertion Sort:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
