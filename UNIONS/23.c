#include <stdio.h>

union DataTypes {  // Use struct instead of union to store multiple values
    int n;
    float f;
    double d;
    char c;
    char lc[12]; 
};

int main() {
    union DataTypes id; // Changed to struct

    printf("**** Different Data Types ******\n\n");

    // Integer input
    printf("Enter Age:");
    scanf("%d", &id.n);
    printf("You are %d years old\n", id.n);

    // String input
    printf("Enter Name:");
    scanf("%s", id.lc);
    printf("You are %s\n", id.lc);

    // Character input (with space before %c to remove newline issue)
    printf("Enter gender (M/F):");
    scanf(" %c", &id.c);
    printf("You are %c\n", id.c);

    // Double input
    printf("Enter doubled floating number:");
    scanf("%lf", &id.d);
    printf("You entered: %lf\n", id.d);

    // Float input
    printf("Enter Weight:");
    scanf("%f", &id.f);
    printf("You weigh %.1f\n Kilograms", id.f);

    return 0;
}
