#include <stdio.h>
#include <string.h>
int next(int *arr) {
	for(int i=0;i<=4;i++) {
		printf("%d\t",*(arr+i));
	}
}
int main() {
	printf("Array elements are:");
	int number[5] = {23,6060,640,230,34};
	next(number);
		printf("\n\n\n");
	int number2 = 32322;
	printf("The original number %d\n",number2);
	int *ptr1 = &number2;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	number2 = ***ptr3 * 2;
	printf("The last number is %d\n",number2);
	return 0;
}