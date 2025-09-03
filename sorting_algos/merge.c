#include <stdio.h>
#include <stdlib.h>

// Function to merge two sorted subarrays
void merge(int arr[], int left, int mid, int right) {
    // Calculate sizes of two subarrays to be merged
    int size1 = mid - left + 1;    // Size of left subarray
    int size2 = right - mid;       // Size of right subarray

    // Create temporary arrays to store the divided parts
    int* leftArr = (int*)malloc(size1 * sizeof(int));
    int* rightArr = (int*)malloc(size2 * sizeof(int));

    // Copy data to temporary arrays
    for (int i = 0; i < size1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < size2; j++)
        rightArr[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0;      // Initial index of left subarray
    int j = 0;      // Initial index of right subarray
    int k = left;   // Initial index of merged subarray

    while (i < size1 && j < size2) {
        // Compare elements from both arrays and merge in sorted order
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of leftArr[] if any
    while (i < size1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy remaining elements of rightArr[] if any
    while (j < size2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

    // Free the temporary arrays
    free(leftArr);
    free(rightArr);
}

// Main merge sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Find the middle point to divide the array into two halves
        int mid = left + (right - left) / 2;

        // Recursively sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("Sorted array: ");
    printArray(arr, arr_size);

    return 0;
}
