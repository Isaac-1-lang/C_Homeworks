#include <stdio.h>

int main() {
    int arr[10]; // Array to store 10 elements
    int i;
    
    // Input 10 elements
    printf("Input 10 elements in the array:\n");
    for(i = 0; i < 10; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    // Print the elements
    printf("\nElements in array are: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}