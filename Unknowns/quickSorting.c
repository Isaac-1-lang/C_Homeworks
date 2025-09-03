// Implementation of quick sort in C


#include <stdio.h>
#include <stdlib.h>


// swapping elements if possible


void swap(int *a,int *b) {
	int temp = *a;
	*a=*b;
	*b=temp;
}

// getting subarrays
// It depends on whether we took the pivot as the firt or the last element in the array
//
int partition(int arr[],int low,int high) {
	int pivot = arr[high];// here the pivot is the last element
	int i=low -1;
	for(int j=low;j<high;j++) {
		if(arr[j] < pivot) {
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i + 1],&arr[high]);
	return i+1;
}

void quickSort(int arr[],int low,int high) {
	if(low < high) {
		int pi = partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}


int main() {
	int arr[] = {10,23,3423,34320,2340,320,213,1232,423};
	int n= sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,n-1);
	for(int i=0;i<n;i++) {
		printf("%d\t",arr[i]);
	}
}