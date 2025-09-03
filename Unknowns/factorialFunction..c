#include <stdio.h>
int recursiveFunction(number) {
	return recursiveFunction(number) * recursiveFunction(number - 1);
	return 0;
}
int main() {
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	int factorial = recursiveFunction(number);
	printf("The factorial number of %d is %d", number,factorial);
	return 0;
}