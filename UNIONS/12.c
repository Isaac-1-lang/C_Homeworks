#include <stdio.h>

// Function to calculate sum
int sum(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

// Function to calculate average
float average(int arr[], int n) {
    return (float)sum(arr, n) / n;
}

// Function pointers for finding max and min
int find_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int find_min(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

// Recursive function to sort the array (Selection Sort)
void recursive_sort(int arr[], int n, int index) {
    if (index == n - 1)
        return;
    
    int min_index = index;
    for (int i = index + 1; i < n; i++) {
        if (arr[i] < arr[min_index])
            min_index = i;
    }
    
    if (min_index != index) {
        int temp = arr[index];
        arr[index] = arr[min_index];
        arr[min_index] = temp;
    }
    
    recursive_sort(arr, n, index + 1);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Sum: %d\n", sum(arr, n));
    printf("Average: %.2f\n", average(arr, n));
    
    int (*max_ptr)(int[], int) = find_max;
    int (*min_ptr)(int[], int) = find_min;
    
    printf("Maximum: %d\n", max_ptr(arr, n));
    printf("Minimum: %d\n", min_ptr(arr, n));
    
    recursive_sort(arr, n, 0);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
