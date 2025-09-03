#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    if (num == 2) return 1; // 2 is the only even prime number
    
    for (int i = 2; i * i <= num; i++) { // Loop up to sqrt(num)
        if (num % i == 0)
            return 0; // If divisible, it's not a prime number
    }
    
    return 1; // If no factors found, it's prime
}

int main() {
    int num;
    
    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is prime
    if (is_prime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    
    return 0;
}
