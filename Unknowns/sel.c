#include <stdio.h>

// selection sort

void swap(int *a,int *b) {
	int temp = *a;
	*a=*b;
	*b=temp;
}


void selectionSort(int arr[],int length) {
	for(int i=0;i<length-1;i++) {
		int minIndex = i;
		for(int j=i+1;j<length;j++) {
			if(arr[minIndex] > arr[j]) {
				minIndex =j;
			}
		}
		swap(&arr[i],&arr[minIndex]);
	}
}

void printing(int arr[],int length) {
	for(int i=0;i<length;i++) {
		printf("%d ",arr[i]);
	}
}

int main() {
	int arr[] = {2,-13,90,450,12,43,5,67};
	int length = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,length);
	printing(arr,length);
	return 0;
}