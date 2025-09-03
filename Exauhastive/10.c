#include <stdio.h>

int main() {
    int n, oddCount = 0, evenCount = 0;
    
    // User input: Number of elements
    printf("Input the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], odd[n], even[n];

    // User input: Array elements
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Separate odd and even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount] = arr[i];
            evenCount++;
        } else {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }

    // Output the even numbers
    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Output the odd numbers
    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
