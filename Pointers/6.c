//Search for an element in an array using pointers.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int searchNumber(int *arr,int size,int target) {
	for(int i=0;i<size;i++) {
		if(*(arr+ i) == target) {
			return i;
		}
			return -1;
	}
}
int main() {
	int number[] = {20,20,20,20,20,25,30,2002,20,20,20,20,566,980,90};
	int size = sizeof(number) / sizeof(number[0]);
	int target;
	printf("Enter a number to search:");
	scanf("%d",&target);
	int index = searchNumber(number,size,target);
	if(index != -1) {
		printf("The number %d is found at index of %d\n",target,index);
	} else {
			printf("The number %d is not found in the array",target);
	}
	
  return 0;	
}