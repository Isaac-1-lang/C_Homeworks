#include <stdio.h>

// Function to calculate the sum of an array
int sum(int arr[10]) {
    int addition = 0;  // Initialize sum to 0
    for (int j = 0; j < 10; j++) {
        addition += arr[j];
    }
    return addition;
}

int average(int sum) {
	int average = sum/10;
	return average;
}

int main() {
    int arr[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);  // Use & to pass the address of arr[i]
    }

    int result = sum(arr);  // Call the sum function
    printf("The sum is %d\n", result);
    int mean = average(result);
    printf("The average is %d",mean);

    return 0;
}