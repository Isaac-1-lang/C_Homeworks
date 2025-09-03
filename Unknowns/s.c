#include <stdio.h>

void swap(int *a,int *b) {
	int temp = *a;
	*a=*b;
	*b=temp;
}


void selection(int arr[],int length) {
	for(int i=0;i<length-1;i++) {
		int minIndex = i;
		for(int j=i+1;j<length;j++) {
			if(arr[j]<arr[minIndex]) {
				minIndex = j;
			}
		}
		swap(&arr[i],&arr[minIndex]);
	
	}
}

int  main() {
	int array[] = {12,23,56,43,2112,4340,-12,44434,13,64,32,12};
	int length = sizeof(array)/sizeof(array[0]);
	selection(array,length);
	for(int i=0;i<length;i++) {
		printf("%d ",array[i]);
	}
	return 0;
}