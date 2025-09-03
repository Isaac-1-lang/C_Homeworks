#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Demonstrate pointer arithmetic by incrementing a pointer to access the next
//element in an array.
void accessNext(int *arr) {
	for(int i=0;i<10;i++) {
      printf("Element %d is: %d ",i,*(arr+i));		
	}
}
//Write a program to use a pointer to a pointer to access and modify values.
void modifyElements(int *arr,int size) {
	for(int c=0;c<size;c++) {
		*(arr+c) = *(arr+c) * 2;
		printf("%d\n",*(arr+c));
	}
}
int main() {
	int arr[10] = {12,30,56,70,890,430,86,560,45,100};
	int *ptr = &arr;// Accessing the first element in an array
	printf("Accessing array elements using pointer arithmetic\n\n");
	accessNext(ptr);
	int arr1[20] = {10,20,30,40,50,60,70,80,90,100,78,9,99,345,7900,340,200,120,34,80};
	int *ptr2 = &arr1;
	printf("Multiply by 2\n");
	modifyElements(ptr2,20);
	
	
	
	
	 printf("Press Enter to exit...\n");
    getchar();
	return 0;
	
}
