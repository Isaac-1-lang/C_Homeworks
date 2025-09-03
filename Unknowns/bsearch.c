// Binary search of numbers
#include <stdio.h>
#include <math.h>
int main() {
	int num=1;
	int array[10][10];
	for(int i=0;i<10;i++) {
		for(int j=0;j<10;j++) {
			array[i][j] = num++;
		}
	}
	printf("%d",array[2][2]);
	return 0;
}