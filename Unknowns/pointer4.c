// Linear search in C


#include <stdio.h>


void isFound(int *arr,int rows,int cols,int target) {
	for(int i=0;i<rows;i++) {
		for(int j=0;j<cols;j++) {
		 if(*(arr+i*cols+j) == target) {
			printf("The number %d is found at [%d][%d]",target,i,j);
			return;// Exiting after finding it.......................
	     	}
		}
	} 
	
	printf("The number not found");
}



int main() {
	int n;
	int array[3][3] = {
	{23,56,780},
	{320,4005,65},
	{120,320,89}
	};
	printf("*********************Linear Search*********************************************\n\n");
	printf("Enter a number:");
	scanf("%d",&n);
	isFound(&array[0][0],3,3,n);
	return 0;
}