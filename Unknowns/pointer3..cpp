// Inputting and printing elements using pointers

#include <stdio.h>


int main() {
	int arr[5] = {230,4,303,432,432};
	int *ptr = arr;
	int emptyArr[5];
	int *ptr2 = emptyArr;
	for(int i=0;i<5;i++) {
		*(ptr2+i) = *(ptr+i);
	}
	for(int i=0;i<5;i++) {
		printf("The value is: %d\n",*(ptr2+i));
	}
	

}