#include <stdio.h>

// bubble sort

void bubbleSort(int arr[],int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=0;j<n-i-1;j++) {
			if(arr[j]>arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main() {
	int array[] = {20,-12,540,-12,43,4,543,6546};
	int length = sizeof(array)/sizeof(array[0]);
	bubbleSort(array,length);	
	for(int i=0;i<length;i++) {
		printf("%d ",array[i]);
	}
	return 0;
}