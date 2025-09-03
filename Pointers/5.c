//Access elements of a two-dimensional array using pointers.
#include <stdio.h>
#include <stdlib.h>


int isFound(int arr[][10], int rows,int cols,int target,int *foundRow,int *foundCol) {
	for(int i=0;i<rows;i++) {
		for(int j=0;j<cols;j++) {
			if(arr[i][j] == target) {
				*foundRow = i;
				*foundCol = j;
				return 1;// It is foound!!!!!!!!!!!!!!!!!!!!!
			}
		}
	}
	return 0;
}


int main() {
	int number[10][10] = {
		{20, 25, 30, 566, 980, 90},
        {25, 25, 30, 5766, 8901, 290},
        {25, 25, 30, 4656, 80, 70},
        {270, 25, 3570, 56, 809, 90},
        {209, 25, 5630, 56, 80, 90},
        {200, 25, 630, 56, 80, 990},
        {26, 25, 830, 56, 80, 90},
        {29, 25, 390, 56, 80, 90},
        {267, 2005, 30, 56, 80, 90},
        {345, 205, 30, 56, 80, 90},
	};
	
	int target;
	int row,col;
	printf("Enter a number to search: ");
	scanf("%d",&target);
	
	if(isFound(number,10,6,target,&row,&col)) {
		printf("Elementt %d is found at position of (%d,%d)\n",target, row,col);
	} else {
		printf("Element %d not found",target);
	}
	
	
	
	return 0;
}