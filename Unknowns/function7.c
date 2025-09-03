#include <stdio.h>
//int arrMan(int arr[5]) {
//	return arr[2]=34,arr[4]=45;
//}
int arrMan(int arr2[5],int *ptr)  {
      arr2[10] = {20,22,40,60,5,45,780};
	  *ptr = &arr2;
}
int main() {
//	int arr2[5]= {12,14,16,18,20,22,24};
//	printf("Initial values:\n");
//	for(int i=0;i<5;i++) {
//		printf("%d",arr[i]);
//	}
//	printf("final values:\n");
//		for(int i=0;i<5;i++) {
//		printf("%d",arrMan(arr[i]));
//	}
//	int numbers[10]= {23,22,14,40,2030,34,607,780,124,560};
//	int *ptr = numbers;
//	for(int i=0;i<10;i++) {
//		printf("%d",*(ptr+1));
//	}
    int number[5]= {23,50,56,780,890};
    int *ptr1=&number;
    for(int i=5;i<1;i--) {
    	printf("%d",arrMan((20,22,34,45,7),));
	}
	return 0;
}