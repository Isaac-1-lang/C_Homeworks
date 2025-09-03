// Insertion sort

#include <stdio.h>

void insert(int arr[],int length) {
	for(int i=1;i<length;i++) {
		int key = arr[i];
		int j=i-1;
		while(j>=0 && arr[j] > key) {
//			key = arr[j];
			arr[j+1]=arr[j];
			j--;
		}
	}
}



int main() {
	int array[] = {23,120,-42,65,7,12,324};
	int length = sizeof(array)/sizeof(array[0]);
	insert(array,length);
    for(int i=0;i<length;i++) {
		printf("%d ",array[i]);
	}
}