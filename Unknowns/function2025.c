#include <stdio.h>

#include <math.h>

#include <string.h>


int addNum(int n1, int n2) {
    return n1 + n2;
}

int multiplyNum(int n1, int n2) {
    return n1 * n2;
}

int divNum(int n1, int n2) {
    if (n2 != 0) {
        return n1 / n2;
    } else {
        printf("Error! Division by zero.\n");
        return 0; // Return 0 if there's a division by zero
    }
}
// function to swap the elements of an array
int swapNumber(number2,number1) {
	return number2,number1;
} 

int diffNum(int n1, int n2) {
    return n1 - n2;
}

int squareNumber(int n) {
    return n * n;
}
// If even or odd number
int isOdd(int number) {
	if(number % 2==0) {
		return 1;
	} else {
		return 0;
	}
}
int main() {
	int number = 707;
    int n = 200;
    int n1 = 20;
    int n2 = 40;
    int number1 = 34;
    int number2 = 45;
    
    printf("The number %d \n",isOdd(number));
    printf("The elements between swapping are:%d and %d", number1, number2);
    printf("The sum of %d and %d is %d.\n", n1, n2, addNum(n1, n2));
    printf("The quotient of %d and %d is %d.\n", n1, n2, divNum(n1, n2));
    printf("The product of %d and %d is %d.\n", n1, n2, multiplyNum(n1, n2));
    printf("The difference of %d and %d is %d.\n", n1, n2, diffNum(n1, n2));
    printf("The square of %d is %d.\n", n, squareNumber(n));

    return 0;
}
