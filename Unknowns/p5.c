#include <stdio.h>
#include <stdlib.h>
int main() {
	int *array;
	array = (int*)malloc(1000 * sizeof(int));
	for(int i=0;i<1000;i++) {
		array[i] = i ;
		printf("%d\n",array[i]);
	}
	free(array);
	return 0;
}