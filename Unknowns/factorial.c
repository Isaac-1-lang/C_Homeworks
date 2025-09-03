// Factorial prrinting


#include <stdio.h>



int factorial(int n) {
	if(n<=1) {
		return 1;
	} else {
		return n*factorial(n-1);
	}
}


int main() {
	int numbe;
	
	printf("Enter number: ");
	scanf("%d",&numbe);
	int number = factorial(numbe);
	printf("The factorial if %d is %d",numbe,number);
	return 0;
}