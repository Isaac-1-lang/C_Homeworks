#include <stdio.h>
int main() {
	int number[5][5] = {
	{45,878,656,354,44},
	{90,13,56,87,32},
	{95,443,32,670,232},
	{32,232,2132,2354,90},
	{134,7865,54334,23434,32}
	};
	// How to access different elements
	int *ptr = &number[0][0];
	int cols=5, rows =5;
	int row_index = 4, col_index = 4;
	int value = *(ptr + row_index* cols + col_index);
	printf("[%d][%d]: %d",row_index,col_index,value);
}