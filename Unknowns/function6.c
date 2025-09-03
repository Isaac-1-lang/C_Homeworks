#include <stdio.h>
int numberFactorial(int number) {
	if(number == 0) {
		return 1;
	} else {
		return number * numberFactorial(number-1);
	}
}
int main() {
	int number=7;
	printf("The factorial of %d is %d\n", number,numberFactorial(number));
	return 0;
}