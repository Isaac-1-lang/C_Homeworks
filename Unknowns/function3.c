#include <stdio.h>
int main() {
	float number;
	printf("Square root of:");
	scanf("%f",&number);
	float squareRoot=cbrt(number);
	printf("The squareroot of %.1f is %.1f", number,squareRoot);
	return 0;
}