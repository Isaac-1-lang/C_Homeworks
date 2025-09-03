#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
    int z;
};

int main() {
    // Declare a structure variable of type Point
    struct Point pt;
    
    // Declare a pointer to the structure and assign it the address of the pt variable
    struct Point *ptr = &pt;

    // Assign values to the structure fields
    ptr->x = 3;
    ptr->y = 5;
    ptr->z = 12;

    // Print the initial values
    printf("Initial values: (%d, %d, %d)\n", ptr->x, ptr->y, ptr->z);

    // Declare another pointer to the structure (also pointing to pt)
    struct Point *ptr1 = ptr;

    // Modify the values via ptr1
    ptr1->x = 45;
    ptr1->y = 34;
    ptr1->z = 12;

    // Print the modified values
    printf("Modified values: (%d, %d, %d)\n", ptr->x, ptr->y, ptr->z);

    return 0;
}
