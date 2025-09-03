// printing all elements from a matrix


#include <stdio.h>


int main() {
	int numbers[3][3] = {
	{12,45,60,123},
	{432,540,432},
	{43,21,11}
};
	// Adding two matrices
		int number[3][3] = {
	{23,4,6,34},
	{3,2,4},
	{32,11,12}
};
int sum[3][3];
for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			sum[i][j] = number[i][j] * numbers[i][j];
		}
	}
	
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}