// Pointers with arrays


#include <stdio.h>
int doublePointer(int **arr) {
	for(int i=0;i<10;i++) {
		int *product = &arr;
		int result = (*arr)[i] + 23;
		printf("The result is %d\n",result);
	}
}


int main() {
	int array[10] = {21,320,98,54,23,21,3123,13,10,69};
	int *ptr = array;
	doublePointer(&ptr);
	return 0;
}