#include <stdio.h>
int sumOf(float n1,float n2) {
	return n1 + n2;
	return 0;
}
int productOf(float n1,float n2) {
	return n1 * n2;
	return 0;
}
int main() {
	float n1,n2;
	printf("Enter first number:");
	scanf("%f",&n1);
	printf("Enter second number:");
	scanf("%f",&n2);
	float sum= sumOf(n1,n2);
	printf("The result of adding %.2f and %.2f is %.2f", n1,n2,sum);
		float n3,n4;
	printf("Enter first number:");
	scanf("%f",&n1);
	printf("Enter second number:");
	scanf("%f",&n2);
	float product= productOf(n3,n4);
	printf("The result of product %.2f and %.2f is %.2f", n3,n4,product);
	return 0;
}
