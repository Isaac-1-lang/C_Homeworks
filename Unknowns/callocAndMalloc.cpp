#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Allocate memory for 5 integers
    arr = (int *)calloc(n,sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(int i=0;i<n;i++) {
    	arr[i]=i;
	}

    // Print the initial values of the allocated memory
    printf("Initial values in the allocated memory:\n");
    for (int i = 0; i < n; i++) {
        printf("Value: arr[%d] = %d,Address:%p\n\n", i, arr[i],arr+i);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
