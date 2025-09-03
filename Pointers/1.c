#include <stdio.h>
#include <math.h>
#include <string.h> // Needed for strcpy()

int main() {
    // Using strings
    char Full_Name[] = "ISAAC"; // No need to specify size
    printf("My Name is: %s\n", Full_Name);

    // Using numbers
    int Numbers = 45;
    int *ptr1 = &Numbers; // Pointer to memory address of variable
    printf("The students in class are: %d students\n", *ptr1);

    // Using floating point numbers
    float Numbers1 = 45.453;
    float *ptr2 = &Numbers1;
    printf("The marks in class are: %.2f marks\n", *ptr2);

    // Using double floating point numbers
    double Numbers2 = sqrt(2);
    double *ptr3 = &Numbers2;
    printf("The square root of 2 is: %.7lf\n", *ptr3);

    // Portable way to pause execution
    printf("Press Enter to exit...\n");
    getchar();// this is used to pause the program

    return 0;
}
