#include <stdio.h>

// Define a union to hold either an integer or a float
union toggled {
    int intNum;
    float floatNum;
};

// Function to toggle from integer to float
void toggleIntToFloat(union toggled *num) {
    // Involving type-casting from int to float
    num->floatNum = (float) num->intNum;
    printf("%.2f After toggling\n", num->floatNum);
}

// Function to toggle from float to integer
void toggleFloatToInt(union toggled *num) {
    // Involving type-casting from float to int
    num->intNum = (int) num->floatNum;
    printf("%d After toggling\n", num->intNum);
}

int main() {
    // Initialize the union with an int value
    union toggled num;
    
    // Set the integer value
    num.intNum = 12;
    printf("%d before toggling\n", num.intNum);

    // Toggle from int to float and print the result
    toggleIntToFloat(&num);
    
    // Set the float value
    num.floatNum = 12.3445;
    printf("%.2f before toggling\n", num.floatNum);

    // Toggle from float to int and print the result
    toggleFloatToInt(&num);

    return 0;
}
