#include <stdio.h>


int originalArray(int arr[],int arr2[],int n) {
	for(int i=0;i<n;i++) {
		arr2[i]= arr[i];
	}
}


int main() {
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n],arr1[n];
	printf("Enter elements\n");
	for(int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	originalArray(arr,arr1,n);
	printf("Original array\n");
	for(int i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("New array\n");
		for(int i=0;i<n;i++) {
		printf("%d ",arr1[i]);
	}
	printf("\n");
	return 0;
}