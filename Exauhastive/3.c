#include <stdio.h>

int main() {
    int arr[100]; // Array to store elements (up to 100)
    int n, i, sum = 0;
    
    // Input the number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    // Input n elements
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to the sum
    }
    
    // Print the sum
    printf("\nSum of all elements stored in the array is: %d\n", sum);
    
    return 0;
}