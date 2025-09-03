#include <stdio.h>
int copyArr(int *arr,int *arr1,int size) {
	for(int i=0;i<4;i++) {
		*(arr1+i) = *(arr+i);
	}
}
int main() {
	int numbers[6] = {23,45,89,90,3440,34};
	int number2[4];
	copyArr(numbers,number2,6);
	
	// Printing copied elements
	for(int i=0;i<4;i++) {
		printf("%d\t\t",number2[i]);
	}
	return 0;
}