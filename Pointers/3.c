#include <stdio.h>

// Define a structure
struct person {
    int n;
    int m;
    int z;
};

// Declare an array of structures
struct person persons[] = {
    {12, 430, 35},
    {438, 22, 32},
    {89, 101, 320},
    {67, 432, 12}
};

int main() {
    // Correctly access elements in the structure array
    printf("%d %d %d\n", persons[0].n, persons[0].m, persons[1].z);
    return 0;
}
