// finding an element in array using pointers
#include <stdio.h>

int main() {
	int numbers[1][10] = {23,50,780,654,32,121,560,5434,324,310};
	int row_index= 0, col_index=5;
	int *ptr= &numbers[0][0];
	int value = *(ptr+ row_index*10 + col_index);
	printf("The value[%d][%d] is: %d",row_index,col_index,value);
	return 0;
}