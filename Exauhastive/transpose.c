// Finding the transpose of the matrices {
#include <stdio.h>


int main() {
	int numbers[3][3] = {
	{12,45,60,123},
	{432,540,432},
	{43,21,11}
};
   int transpose[3][3];
   for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
		 transpose[i][j] = numbers[j][i];
		}
	}
	
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}

}