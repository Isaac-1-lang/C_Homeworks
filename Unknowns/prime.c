// checking for primality


#include <stdio.h>
#include <math.h>
#include <stdbool.h>


bool isPrime(int number) {
	if(number<=1) {
		return false;
	} else {
		for(int i=number-1;i>=number/2;i--) {
			if(number%i==0) {
			    return false;
			} else {
				return true;
			}
		}
	}
}

int main() {
	int number;
	printf("Enter a number : ");
	scanf("%d",&number);
	if(isPrime(number)) {
		printf("The number is prime");
	} else {
		printf("The number is not prime");
	}
	return 0;
	
	return 0;
}