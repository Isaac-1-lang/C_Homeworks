#include <stdio.h>

int main() {
    int n, count = 0;
    
    // User input: Number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n], checked[n];

    // Initializing checked array to 0 (not visited)
    for (int i = 0; i < n; i++) {
        checked[i] = 0;
    }

    // User input: Array elements
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Count duplicate elements and store them
    printf("Unique element(s)\n");
    for (int i = 0; i < n; i++) {
        if (checked[i] == 1) continue; // Skip already checked elements

        int occurrence = 1; // Count the occurrence of arr[i]

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                occurrence++;
                checked[j] = 1; // Mark as checked
            }
        }

        if (occurrence == 1) { // If found at least once, count as a duplicate
            count++;
          printf("%d ",arr[i]);
        } 
    } 

    printf("\nTotal number of duplicate elements found in the array is: %d\n", count);
    return 0;
}
