#include <stdio.h>

// Define a union that can store an array of integers
union ArrayUnion {
    int intArray[5];  // Array of integers
    int singleInt;    // Single integer (to demonstrate shared memory)
};

int main() {
    // Declare a union variable
    union ArrayUnion data;

    // Populate the array in the union
    printf("Enter 5 integers for the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data.intArray[i]);
    }

    // Print the array from the union
    printf("\nThe array stored in the union is:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", data.intArray[i]);
    }
    printf("\n");

    // Demonstrate that the union shares memory
    printf("\nDemonstrating shared memory in the union:\n");
    data.singleInt = 99;  // Assign a value to the single integer member
    printf("After assigning 99 to singleInt, the first element of intArray is: %d\n", data.intArray[0]);

    return 0;
}