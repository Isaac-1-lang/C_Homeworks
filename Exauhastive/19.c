// finding the determinant of the matrix
#include <stdio.h>
int find(int arr[3][3]) {
	return arr[0][0] * ((arr[1][1] * arr[2][2])) - ((arr[1][2] * arr[2][1]))
	       -arr[0][1] *((arr[1][0] * arr[2][2])) - ((arr[1][2] * arr[2][0]))
	       +arr[0][2] *((arr[1][0] * arr[2][1])) - ((arr[1][1] * arr[2][0]));
}

int main() {
	int matrix[3][3] = {
	{10,10,0},
	{20,20,0},
	{40,40,0},
	};
	printf("The determinant is %d ",find(matrix));
}