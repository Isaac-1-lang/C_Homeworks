#include <stdio.h>

void reversing(int arr[],int size) {
	int start=0,end=size-1,temp;
	while(start<end) {
		temp  = arr[start];
		arr[start] = arr[end];
		arr[end]  = temp;
		start++;
		end--;
	}
}




int main() {
	int arr[] = {21,23,45,60,32,21,32,3254,760,34};
	int size  = sizeof(arr)/sizeof(arr[0]);
	reversing(arr,size);
	for(int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}