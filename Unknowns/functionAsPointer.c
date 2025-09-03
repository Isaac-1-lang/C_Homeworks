#include <stdio.h>
#include <stdlib.h>

int add(int *a, int *b) {
    int *c = (int *)malloc(sizeof(int));  // Allocate memory dynamically
    if (c == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    *c = *a + *b;
    return c; // Returning the actual values stored in the pointer c.
}

int main() {
    int x = 20;
    int y = 32;

    int *z = add(&x, &y);  // Pass addresses of x and y
    if (z != NULL) {
        printf("Sum of %d and %d is %d\n", x, y, *z);
        free(z);  // Free dynamically allocated memory
    }

    return 0;
}
