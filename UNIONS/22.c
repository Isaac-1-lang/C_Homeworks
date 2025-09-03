#include <stdio.h>

// Define a union to hold complex number parts
union ComplexNumber {
    struct {
        double real;
        double imaginary;
    } parts;
};

int main() {
    union ComplexNumber num;

    // Assign values
    num.parts.real = 3;
    num.parts.imaginary = 2;

    // Display values
    printf("Complex number: %.2f\n + %.2f i", num.parts.real,num.parts.imaginary);
   // printf("Imaginary part: %.2f\n", num.parts.imaginary);
    
    

    return 0;
}
