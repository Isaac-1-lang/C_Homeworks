#include <stdio.h>
int arrModify(int *arr,int size) {
	for(int i=0;i<size;i++) {
		*(arr+i) = *(arr+i) * 3;
	}
	
	//return value * 3;
}
int main() {
	int numbers[10];
	int* ptr=&numbers;
	for(int i=0;i<10;i++) {
		ptr[i]= i;
	}
	for(int i=0;i<10;i++) {
		printf("Value: %d\n",ptr[i]);
	}
	int array[10] = {12,40,56,78,30,45,67,90,20,10};
	arrModify(array,10);
	for(int i=0;i<10;i++) {
		    int modifiedArray = 
			printf("%d\n",array[i]);
	}
	
	return 0;
}