#include <stdio.h>

int maxNumber(int *arr, int size) {
    int *ptr = arr;  // Pointer to the start of the array
    int max = *ptr;  // Set the first element as the initial maximum

    // Loop through the array using the pointer
    for (int i = 1; i < size; i++) {
        ptr++;  // Move the pointer to the next element
        if (*ptr > max) {
            max = *ptr;
        }
    }
    
    return max;  // Return the maximum value
}
//int reversing(int *arr,int size,array) {
//	int *ptr = arr;
//	int *first = *ptr;
//	for(int i=size-1;i<=0;i++) {
//		printf("%d",array[i])
//	}
//	
//}

int main() {
    int arr[10] = {32, 54, 12, 89, 67, 45, 90, 21, 76, 58,457,679};
    int maxVal = maxNumber(arr, 12);  // Call the function with the array and size
    printf("The maximum number is: %d\n", maxVal);  // Output the result
    return 0;
}
// Size is used to find the number of array values's numberb