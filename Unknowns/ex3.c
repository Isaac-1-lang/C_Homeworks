#include <stdio.h>
// for getting inputs
void getElements(int *ptr) {
	for(int i=0;i<7;i++) {
		scanf("%d",(ptr+i));
	}
}
// for printing array nums
void arrayElements(int *array) {
	for(int i=0;i<7;i++) {
		printf("%d\t",*(array+i));
	}
	printf("\n");
}
int main() {
	printf("Enter seven ints:\t");
	int numbers[7];
	getElements(numbers);
	printf("You entered");
	arrayElements(numbers);
	return 0;
	
}