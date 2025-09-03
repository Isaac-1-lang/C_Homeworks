#include <stdio.h>
#include <stdlib.h>
// This includes the use of double pointing variables.....
int main() {
    int arr[10];
    int *ptr1 = arr; // Correct initialization
    int **ptr2 = &ptr1; // Initialize ptr2 to point to ptr1

    printf("Enter 10 Numbers in an array\n");

    // Input numbers into the array
    for (int i = 0; i < 10; i++) {
        scanf("%d",*(ptr2+i));
    }
     printf("The fifth elements");
     printf("Value: %d, Address: %p\n", *(ptr2+4), (ptr2+4));
    return 0;
}
