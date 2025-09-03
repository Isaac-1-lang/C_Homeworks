#include <stdio.h>
int main() {
	double number,squareRoot;
	printf("Enter a number:");
	scanf("%lf",&number);
	squareRoot=sqrt(number);
	printf("The square root of %lf: % lf ",number,squareRoot);
}