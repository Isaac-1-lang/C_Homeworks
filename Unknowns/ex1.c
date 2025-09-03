#include <stdio.h>
#include <string.h>
int main() {
	// Pointing to the integers
	int n = 12;
	int *ptr1 = &n;
	printf("The memory address of %d is %p\n",*ptr1,ptr1);
	//  Pointing to the floats
	float n1 = 890.54;
	float *ptr2 = &n1;
	printf("The memory address of %.2f is %p\n",*ptr2,ptr2);
	// Pointing to chars
	char letter = 'A';
	char *ptr3 = &letter;
	printf("The memory address of %c is %p\n",*ptr3,ptr3);
	return 0;
	
}