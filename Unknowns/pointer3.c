// POINTERS TO REPLACE SOME ELEMENTS IN MY ARRAY
#include <stdio.h>
//int max(int *ptr2) {
//	int numbers[5];
//	*ptr2=&numbers;
//	*ptr2[0] = 45;
//	* 
//	
//} 
int manPulate(int arr[10]) {
//	int arr[10]= {20,23,45,6,89,56,78,90,45,10};
//	int *ptr = &arr[5];
//	int *ptr1 = &arr[3];
//	*ptr = 34;
//	*ptr1 = 48;
	
	
//	arr[5]= *ptr;
//	arr[3]= *ptr;
     	for(int i=0;i<10;i++) {
		arr[i]=  arr[i] * 2;
	}
//     return arr[2] + arr[3];
//	return 0;
}
int main() {
	int arr[10]= {20,40,60,70,80,90,110,130,150,160};
	manPulate(arr);
	for(int i=0;i<10;i++) {
		printf("%d\n",arr[i]);
	}
//	printf("%d",manPulate());
	return 0;
}