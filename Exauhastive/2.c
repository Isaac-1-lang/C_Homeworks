#include <stdio.h>

int main() {
    int arr[100]; // Array to store elements (up to 100)
    int n, i;
    
    // Input the number of elements
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    
    // Input n elements
    printf("Input %d number of elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    // Print the original array
    printf("\nThe values store into the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    // Print the array in reverse
    printf("\nThe values store into the array in reverse are:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}